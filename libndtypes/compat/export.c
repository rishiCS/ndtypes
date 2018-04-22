/*
 * BSD 3-Clause License
 *
 * Copyright (c) 2017-2018, plures
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <inttypes.h>
#include <stdarg.h>
#include <errno.h>
#include <assert.h>
#include "ndtypes.h"


/******************************************************************************/
/*                                String buffer                               */
/******************************************************************************/

#undef buf_t
typedef struct {
    size_t count; /* count the required size */
    size_t size;  /* buffer size (0 for the count phase) */
    char *cur;    /* buffer data (NULL for the count phase) */
} buf_t;

static int
_ndt_snprintf(ndt_context_t *ctx, buf_t *buf, const char *fmt, va_list ap)
{
    int n;

    errno = 0;
    n = vsnprintf(buf->cur, buf->size, fmt, ap);
    if (buf->cur && n < 0) {
        if (errno == ENOMEM) {
            ndt_err_format(ctx, NDT_MemoryError, "out of memory");
        }
        else {
            ndt_err_format(ctx, NDT_OSError, "output error");
        }
        return -1;
    }

    if (buf->cur && (size_t)n >= buf->size) {
         ndt_err_format(ctx, NDT_ValueError, "insufficient buffer size");
        return -1;
    }

    buf->count += n;

    if (buf->cur) {
        buf->cur += n;
        buf->size -= n;
    }

    return 0;
}

static int
ndt_snprintf(ndt_context_t *ctx, buf_t *buf, const char *fmt, ...)
{
    va_list ap;
    int n;

    va_start(ap, fmt);
    n = _ndt_snprintf(ctx, buf, fmt, ap);
    va_end(ap);

    return n;
}


/******************************************************************************/
/*                       PEP-3118 format string of a type                     */
/******************************************************************************/

static int format(buf_t *buf, const ndt_t *t, ndt_context_t *ctx);

#if 0
static int
function_types(buf_t *buf, const ndt_t *t, ndt_context_t *ctx)
{
    int64_t i;
    int n;

    assert(t->tag == Function);

    if (t->Function.nin == 0) {
        n = ndt_snprintf(ctx, buf, "nil");
        if (n < 0) return -1;
    }
    else {
        for (i = 0; i < t->Function.nin; i++) {
            if (i >= 1) {
                n = ndt_snprintf(ctx, buf, ", ");
                if (n < 0) return -1;
            }

            n = datashape(buf, t->Function.types[i], d, ctx);
            if (n < 0) return -1;
        }
    }

    n = ndt_snprintf(ctx, buf, " -> ");
    if (n < 0) return -1;

    if (t->Function.nout == 0) {
        n = ndt_snprintf(ctx, buf, "void");
        if (n < 0) return -1;
    }
    else {
        for (i = t->Function.nin; i < t->Function.nargs; i++) {
            if (i >= t->Function.nin + 1) {
                n = ndt_snprintf(ctx, buf, ", ");
                if (n < 0) return -1;
            }

            n = datashape(buf, t->Function.types[i], d, ctx);
            if (n < 0) return -1;
        }
    }

    return 0;
}
#endif

static int
option(const ndt_t *t, ndt_context_t *ctx)
{
    if (ndt_is_optional(t)) {
        ndt_err_format(ctx, NDT_ValueError,
            "buffer protocol does not support optional types");
        return -1;
    }

    return 0;
}

static int
primitive(buf_t *buf, const ndt_t *t, const char *fmt, ndt_context_t *ctx)
{
    int n;

    if (ndt_endian_is_set(t)) {
        n = ndt_snprintf(ctx, buf, ndt_is_little_endian(t) ? "<" : ">");
    }
    else {
        n = ndt_snprintf(ctx, buf, "=");
    }
    if (n < 0) return -1;

    return ndt_snprintf(ctx, buf, fmt);
}

static int
format_dimensions(buf_t *buf, const ndt_t *t, ndt_context_t *ctx)
{
    int n;

    if (!ndt_is_c_contiguous(t)) {
        ndt_err_format(ctx, NDT_ValueError,
            "dimensions must be C-contiguous");
        return -1;
    }

    n = ndt_snprintf(ctx, buf, "(");
    if (n < 0) return -1;

    for (; t->ndim > 0; t=t->FixedDim.type) {
        n = ndt_snprintf(ctx, buf, "%" PRIi64 "%s", t->FixedDim.shape,
                         t->ndim >= 2 ? "," : "");
        if (n < 0) return -1;
    }

    n = ndt_snprintf(ctx, buf, ")");
    if (n < 0) return -1;

    return format(buf, t, ctx);
}

static int
format_tuple(buf_t *buf, const ndt_t *t, ndt_context_t *ctx)
{
    int n;

    if (t->Tuple.flag == Variadic) {
        ndt_err_format(ctx, NDT_ValueError,
            "cannot convert variadic tuple");
        return -1;
    }

    for (int64_t i = 0; i < t->Tuple.shape; i++) {
        n = format(buf, t->Tuple.types[i], ctx);
        if (n < 0) return -1;

        for (uint16_t k = 0; k < t->Concrete.Tuple.pad[i]; k++) {
            n = ndt_snprintf(ctx, buf, "x");
            if (n < 0) return -1;
        }
    }

    return 0;
}

static int
format_record(buf_t *buf, const ndt_t *t, ndt_context_t *ctx)
{
    int n;

    if (t->Record.flag == Variadic) {
        ndt_err_format(ctx, NDT_ValueError,
            "cannot convert variadic record");
        return -1;
    }

    n = ndt_snprintf(ctx, buf, "T{");
    if (n < 0) return -1;

    for (int64_t i = 0; i < t->Record.shape; i++) {
        n = format(buf, t->Record.types[i], ctx);
        if (n < 0) return -1;

        for (uint16_t k = 0; k < t->Concrete.Record.pad[i]; k++) {
            n = ndt_snprintf(ctx, buf, "x");
            if (n < 0) return -1;
        }

        n = ndt_snprintf(ctx, buf, ":%s:", t->Record.names[i]);
        if (n < 0) return -1;
    }

    n = ndt_snprintf(ctx, buf, "}");
    if (n < 0) return -1;

    return 0;
}

static int
format_fixed_bytes(buf_t *buf, const ndt_t *t, ndt_context_t *ctx)
{
    if (t->FixedBytes.align != 1) {
        ndt_err_format(ctx, NDT_ValueError,
            "buffer protocol does not support alignment");
            return -1;
    }

    return ndt_snprintf(ctx, buf, "%" PRIi64 "s", t->FixedBytes.size);
}

static int
format(buf_t *buf, const ndt_t *t, ndt_context_t *ctx)
{
    int n;

    n = option(t, ctx);
    if (n < 0) return -1;

    switch (t->tag) {
        case FixedDim: return format_dimensions(buf, t, ctx);
        case Tuple: return format_tuple(buf, t, ctx);
        case Record: return format_record(buf, t, ctx);

        case FixedBytes: return format_fixed_bytes(buf, t, ctx);

        case Bool: return ndt_snprintf(ctx, buf, "?");

        case Int8: return primitive(buf, t, "b", ctx);
        case Int16: return primitive(buf, t, "h", ctx);
        case Int32: return primitive(buf, t, "i", ctx);
        case Int64: return primitive(buf, t, "q", ctx);

        case Uint8: return primitive(buf, t, "B", ctx);
        case Uint16: return primitive(buf, t, "H", ctx);
        case Uint32: return primitive(buf, t, "I", ctx);
        case Uint64: return primitive(buf, t, "Q", ctx);

        case Float16: return primitive(buf, t, "e", ctx);
        case Float32: return primitive(buf, t, "f", ctx);
        case Float64: return primitive(buf, t, "d", ctx);

        case Complex32: return primitive(buf, t, "E", ctx);
        case Complex64: return primitive(buf, t, "F", ctx);
        case Complex128: return primitive(buf, t, "D", ctx);

        case Char:
            if (t->Char.encoding == Ascii) return ndt_snprintf(ctx, buf, "c");
            /* fall through */

        case Module: case Function:
        case VarDim: case SymbolicDim: case EllipsisDim:
        case Ref: case Constr: case Nominal:
        case Categorical:
        case FixedString: case String: case Bytes:
        case Typevar:
        case AnyKind: case ScalarKind:
        case SignedKind: case UnsignedKind:
        case FloatKind: case ComplexKind:
        case FixedStringKind: case FixedBytesKind:
            ndt_internal_error("type is not supported by the buffer protocol");
            return -1;
    }

    /* NOT REACHED: tags should be exhaustive. */
    ndt_internal_error("invalid tag");
}


/******************************************************************************/
/*                    API: conversion to buffer protocol format               */
/******************************************************************************/

char *
ndt_to_bpformat(const ndt_t *t, ndt_context_t *ctx)
{
    buf_t buf = {0, 0, NULL};
    char *s;
    size_t count;

    if (format(&buf, t, ctx) < 0) {
        return NULL;
    }

    count = buf.count;
    buf.count = 0;
    buf.size = count+1;

    buf.cur = s = ndt_alloc(1, count+1);
    if (buf.cur == NULL) {
        return ndt_memory_error(ctx);
    }

    if (format(&buf, t, ctx) < 0) {
        ndt_free(s);
        return NULL;
    }
    s[count] = '\0';

    return s;
}