/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "grammar.y" /* yacc.c:339  */

/*
 * BSD 3-Clause License
 *
 * Copyright (c) 2017, plures
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


#include "grammar.h"
#include "lexer.h"


#undef yyerror
#undef yylex

void
yyerror(YYLTYPE *loc, yyscan_t scanner, ndt_t **ast, ndt_meta_t *meta,
        ndt_context_t *ctx, const char *msg)
{
    (void)scanner;
    (void)ast;
    (void)meta;

    ndt_err_format(ctx, NDT_ParseError, "%d:%d: %s\n", loc->first_line,
                   loc->first_column, msg);
}

int
yylex(YYSTYPE *val, YYLTYPE *loc, yyscan_t scanner, ndt_context_t *ctx)
{
    return lexfunc(val, loc, scanner, ctx);
}

#line 126 "grammar.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "grammar.h".  */
#ifndef YY_YY_GRAMMAR_H_INCLUDED
# define YY_YY_GRAMMAR_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 61 "grammar.y" /* yacc.c:355  */

  #include "ndtypes.h"
  #include "seq.h"
  #include "parsefuncs.h"
  #define YY_TYPEDEF_YY_SCANNER_T
  typedef void * yyscan_t;

#line 164 "grammar.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ENDMARKER = 0,
    ANY_KIND = 258,
    SCALAR_KIND = 259,
    VOID = 260,
    BOOL = 261,
    SIGNED_KIND = 262,
    INT8 = 263,
    INT16 = 264,
    INT32 = 265,
    INT64 = 266,
    UNSIGNED_KIND = 267,
    UINT8 = 268,
    UINT16 = 269,
    UINT32 = 270,
    UINT64 = 271,
    FLOAT_KIND = 272,
    FLOAT16 = 273,
    FLOAT32 = 274,
    FLOAT64 = 275,
    COMPLEX_KIND = 276,
    COMPLEX32 = 277,
    COMPLEX64 = 278,
    COMPLEX128 = 279,
    CATEGORICAL = 280,
    NA = 281,
    INTPTR = 282,
    UINTPTR = 283,
    SIZE = 284,
    CHAR = 285,
    STRING = 286,
    FIXED_STRING_KIND = 287,
    FIXED_STRING = 288,
    BYTES = 289,
    FIXED_BYTES_KIND = 290,
    FIXED_BYTES = 291,
    REF = 292,
    FIXED = 293,
    VAR = 294,
    COMMA = 295,
    DOT = 296,
    COLON = 297,
    LPAREN = 298,
    RPAREN = 299,
    LBRACE = 300,
    RBRACE = 301,
    LBRACK = 302,
    RBRACK = 303,
    STAR = 304,
    ELLIPSIS = 305,
    RARROW = 306,
    EQUAL = 307,
    QUESTIONMARK = 308,
    AMPERSAND = 309,
    BAR = 310,
    ERRTOKEN = 311,
    INTEGER = 312,
    FLOATNUMBER = 313,
    STRINGLIT = 314,
    NAME_LOWER = 315,
    NAME_UPPER = 316,
    NAME_OTHER = 317
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 89 "grammar.y" /* yacc.c:355  */

    ndt_t *ndt;
    ndt_field_t *field;
    ndt_field_seq_t *field_seq;
    ndt_value_t *typed_value;
    ndt_value_seq_t *typed_value_seq;
    ndt_attr_t *attribute;
    ndt_attr_seq_t *attribute_seq;
    enum ndt_variadic variadic_flag;
    enum ndt_encoding encoding;
    char *string;
    ndt_string_seq_t *string_seq;

#line 254 "grammar.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (yyscan_t scanner, ndt_t **ast, ndt_meta_t *meta, ndt_context_t *ctx);
/* "%code provides" blocks.  */
#line 69 "grammar.y" /* yacc.c:355  */

  #define YY_DECL extern int lexfunc(YYSTYPE *yylval_param, YYLTYPE *yylloc_param, yyscan_t yyscanner, ndt_context_t *ctx)
  extern int lexfunc(YYSTYPE *, YYLTYPE *, yyscan_t, ndt_context_t *);
  void yyerror(YYLTYPE *loc, yyscan_t scanner, ndt_t **ast, ndt_meta_t *meta, ndt_context_t *ctx, const char *msg);

#line 284 "grammar.c" /* yacc.c:355  */

#endif /* !YY_YY_GRAMMAR_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 290 "grammar.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  121
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   588

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  235

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   192,   192,   196,   197,   201,   202,   203,   206,   207,
     210,   211,   212,   213,   214,   215,   218,   219,   220,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   234,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   259,
     260,   261,   262,   265,   266,   267,   268,   271,   272,   273,
     276,   277,   278,   282,   283,   284,   287,   288,   291,   294,
     295,   298,   301,   304,   307,   308,   311,   314,   315,   318,
     319,   320,   321,   324,   325,   328,   329,   330,   333,   334,
     335,   338,   339,   342,   343,   346,   347,   348,   351,   352,
     355,   356,   359,   360,   361,   364,   365,   368,   369,   372,
     373,   376,   377,   380,   381,   382,   383,   386,   388,   390,
     392,   394
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "ANY_KIND", "SCALAR_KIND",
  "VOID", "BOOL", "SIGNED_KIND", "INT8", "INT16", "INT32", "INT64",
  "UNSIGNED_KIND", "UINT8", "UINT16", "UINT32", "UINT64", "FLOAT_KIND",
  "FLOAT16", "FLOAT32", "FLOAT64", "COMPLEX_KIND", "COMPLEX32",
  "COMPLEX64", "COMPLEX128", "CATEGORICAL", "NA", "INTPTR", "UINTPTR",
  "SIZE", "CHAR", "STRING", "FIXED_STRING_KIND", "FIXED_STRING", "BYTES",
  "FIXED_BYTES_KIND", "FIXED_BYTES", "REF", "FIXED", "VAR", "COMMA", "DOT",
  "COLON", "LPAREN", "RPAREN", "LBRACE", "RBRACE", "LBRACK", "RBRACK",
  "STAR", "ELLIPSIS", "RARROW", "EQUAL", "QUESTIONMARK", "AMPERSAND",
  "BAR", "ERRTOKEN", "INTEGER", "FLOATNUMBER", "STRINGLIT", "NAME_LOWER",
  "NAME_UPPER", "NAME_OTHER", "$accept", "input", "datashape_or_module",
  "datashape", "dimensions", "dimensions_nooption", "dimensions_tail",
  "dtype", "scalar", "signed", "unsigned", "ieee_float", "ieee_complex",
  "alias", "character", "string", "fixed_string", "encoding", "bytes",
  "fixed_bytes", "ref", "categorical", "typed_value_seq", "typed_value",
  "variadic_flag", "comma_variadic_flag", "tuple_type", "tuple_field_seq",
  "tuple_field", "record_type", "record_field_seq", "record_field",
  "record_field_name", "arguments_opt", "attribute_seq", "attribute",
  "untyped_value_seq", "untyped_value", "function_type", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317
};
# endif

#define YYPACT_NINF -187

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-187)))

#define YYTABLE_NINF -104

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     291,  -187,  -187,    -3,    -3,  -187,    -3,    -3,    -3,    -3,
    -187,    -3,    -3,    -3,    -3,  -187,    -3,    -3,    -3,  -187,
      -3,    -3,    -3,    13,    -3,    -3,    -3,    21,  -187,  -187,
      26,    -3,  -187,    29,    31,    56,    -3,   169,   -12,   -29,
     527,   350,    10,  -187,    -7,    88,   107,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,    57,  -187,  -187,    54,  -187,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,   -13,  -187,  -187,  -187,    61,    64,
    -187,    54,   350,    54,    66,   -21,    71,    28,  -187,    69,
      81,    87,  -187,    89,  -187,    92,  -187,  -187,  -187,    93,
     103,   409,   -27,  -187,  -187,  -187,   409,   111,   468,   409,
     108,  -187,  -187,   350,   106,    42,  -187,  -187,  -187,  -187,
    -187,    43,  -187,  -187,   115,    45,    50,   117,    51,   409,
      91,    54,  -187,   231,   118,     1,   119,   350,  -187,     5,
     120,   527,  -187,  -187,  -187,  -187,   350,   106,   121,    53,
    -187,   409,  -187,   -33,    54,  -187,   -13,  -187,  -187,    61,
    -187,  -187,  -187,   122,  -187,    89,   -23,   -19,    16,  -187,
      89,    58,  -187,  -187,  -187,   113,   112,   106,    33,  -187,
    -187,   151,  -187,  -187,  -187,    52,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,   165,   409,   167,  -187,    91,   171,  -187,
     350,    54,  -187,  -187,    -1,  -187,  -187,  -187,   162,    89,
     166,  -187,   -22,    52,  -187,   350,   172,   350,  -187,  -187,
    -187,   170,  -187,   350,  -187
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    19,    20,   105,   105,    31,   105,   105,   105,   105,
      33,   105,   105,   105,   105,    35,   105,   105,   105,    37,
     105,   105,   105,     0,   105,   105,   105,    66,    68,    42,
       0,   105,    45,     0,     0,     0,   105,    83,    83,     0,
       0,     0,     0,    25,    28,     0,     0,     3,     5,     8,
       6,    21,    32,    34,    36,    38,    39,    40,    41,    43,
      44,    46,    48,    47,    22,    23,    24,     0,    29,    30,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,     0,    63,    64,    65,     0,     0,
      72,     0,     0,     0,     0,    84,    25,    28,   104,    93,
       0,    85,    91,    85,    98,     0,    84,   102,   103,     0,
      85,     0,    28,     9,     7,    75,     0,     0,     0,     0,
       0,     1,     2,     0,     0,     0,   107,    82,    79,    80,
      81,     0,    77,    71,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    86,     0,    86,     0,     0,    95,    86,
       0,     0,    18,    14,    16,    10,     0,    25,     0,     0,
      12,     0,   117,     0,     0,   106,     0,    76,    67,     0,
      69,    73,    74,     0,    13,    85,     0,    87,    25,    92,
      85,     0,    89,    87,    99,     0,   100,   102,     0,    96,
      17,     0,    26,    27,    15,     0,   114,   115,   116,   113,
     109,   108,    78,     0,     0,     0,    94,     0,     0,    90,
       0,     0,    97,     4,     0,   111,    70,    11,     0,    85,
       0,   118,     0,     0,   110,     0,     0,     0,   101,   112,
     119,     0,   120,     0,   121
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -187,  -187,  -187,     0,  -104,   -34,  -108,   -35,  -187,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,  -187,    49,  -187,  -187,
    -187,  -187,  -187,     2,   182,  -100,  -187,  -187,    85,  -187,
     -37,   -44,  -187,   124,   -89,    60,  -187,  -186,  -187
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    45,    46,    99,    48,    49,   153,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,   134,    60,    61,
      62,    63,   131,   132,   100,   144,    64,   101,   102,    65,
     103,   104,   105,    68,   125,   126,   214,   200,    66
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,   110,   136,   146,   138,   114,   113,   152,   155,   215,
     150,   160,   152,   127,   195,   152,   118,   164,   164,   140,
     111,   207,   119,   120,   196,   197,   198,   199,   111,   159,
     111,   174,   206,   228,   117,   152,   118,   229,   106,   223,
      67,   115,   119,   120,   128,   129,   130,   224,   107,   108,
      98,   183,   176,   194,   181,   183,    84,   152,  -102,   116,
     188,   107,   108,    98,    88,   187,   108,    98,   163,    89,
    -103,   118,    91,   164,    92,   205,   154,   119,   120,   212,
     208,   154,   164,   166,   154,   169,   165,   167,   121,   170,
     164,   164,   137,   164,   171,   173,   217,   193,   164,    93,
     152,   184,   209,   175,   154,   184,   180,   122,   123,   196,
     197,   198,   199,  -102,   124,   139,   190,   113,   158,   226,
     133,   135,   222,   162,   141,   142,   154,   143,    69,   145,
      70,    71,    72,    73,   147,    74,    75,    76,    77,   148,
      78,    79,    80,   149,    81,    82,    83,   186,    85,    86,
      87,   107,   108,    98,   156,    90,   191,   161,   163,   168,
      94,   172,   182,   185,   210,   192,   189,   211,   202,   154,
     219,   204,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,   213,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,   216,
     221,   218,    37,   225,    38,   220,   231,   227,   203,    95,
     109,   233,    40,    41,   201,   230,    42,   232,   179,    96,
      97,    98,     0,   234,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     0,    37,     0,    38,     0,     0,     0,
       0,   177,     0,     0,    40,    41,     0,     0,    42,     0,
       0,   178,    97,    98,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,     0,     0,    37,     0,    38,     0,     0,     0,
       0,    39,     0,     0,    40,    41,     0,     0,    42,     0,
       0,    43,    44,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
       0,     0,     0,    37,     0,    38,     0,     0,     0,     0,
      39,     0,     0,    40,    41,     0,     0,    42,     0,     0,
      43,   112,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,     0,
       0,     0,    37,     0,    38,     0,     0,     0,     0,    39,
       0,     0,   151,    41,     0,     0,    42,     0,     0,    43,
     112,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,     0,     0,
       0,    37,     0,    38,     0,     0,     0,     0,    39,     0,
       0,    40,    41,     0,     0,    42,     0,     0,   157,   112,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,     0,     0,     0,
      37,     0,    38,     0,     0,     0,     0,    39,     0,     0,
       0,    41,     0,     0,    42,     0,     0,    43,   112
};

static const yytype_int16 yycheck[] =
{
       0,    38,    91,   103,    93,    40,    40,   111,   116,   195,
     110,   119,   116,    26,    47,   119,    43,    40,    40,    40,
      49,    40,    49,    50,    57,    58,    59,    60,    49,   118,
      49,   139,    55,    55,    41,   139,    43,   223,    50,    40,
      43,    41,    49,    50,    57,    58,    59,    48,    60,    61,
      62,    50,   141,   161,   143,    50,    43,   161,    42,    49,
     149,    60,    61,    62,    43,    60,    61,    62,    52,    43,
      42,    43,    43,    40,    43,   175,   111,    49,    50,    46,
     180,   116,    40,    40,   119,    40,    44,    44,     0,    44,
      40,    40,    92,    40,    44,    44,   204,    44,    40,    43,
     204,   145,    44,   140,   139,   149,   143,     0,    51,    57,
      58,    59,    60,    42,    60,    49,   151,   151,   118,   219,
      59,    57,   211,   123,    55,    44,   161,    40,     4,    40,
       6,     7,     8,     9,    42,    11,    12,    13,    14,    46,
      16,    17,    18,    40,    20,    21,    22,   147,    24,    25,
      26,    60,    61,    62,    43,    31,   156,    49,    52,    44,
      36,    44,    44,    44,    51,    44,    46,    55,   166,   204,
     207,    49,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    44,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    44,
     210,    44,    43,    51,    45,    44,    44,    51,   169,    50,
      38,    51,    53,    54,   164,   225,    57,   227,   143,    60,
      61,    62,    -1,   233,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    43,    -1,    45,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    53,    54,    -1,    -1,    57,    -1,
      -1,    60,    61,    62,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    43,    -1,    45,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    53,    54,    -1,    -1,    57,    -1,
      -1,    60,    61,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,    43,    -1,    45,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    53,    54,    -1,    -1,    57,    -1,    -1,
      60,    61,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      -1,    -1,    43,    -1,    45,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    53,    54,    -1,    -1,    57,    -1,    -1,    60,
      61,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    43,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    53,    54,    -1,    -1,    57,    -1,    -1,    60,    61,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      43,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    54,    -1,    -1,    57,    -1,    -1,    60,    61
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    43,    45,    50,
      53,    54,    57,    60,    61,    64,    65,    66,    67,    68,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      81,    82,    83,    84,    89,    92,   101,    43,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    43,    96,    96,    96,    43,    43,
      96,    43,    43,    43,    96,    50,    60,    61,    62,    66,
      87,    90,    91,    93,    94,    95,    50,    60,    61,    87,
      93,    49,    61,    68,    70,    66,    49,    41,    43,    49,
      50,     0,     0,    51,    60,    97,    98,    26,    57,    58,
      59,    85,    86,    59,    80,    57,    97,    66,    97,    49,
      40,    55,    44,    40,    88,    40,    88,    42,    46,    40,
      88,    53,    67,    69,    70,    69,    43,    60,    66,    97,
      69,    49,    66,    52,    40,    44,    40,    44,    44,    40,
      44,    44,    44,    44,    69,    93,    97,    50,    60,    91,
      93,    97,    44,    50,    94,    44,    66,    60,    97,    46,
      70,    66,    44,    44,    69,    47,    57,    58,    59,    60,
     100,    98,    86,    80,    49,    88,    55,    40,    88,    44,
      51,    55,    46,    44,    99,   100,    44,    69,    44,    93,
      44,    66,    97,    40,    48,    51,    88,    51,    55,   100,
      66,    44,    66,    51,    66
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    65,    66,    66,    66,    67,    67,
      68,    68,    68,    68,    68,    68,    69,    69,    69,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    72,
      72,    72,    72,    73,    73,    73,    73,    74,    74,    74,
      75,    75,    75,    76,    76,    76,    77,    77,    78,    79,
      79,    80,    81,    82,    83,    83,    84,    85,    85,    86,
      86,    86,    86,    87,    87,    88,    88,    88,    89,    89,
      89,    90,    90,    91,    91,    92,    92,    92,    93,    93,
      94,    94,    95,    95,    95,    96,    96,    97,    97,    98,
      98,    99,    99,   100,   100,   100,   100,   101,   101,   101,
     101,   101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     5,     1,     1,     2,     1,     2,
       3,     6,     3,     4,     3,     4,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     4,     1,     4,
       6,     1,     2,     4,     4,     2,     4,     1,     3,     1,
       1,     1,     1,     0,     1,     0,     1,     2,     3,     4,
       5,     1,     3,     1,     4,     3,     4,     5,     1,     3,
       3,     6,     1,     1,     1,     0,     3,     1,     3,     3,
       5,     1,     3,     1,     1,     1,     1,     3,     6,     8,
       8,    10
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (&yylloc, scanner, ast, meta, ctx, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, scanner, ast, meta, ctx); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, ndt_t **ast, ndt_meta_t *meta, ndt_context_t *ctx)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (ast);
  YYUSE (meta);
  YYUSE (ctx);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, ndt_t **ast, ndt_meta_t *meta, ndt_context_t *ctx)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, scanner, ast, meta, ctx);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, yyscan_t scanner, ndt_t **ast, ndt_meta_t *meta, ndt_context_t *ctx)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , scanner, ast, meta, ctx);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, ast, meta, ctx); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, ndt_t **ast, ndt_meta_t *meta, ndt_context_t *ctx)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (ast);
  YYUSE (meta);
  YYUSE (ctx);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 57: /* INTEGER  */
#line 186 "grammar.y" /* yacc.c:1257  */
      { ndt_free(((*yyvaluep).string)); }
#line 1437 "grammar.c" /* yacc.c:1257  */
        break;

    case 58: /* FLOATNUMBER  */
#line 186 "grammar.y" /* yacc.c:1257  */
      { ndt_free(((*yyvaluep).string)); }
#line 1443 "grammar.c" /* yacc.c:1257  */
        break;

    case 59: /* STRINGLIT  */
#line 186 "grammar.y" /* yacc.c:1257  */
      { ndt_free(((*yyvaluep).string)); }
#line 1449 "grammar.c" /* yacc.c:1257  */
        break;

    case 60: /* NAME_LOWER  */
#line 186 "grammar.y" /* yacc.c:1257  */
      { ndt_free(((*yyvaluep).string)); }
#line 1455 "grammar.c" /* yacc.c:1257  */
        break;

    case 61: /* NAME_UPPER  */
#line 186 "grammar.y" /* yacc.c:1257  */
      { ndt_free(((*yyvaluep).string)); }
#line 1461 "grammar.c" /* yacc.c:1257  */
        break;

    case 62: /* NAME_OTHER  */
#line 186 "grammar.y" /* yacc.c:1257  */
      { ndt_free(((*yyvaluep).string)); }
#line 1467 "grammar.c" /* yacc.c:1257  */
        break;

    case 64: /* input  */
#line 179 "grammar.y" /* yacc.c:1257  */
      { ndt_del(((*yyvaluep).ndt)); }
#line 1473 "grammar.c" /* yacc.c:1257  */
        break;

    case 65: /* datashape_or_module  */
#line 179 "grammar.y" /* yacc.c:1257  */
      { ndt_del(((*yyvaluep).ndt)); }
#line 1479 "grammar.c" /* yacc.c:1257  */
        break;

    case 66: /* datashape  */
#line 179 "grammar.y" /* yacc.c:1257  */
      { ndt_del(((*yyvaluep).ndt)); }
#line 1485 "grammar.c" /* yacc.c:1257  */
        break;

    case 67: /* dimensions  */
#line 179 "grammar.y" /* yacc.c:1257  */
      { ndt_del(((*yyvaluep).ndt)); }
#line 1491 "grammar.c" /* yacc.c:1257  */
        break;

    case 68: /* dimensions_nooption  */
#line 179 "grammar.y" /* yacc.c:1257  */
      { ndt_del(((*yyvaluep).ndt)); }
#line 1497 "grammar.c" /* yacc.c:1257  */
        break;

    case 69: /* dimensions_tail  */
#line 179 "grammar.y" /* yacc.c:1257  */
      { ndt_del(((*yyvaluep).ndt)); }
#line 1503 "grammar.c" /* yacc.c:1257  */
        break;

    case 70: /* dtype  */
#line 179 "grammar.y" /* yacc.c:1257  */
      { ndt_del(((*yyvaluep).ndt)); }
#line 1509 "grammar.c" /* yacc.c:1257  */
        break;

    case 71: /* scalar  */
#line 179 "grammar.y" /* yacc.c:1257  */
      { ndt_del(((*yyvaluep).ndt)); }
#line 1515 "grammar.c" /* yacc.c:1257  */
        break;

    case 72: /* signed  */
#line 179 "grammar.y" /* yacc.c:1257  */
      { ndt_del(((*yyvaluep).ndt)); }
#line 1521 "grammar.c" /* yacc.c:1257  */
        break;

    case 73: /* unsigned  */
#line 179 "grammar.y" /* yacc.c:1257  */
      { ndt_del(((*yyvaluep).ndt)); }
#line 1527 "grammar.c" /* yacc.c:1257  */
        break;

    case 74: /* ieee_float  */
#line 179 "grammar.y" /* yacc.c:1257  */
      { ndt_del(((*yyvaluep).ndt)); }
#line 1533 "grammar.c" /* yacc.c:1257  */
        break;

    case 75: /* ieee_complex  */
#line 179 "grammar.y" /* yacc.c:1257  */
      { ndt_del(((*yyvaluep).ndt)); }
#line 1539 "grammar.c" /* yacc.c:1257  */
        break;

    case 76: /* alias  */
#line 179 "grammar.y" /* yacc.c:1257  */
      { ndt_del(((*yyvaluep).ndt)); }
#line 1545 "grammar.c" /* yacc.c:1257  */
        break;

    case 77: /* character  */
#line 179 "grammar.y" /* yacc.c:1257  */
      { ndt_del(((*yyvaluep).ndt)); }
#line 1551 "grammar.c" /* yacc.c:1257  */
        break;

    case 78: /* string  */
#line 179 "grammar.y" /* yacc.c:1257  */
      { ndt_del(((*yyvaluep).ndt)); }
#line 1557 "grammar.c" /* yacc.c:1257  */
        break;

    case 79: /* fixed_string  */
#line 179 "grammar.y" /* yacc.c:1257  */
      { ndt_del(((*yyvaluep).ndt)); }
#line 1563 "grammar.c" /* yacc.c:1257  */
        break;

    case 81: /* bytes  */
#line 179 "grammar.y" /* yacc.c:1257  */
      { ndt_del(((*yyvaluep).ndt)); }
#line 1569 "grammar.c" /* yacc.c:1257  */
        break;

    case 82: /* fixed_bytes  */
#line 179 "grammar.y" /* yacc.c:1257  */
      { ndt_del(((*yyvaluep).ndt)); }
#line 1575 "grammar.c" /* yacc.c:1257  */
        break;

    case 83: /* ref  */
#line 179 "grammar.y" /* yacc.c:1257  */
      { ndt_del(((*yyvaluep).ndt)); }
#line 1581 "grammar.c" /* yacc.c:1257  */
        break;

    case 84: /* categorical  */
#line 179 "grammar.y" /* yacc.c:1257  */
      { ndt_del(((*yyvaluep).ndt)); }
#line 1587 "grammar.c" /* yacc.c:1257  */
        break;

    case 85: /* typed_value_seq  */
#line 183 "grammar.y" /* yacc.c:1257  */
      { ndt_value_seq_del(((*yyvaluep).typed_value_seq)); }
#line 1593 "grammar.c" /* yacc.c:1257  */
        break;

    case 86: /* typed_value  */
#line 182 "grammar.y" /* yacc.c:1257  */
      { ndt_value_del(((*yyvaluep).typed_value)); }
#line 1599 "grammar.c" /* yacc.c:1257  */
        break;

    case 89: /* tuple_type  */
#line 179 "grammar.y" /* yacc.c:1257  */
      { ndt_del(((*yyvaluep).ndt)); }
#line 1605 "grammar.c" /* yacc.c:1257  */
        break;

    case 90: /* tuple_field_seq  */
#line 181 "grammar.y" /* yacc.c:1257  */
      { ndt_field_seq_del(((*yyvaluep).field_seq)); }
#line 1611 "grammar.c" /* yacc.c:1257  */
        break;

    case 91: /* tuple_field  */
#line 180 "grammar.y" /* yacc.c:1257  */
      { ndt_field_del(((*yyvaluep).field)); }
#line 1617 "grammar.c" /* yacc.c:1257  */
        break;

    case 92: /* record_type  */
#line 179 "grammar.y" /* yacc.c:1257  */
      { ndt_del(((*yyvaluep).ndt)); }
#line 1623 "grammar.c" /* yacc.c:1257  */
        break;

    case 93: /* record_field_seq  */
#line 181 "grammar.y" /* yacc.c:1257  */
      { ndt_field_seq_del(((*yyvaluep).field_seq)); }
#line 1629 "grammar.c" /* yacc.c:1257  */
        break;

    case 94: /* record_field  */
#line 180 "grammar.y" /* yacc.c:1257  */
      { ndt_field_del(((*yyvaluep).field)); }
#line 1635 "grammar.c" /* yacc.c:1257  */
        break;

    case 95: /* record_field_name  */
#line 186 "grammar.y" /* yacc.c:1257  */
      { ndt_free(((*yyvaluep).string)); }
#line 1641 "grammar.c" /* yacc.c:1257  */
        break;

    case 96: /* arguments_opt  */
#line 185 "grammar.y" /* yacc.c:1257  */
      { ndt_attr_seq_del(((*yyvaluep).attribute_seq)); }
#line 1647 "grammar.c" /* yacc.c:1257  */
        break;

    case 97: /* attribute_seq  */
#line 185 "grammar.y" /* yacc.c:1257  */
      { ndt_attr_seq_del(((*yyvaluep).attribute_seq)); }
#line 1653 "grammar.c" /* yacc.c:1257  */
        break;

    case 98: /* attribute  */
#line 184 "grammar.y" /* yacc.c:1257  */
      { ndt_attr_del(((*yyvaluep).attribute)); }
#line 1659 "grammar.c" /* yacc.c:1257  */
        break;

    case 99: /* untyped_value_seq  */
#line 187 "grammar.y" /* yacc.c:1257  */
      { ndt_string_seq_del(((*yyvaluep).string_seq)); }
#line 1665 "grammar.c" /* yacc.c:1257  */
        break;

    case 100: /* untyped_value  */
#line 186 "grammar.y" /* yacc.c:1257  */
      { ndt_free(((*yyvaluep).string)); }
#line 1671 "grammar.c" /* yacc.c:1257  */
        break;

    case 101: /* function_type  */
#line 179 "grammar.y" /* yacc.c:1257  */
      { ndt_del(((*yyvaluep).ndt)); }
#line 1677 "grammar.c" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, ndt_t **ast, ndt_meta_t *meta, ndt_context_t *ctx)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 79 "grammar.y" /* yacc.c:1429  */
{
   yylloc.first_line = 1;
   yylloc.first_column = 1;
   yylloc.last_line = 1;
   yylloc.last_column = 1;
}

#line 1793 "grammar.c" /* yacc.c:1429  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, scanner, ctx);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 192 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = (yyvsp[-1].ndt);  *ast = (yyval.ndt); YYACCEPT; }
#line 1982 "grammar.c" /* yacc.c:1646  */
    break;

  case 3:
#line 196 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = (yyvsp[0].ndt); }
#line 1988 "grammar.c" /* yacc.c:1646  */
    break;

  case 4:
#line 197 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = ndt_module((yyvsp[-4].string), (yyvsp[-1].ndt), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 1994 "grammar.c" /* yacc.c:1646  */
    break;

  case 5:
#line 201 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = (yyvsp[0].ndt); }
#line 2000 "grammar.c" /* yacc.c:1646  */
    break;

  case 6:
#line 202 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = (yyvsp[0].ndt); }
#line 2006 "grammar.c" /* yacc.c:1646  */
    break;

  case 7:
#line 203 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = ndt_option((yyvsp[0].ndt), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2012 "grammar.c" /* yacc.c:1646  */
    break;

  case 8:
#line 206 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = (yyvsp[0].ndt); }
#line 2018 "grammar.c" /* yacc.c:1646  */
    break;

  case 9:
#line 207 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = ndt_dim_option((yyvsp[0].ndt), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2024 "grammar.c" /* yacc.c:1646  */
    break;

  case 10:
#line 210 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_fixed_dim_from_shape((yyvsp[-2].string), (yyvsp[0].ndt), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2030 "grammar.c" /* yacc.c:1646  */
    break;

  case 11:
#line 211 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_fixed_dim_from_attrs((yyvsp[-3].attribute_seq), (yyvsp[0].ndt), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2036 "grammar.c" /* yacc.c:1646  */
    break;

  case 12:
#line 212 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = ndt_symbolic_dim((yyvsp[-2].string), (yyvsp[0].ndt), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2042 "grammar.c" /* yacc.c:1646  */
    break;

  case 13:
#line 213 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_var_dim(meta, (yyvsp[-2].attribute_seq), (yyvsp[0].ndt), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2048 "grammar.c" /* yacc.c:1646  */
    break;

  case 14:
#line 214 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = ndt_ellipsis_dim(NULL, (yyvsp[0].ndt), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2054 "grammar.c" /* yacc.c:1646  */
    break;

  case 15:
#line 215 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = ndt_ellipsis_dim((yyvsp[-3].string), (yyvsp[0].ndt), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2060 "grammar.c" /* yacc.c:1646  */
    break;

  case 16:
#line 218 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = (yyvsp[0].ndt); }
#line 2066 "grammar.c" /* yacc.c:1646  */
    break;

  case 17:
#line 219 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = ndt_item_option((yyvsp[0].ndt), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2072 "grammar.c" /* yacc.c:1646  */
    break;

  case 18:
#line 220 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = (yyvsp[0].ndt); }
#line 2078 "grammar.c" /* yacc.c:1646  */
    break;

  case 19:
#line 223 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = ndt_any_kind(ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2084 "grammar.c" /* yacc.c:1646  */
    break;

  case 20:
#line 224 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = ndt_scalar_kind(ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2090 "grammar.c" /* yacc.c:1646  */
    break;

  case 21:
#line 225 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = (yyvsp[0].ndt); }
#line 2096 "grammar.c" /* yacc.c:1646  */
    break;

  case 22:
#line 226 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = (yyvsp[0].ndt); }
#line 2102 "grammar.c" /* yacc.c:1646  */
    break;

  case 23:
#line 227 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = (yyvsp[0].ndt); }
#line 2108 "grammar.c" /* yacc.c:1646  */
    break;

  case 24:
#line 228 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = (yyvsp[0].ndt); }
#line 2114 "grammar.c" /* yacc.c:1646  */
    break;

  case 25:
#line 229 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = ndt_nominal((yyvsp[0].string), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2120 "grammar.c" /* yacc.c:1646  */
    break;

  case 26:
#line 230 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = ndt_constr((yyvsp[-3].string), (yyvsp[-1].ndt), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2126 "grammar.c" /* yacc.c:1646  */
    break;

  case 27:
#line 231 "grammar.y" /* yacc.c:1646  */
    { (void)(yyvsp[-3].string); (void)(yyvsp[-1].attribute_seq); ndt_free((yyvsp[-3].string)); ndt_attr_seq_del((yyvsp[-1].attribute_seq)); (yyval.ndt) = NULL;
                                            ndt_err_format(ctx, NDT_NotImplementedError, "general attributes are not implemented");
                                            YYABORT; }
#line 2134 "grammar.c" /* yacc.c:1646  */
    break;

  case 28:
#line 234 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = ndt_typevar((yyvsp[0].string), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2140 "grammar.c" /* yacc.c:1646  */
    break;

  case 29:
#line 237 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_primitive(Void, (yyvsp[0].attribute_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2146 "grammar.c" /* yacc.c:1646  */
    break;

  case 30:
#line 238 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_primitive(Bool, (yyvsp[0].attribute_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2152 "grammar.c" /* yacc.c:1646  */
    break;

  case 31:
#line 239 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = ndt_signed_kind(ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2158 "grammar.c" /* yacc.c:1646  */
    break;

  case 32:
#line 240 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = (yyvsp[0].ndt); }
#line 2164 "grammar.c" /* yacc.c:1646  */
    break;

  case 33:
#line 241 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = ndt_unsigned_kind(ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2170 "grammar.c" /* yacc.c:1646  */
    break;

  case 34:
#line 242 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = (yyvsp[0].ndt); }
#line 2176 "grammar.c" /* yacc.c:1646  */
    break;

  case 35:
#line 243 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = ndt_float_kind(ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2182 "grammar.c" /* yacc.c:1646  */
    break;

  case 36:
#line 244 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = (yyvsp[0].ndt); }
#line 2188 "grammar.c" /* yacc.c:1646  */
    break;

  case 37:
#line 245 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = ndt_complex_kind(ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2194 "grammar.c" /* yacc.c:1646  */
    break;

  case 38:
#line 246 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = (yyvsp[0].ndt); }
#line 2200 "grammar.c" /* yacc.c:1646  */
    break;

  case 39:
#line 247 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = (yyvsp[0].ndt); }
#line 2206 "grammar.c" /* yacc.c:1646  */
    break;

  case 40:
#line 248 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = (yyvsp[0].ndt); }
#line 2212 "grammar.c" /* yacc.c:1646  */
    break;

  case 41:
#line 249 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = (yyvsp[0].ndt); }
#line 2218 "grammar.c" /* yacc.c:1646  */
    break;

  case 42:
#line 250 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = ndt_fixed_string_kind(ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2224 "grammar.c" /* yacc.c:1646  */
    break;

  case 43:
#line 251 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = (yyvsp[0].ndt); }
#line 2230 "grammar.c" /* yacc.c:1646  */
    break;

  case 44:
#line 252 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = (yyvsp[0].ndt); }
#line 2236 "grammar.c" /* yacc.c:1646  */
    break;

  case 45:
#line 253 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = ndt_fixed_bytes_kind(ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2242 "grammar.c" /* yacc.c:1646  */
    break;

  case 46:
#line 254 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = (yyvsp[0].ndt); }
#line 2248 "grammar.c" /* yacc.c:1646  */
    break;

  case 47:
#line 255 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = (yyvsp[0].ndt); }
#line 2254 "grammar.c" /* yacc.c:1646  */
    break;

  case 48:
#line 256 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = (yyvsp[0].ndt); }
#line 2260 "grammar.c" /* yacc.c:1646  */
    break;

  case 49:
#line 259 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_primitive(Int8, (yyvsp[0].attribute_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2266 "grammar.c" /* yacc.c:1646  */
    break;

  case 50:
#line 260 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_primitive(Int16, (yyvsp[0].attribute_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2272 "grammar.c" /* yacc.c:1646  */
    break;

  case 51:
#line 261 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_primitive(Int32, (yyvsp[0].attribute_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2278 "grammar.c" /* yacc.c:1646  */
    break;

  case 52:
#line 262 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_primitive(Int64, (yyvsp[0].attribute_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2284 "grammar.c" /* yacc.c:1646  */
    break;

  case 53:
#line 265 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_primitive(Uint8, (yyvsp[0].attribute_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2290 "grammar.c" /* yacc.c:1646  */
    break;

  case 54:
#line 266 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_primitive(Uint16, (yyvsp[0].attribute_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2296 "grammar.c" /* yacc.c:1646  */
    break;

  case 55:
#line 267 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_primitive(Uint32, (yyvsp[0].attribute_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2302 "grammar.c" /* yacc.c:1646  */
    break;

  case 56:
#line 268 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_primitive(Uint64, (yyvsp[0].attribute_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2308 "grammar.c" /* yacc.c:1646  */
    break;

  case 57:
#line 271 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_primitive(Float16, (yyvsp[0].attribute_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2314 "grammar.c" /* yacc.c:1646  */
    break;

  case 58:
#line 272 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_primitive(Float32, (yyvsp[0].attribute_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2320 "grammar.c" /* yacc.c:1646  */
    break;

  case 59:
#line 273 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_primitive(Float64, (yyvsp[0].attribute_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2326 "grammar.c" /* yacc.c:1646  */
    break;

  case 60:
#line 276 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_primitive(Complex32, (yyvsp[0].attribute_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2332 "grammar.c" /* yacc.c:1646  */
    break;

  case 61:
#line 277 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_primitive(Complex64, (yyvsp[0].attribute_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2338 "grammar.c" /* yacc.c:1646  */
    break;

  case 62:
#line 278 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_primitive(Complex128, (yyvsp[0].attribute_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2344 "grammar.c" /* yacc.c:1646  */
    break;

  case 63:
#line 282 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_alias(Intptr, (yyvsp[0].attribute_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2350 "grammar.c" /* yacc.c:1646  */
    break;

  case 64:
#line 283 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_alias(Uintptr, (yyvsp[0].attribute_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2356 "grammar.c" /* yacc.c:1646  */
    break;

  case 65:
#line 284 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_alias(Size, (yyvsp[0].attribute_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2362 "grammar.c" /* yacc.c:1646  */
    break;

  case 66:
#line 287 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = ndt_char(Utf32, ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2368 "grammar.c" /* yacc.c:1646  */
    break;

  case 67:
#line 288 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = ndt_char((yyvsp[-1].encoding), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2374 "grammar.c" /* yacc.c:1646  */
    break;

  case 68:
#line 291 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = ndt_string(ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2380 "grammar.c" /* yacc.c:1646  */
    break;

  case 69:
#line 294 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_fixed_string((yyvsp[-1].string), Utf8, ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2386 "grammar.c" /* yacc.c:1646  */
    break;

  case 70:
#line 295 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_fixed_string((yyvsp[-3].string), (yyvsp[-1].encoding), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2392 "grammar.c" /* yacc.c:1646  */
    break;

  case 71:
#line 298 "grammar.y" /* yacc.c:1646  */
    { (yyval.encoding) = ndt_encoding_from_string((yyvsp[0].string), ctx); if ((yyval.encoding) == ErrorEncoding) YYABORT; }
#line 2398 "grammar.c" /* yacc.c:1646  */
    break;

  case 72:
#line 301 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_bytes((yyvsp[0].attribute_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2404 "grammar.c" /* yacc.c:1646  */
    break;

  case 73:
#line 304 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_fixed_bytes((yyvsp[-1].attribute_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2410 "grammar.c" /* yacc.c:1646  */
    break;

  case 74:
#line 307 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = ndt_ref((yyvsp[-1].ndt), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2416 "grammar.c" /* yacc.c:1646  */
    break;

  case 75:
#line 308 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = ndt_ref((yyvsp[0].ndt), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2422 "grammar.c" /* yacc.c:1646  */
    break;

  case 76:
#line 311 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_categorical((yyvsp[-1].typed_value_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2428 "grammar.c" /* yacc.c:1646  */
    break;

  case 77:
#line 314 "grammar.y" /* yacc.c:1646  */
    { (yyval.typed_value_seq) = ndt_value_seq_new((yyvsp[0].typed_value), ctx); if ((yyval.typed_value_seq) == NULL) YYABORT; }
#line 2434 "grammar.c" /* yacc.c:1646  */
    break;

  case 78:
#line 315 "grammar.y" /* yacc.c:1646  */
    { (yyval.typed_value_seq) = ndt_value_seq_append((yyvsp[-2].typed_value_seq), (yyvsp[0].typed_value), ctx); if ((yyval.typed_value_seq) == NULL) YYABORT; }
#line 2440 "grammar.c" /* yacc.c:1646  */
    break;

  case 79:
#line 318 "grammar.y" /* yacc.c:1646  */
    { (yyval.typed_value) = ndt_value_from_number(ValInt64, (yyvsp[0].string), ctx); if ((yyval.typed_value) == NULL) YYABORT; }
#line 2446 "grammar.c" /* yacc.c:1646  */
    break;

  case 80:
#line 319 "grammar.y" /* yacc.c:1646  */
    { (yyval.typed_value) = ndt_value_from_number(ValFloat64, (yyvsp[0].string), ctx); if ((yyval.typed_value) == NULL) YYABORT; }
#line 2452 "grammar.c" /* yacc.c:1646  */
    break;

  case 81:
#line 320 "grammar.y" /* yacc.c:1646  */
    { (yyval.typed_value) = ndt_value_from_string((yyvsp[0].string), ctx); if ((yyval.typed_value) == NULL) YYABORT; }
#line 2458 "grammar.c" /* yacc.c:1646  */
    break;

  case 82:
#line 321 "grammar.y" /* yacc.c:1646  */
    { (yyval.typed_value) = ndt_value_na(ctx); if ((yyval.typed_value) == NULL) YYABORT; }
#line 2464 "grammar.c" /* yacc.c:1646  */
    break;

  case 83:
#line 324 "grammar.y" /* yacc.c:1646  */
    { (yyval.variadic_flag) = Nonvariadic; }
#line 2470 "grammar.c" /* yacc.c:1646  */
    break;

  case 84:
#line 325 "grammar.y" /* yacc.c:1646  */
    { (yyval.variadic_flag) = Variadic; }
#line 2476 "grammar.c" /* yacc.c:1646  */
    break;

  case 85:
#line 328 "grammar.y" /* yacc.c:1646  */
    { (yyval.variadic_flag) = Nonvariadic; }
#line 2482 "grammar.c" /* yacc.c:1646  */
    break;

  case 86:
#line 329 "grammar.y" /* yacc.c:1646  */
    { (yyval.variadic_flag) = Nonvariadic; }
#line 2488 "grammar.c" /* yacc.c:1646  */
    break;

  case 87:
#line 330 "grammar.y" /* yacc.c:1646  */
    { (yyval.variadic_flag) = Variadic; }
#line 2494 "grammar.c" /* yacc.c:1646  */
    break;

  case 88:
#line 333 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_tuple((yyvsp[-1].variadic_flag), NULL, NULL, ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2500 "grammar.c" /* yacc.c:1646  */
    break;

  case 89:
#line 334 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_tuple((yyvsp[-1].variadic_flag), (yyvsp[-2].field_seq), NULL, ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2506 "grammar.c" /* yacc.c:1646  */
    break;

  case 90:
#line 335 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_tuple(Nonvariadic, (yyvsp[-3].field_seq), (yyvsp[-1].attribute_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2512 "grammar.c" /* yacc.c:1646  */
    break;

  case 91:
#line 338 "grammar.y" /* yacc.c:1646  */
    { (yyval.field_seq) = ndt_field_seq_new((yyvsp[0].field), ctx); if ((yyval.field_seq) == NULL) YYABORT; }
#line 2518 "grammar.c" /* yacc.c:1646  */
    break;

  case 92:
#line 339 "grammar.y" /* yacc.c:1646  */
    { (yyval.field_seq) = ndt_field_seq_append((yyvsp[-2].field_seq), (yyvsp[0].field), ctx); if ((yyval.field_seq) == NULL) YYABORT; }
#line 2524 "grammar.c" /* yacc.c:1646  */
    break;

  case 93:
#line 342 "grammar.y" /* yacc.c:1646  */
    { (yyval.field) = mk_field(NULL, (yyvsp[0].ndt), NULL, ctx); if ((yyval.field) == NULL) YYABORT; }
#line 2530 "grammar.c" /* yacc.c:1646  */
    break;

  case 94:
#line 343 "grammar.y" /* yacc.c:1646  */
    { (yyval.field) = mk_field(NULL, (yyvsp[-3].ndt), (yyvsp[-1].attribute_seq), ctx); if ((yyval.field) == NULL) YYABORT; }
#line 2536 "grammar.c" /* yacc.c:1646  */
    break;

  case 95:
#line 346 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_record((yyvsp[-1].variadic_flag), NULL, NULL, ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2542 "grammar.c" /* yacc.c:1646  */
    break;

  case 96:
#line 347 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_record((yyvsp[-1].variadic_flag), (yyvsp[-2].field_seq), NULL, ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2548 "grammar.c" /* yacc.c:1646  */
    break;

  case 97:
#line 348 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_record(Nonvariadic, (yyvsp[-3].field_seq), (yyvsp[-1].attribute_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2554 "grammar.c" /* yacc.c:1646  */
    break;

  case 98:
#line 351 "grammar.y" /* yacc.c:1646  */
    { (yyval.field_seq) = ndt_field_seq_new((yyvsp[0].field), ctx); if ((yyval.field_seq) == NULL) YYABORT; }
#line 2560 "grammar.c" /* yacc.c:1646  */
    break;

  case 99:
#line 352 "grammar.y" /* yacc.c:1646  */
    { (yyval.field_seq) = ndt_field_seq_append((yyvsp[-2].field_seq), (yyvsp[0].field), ctx); if ((yyval.field_seq) == NULL) YYABORT; }
#line 2566 "grammar.c" /* yacc.c:1646  */
    break;

  case 100:
#line 355 "grammar.y" /* yacc.c:1646  */
    { (yyval.field) = mk_field((yyvsp[-2].string), (yyvsp[0].ndt), NULL, ctx); if ((yyval.field) == NULL) YYABORT; }
#line 2572 "grammar.c" /* yacc.c:1646  */
    break;

  case 101:
#line 356 "grammar.y" /* yacc.c:1646  */
    { (yyval.field) = mk_field((yyvsp[-5].string), (yyvsp[-3].ndt), (yyvsp[-1].attribute_seq), ctx); if ((yyval.field) == NULL) YYABORT; }
#line 2578 "grammar.c" /* yacc.c:1646  */
    break;

  case 102:
#line 359 "grammar.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); if ((yyval.string) == NULL) YYABORT; }
#line 2584 "grammar.c" /* yacc.c:1646  */
    break;

  case 103:
#line 360 "grammar.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); if ((yyval.string) == NULL) YYABORT; }
#line 2590 "grammar.c" /* yacc.c:1646  */
    break;

  case 104:
#line 361 "grammar.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); if ((yyval.string) == NULL) YYABORT; }
#line 2596 "grammar.c" /* yacc.c:1646  */
    break;

  case 105:
#line 364 "grammar.y" /* yacc.c:1646  */
    { (yyval.attribute_seq) = NULL; }
#line 2602 "grammar.c" /* yacc.c:1646  */
    break;

  case 106:
#line 365 "grammar.y" /* yacc.c:1646  */
    { (yyval.attribute_seq) = (yyvsp[-1].attribute_seq); if ((yyval.attribute_seq) == NULL) YYABORT; }
#line 2608 "grammar.c" /* yacc.c:1646  */
    break;

  case 107:
#line 368 "grammar.y" /* yacc.c:1646  */
    { (yyval.attribute_seq) = ndt_attr_seq_new((yyvsp[0].attribute), ctx); if ((yyval.attribute_seq) == NULL) YYABORT; }
#line 2614 "grammar.c" /* yacc.c:1646  */
    break;

  case 108:
#line 369 "grammar.y" /* yacc.c:1646  */
    { (yyval.attribute_seq) = ndt_attr_seq_append((yyvsp[-2].attribute_seq), (yyvsp[0].attribute), ctx); if ((yyval.attribute_seq) == NULL) YYABORT; }
#line 2620 "grammar.c" /* yacc.c:1646  */
    break;

  case 109:
#line 372 "grammar.y" /* yacc.c:1646  */
    { (yyval.attribute) = mk_attr((yyvsp[-2].string), (yyvsp[0].string), ctx); if ((yyval.attribute) == NULL) YYABORT; }
#line 2626 "grammar.c" /* yacc.c:1646  */
    break;

  case 110:
#line 373 "grammar.y" /* yacc.c:1646  */
    { (yyval.attribute) = mk_attr_from_seq((yyvsp[-4].string), (yyvsp[-1].string_seq), ctx); if ((yyval.attribute) == NULL) YYABORT; }
#line 2632 "grammar.c" /* yacc.c:1646  */
    break;

  case 111:
#line 376 "grammar.y" /* yacc.c:1646  */
    { (yyval.string_seq) = ndt_string_seq_new((yyvsp[0].string), ctx); if ((yyval.string_seq) == NULL) YYABORT; }
#line 2638 "grammar.c" /* yacc.c:1646  */
    break;

  case 112:
#line 377 "grammar.y" /* yacc.c:1646  */
    { (yyval.string_seq) = ndt_string_seq_append((yyvsp[-2].string_seq), (yyvsp[0].string), ctx); if ((yyval.string_seq) == NULL) YYABORT; }
#line 2644 "grammar.c" /* yacc.c:1646  */
    break;

  case 113:
#line 380 "grammar.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); if ((yyval.string) == NULL) YYABORT; }
#line 2650 "grammar.c" /* yacc.c:1646  */
    break;

  case 114:
#line 381 "grammar.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); if ((yyval.string) == NULL) YYABORT; }
#line 2656 "grammar.c" /* yacc.c:1646  */
    break;

  case 115:
#line 382 "grammar.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); if ((yyval.string) == NULL) YYABORT; }
#line 2662 "grammar.c" /* yacc.c:1646  */
    break;

  case 116:
#line 383 "grammar.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); if ((yyval.string) == NULL) YYABORT; }
#line 2668 "grammar.c" /* yacc.c:1646  */
    break;

  case 117:
#line 387 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_function_from_tuple((yyvsp[0].ndt), (yyvsp[-2].ndt), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2674 "grammar.c" /* yacc.c:1646  */
    break;

  case 118:
#line 389 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_function((yyvsp[0].ndt), Nonvariadic, NULL, (yyvsp[-3].variadic_flag), (yyvsp[-4].field_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2680 "grammar.c" /* yacc.c:1646  */
    break;

  case 119:
#line 391 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_function((yyvsp[0].ndt), Variadic, NULL, (yyvsp[-3].variadic_flag), (yyvsp[-4].field_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2686 "grammar.c" /* yacc.c:1646  */
    break;

  case 120:
#line 393 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_function((yyvsp[0].ndt), Nonvariadic, (yyvsp[-6].field_seq), (yyvsp[-3].variadic_flag), (yyvsp[-4].field_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2692 "grammar.c" /* yacc.c:1646  */
    break;

  case 121:
#line 395 "grammar.y" /* yacc.c:1646  */
    { (yyval.ndt) = mk_function((yyvsp[0].ndt), Variadic, (yyvsp[-8].field_seq), (yyvsp[-3].variadic_flag), (yyvsp[-4].field_seq), ctx); if ((yyval.ndt) == NULL) YYABORT; }
#line 2698 "grammar.c" /* yacc.c:1646  */
    break;


#line 2702 "grammar.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, scanner, ast, meta, ctx, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, scanner, ast, meta, ctx, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, scanner, ast, meta, ctx);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, scanner, ast, meta, ctx);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, ast, meta, ctx, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner, ast, meta, ctx);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, scanner, ast, meta, ctx);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
