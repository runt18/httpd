/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse ap_expr_yyparse
#define yylex   ap_expr_yylex
#define yyerror ap_expr_yyerror
#define yylval  ap_expr_yylval
#define yychar  ap_expr_yychar
#define yydebug ap_expr_yydebug
#define yynerrs ap_expr_yynerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_TRUE = 258,
     T_FALSE = 259,
     T_EXPR_BOOL = 260,
     T_EXPR_STRING = 261,
     T_ERROR = 262,
     T_DIGIT = 263,
     T_ID = 264,
     T_STRING = 265,
     T_REGEX = 266,
     T_REGEX_I = 267,
     T_REGEX_BACKREF = 268,
     T_OP_UNARY = 269,
     T_OP_BINARY = 270,
     T_STR_BEGIN = 271,
     T_STR_END = 272,
     T_VAR_BEGIN = 273,
     T_VAR_END = 274,
     T_OP_EQ = 275,
     T_OP_NE = 276,
     T_OP_LT = 277,
     T_OP_LE = 278,
     T_OP_GT = 279,
     T_OP_GE = 280,
     T_OP_REG = 281,
     T_OP_NRE = 282,
     T_OP_IN = 283,
     T_OP_STR_EQ = 284,
     T_OP_STR_NE = 285,
     T_OP_STR_LT = 286,
     T_OP_STR_LE = 287,
     T_OP_STR_GT = 288,
     T_OP_STR_GE = 289,
     T_OP_CONCAT = 290,
     T_OP_OR = 291,
     T_OP_AND = 292,
     T_OP_NOT = 293
   };
#endif
/* Tokens.  */
#define T_TRUE 258
#define T_FALSE 259
#define T_EXPR_BOOL 260
#define T_EXPR_STRING 261
#define T_ERROR 262
#define T_DIGIT 263
#define T_ID 264
#define T_STRING 265
#define T_REGEX 266
#define T_REGEX_I 267
#define T_REGEX_BACKREF 268
#define T_OP_UNARY 269
#define T_OP_BINARY 270
#define T_STR_BEGIN 271
#define T_STR_END 272
#define T_VAR_BEGIN 273
#define T_VAR_END 274
#define T_OP_EQ 275
#define T_OP_NE 276
#define T_OP_LT 277
#define T_OP_LE 278
#define T_OP_GT 279
#define T_OP_GE 280
#define T_OP_REG 281
#define T_OP_NRE 282
#define T_OP_IN 283
#define T_OP_STR_EQ 284
#define T_OP_STR_NE 285
#define T_OP_STR_LT 286
#define T_OP_STR_LE 287
#define T_OP_STR_GT 288
#define T_OP_STR_GE 289
#define T_OP_CONCAT 290
#define T_OP_OR 291
#define T_OP_AND 292
#define T_OP_NOT 293




/* Copy the first part of user declarations.  */
#line 31 "util_expr_parse.y"

#include "util_expr_private.h"


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 35 "util_expr_parse.y"
{
    char      *cpVal;
    ap_expr_t *exVal;
    int        num;
}
/* Line 193 of yacc.c.  */
#line 190 "util_expr_parse.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 102 "util_expr_parse.y"

#include "util_expr_private.h"
#define yyscanner ctx->scanner

int ap_expr_yylex(YYSTYPE *lvalp, void *scanner);


/* Line 216 of yacc.c.  */
#line 209 "util_expr_parse.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   129

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  53
/* YYNRULES -- Number of states.  */
#define YYNSTATES  96

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      44,    45,     2,     2,    48,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    49,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    47,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    13,    15,    18,    22,
      26,    28,    31,    35,    39,    41,    45,    49,    53,    57,
      61,    65,    69,    73,    77,    81,    85,    89,    93,    97,
     101,   103,   107,   109,   113,   116,   118,   120,   122,   124,
     126,   130,   136,   138,   142,   144,   146,   148,   152,   155,
     157,   159,   161,   166
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,     5,    52,    -1,     6,    56,    -1,     7,
      -1,     3,    -1,     4,    -1,    38,    52,    -1,    52,    36,
      52,    -1,    52,    37,    52,    -1,    53,    -1,    14,    59,
      -1,    59,    15,    59,    -1,    44,    52,    45,    -1,     7,
      -1,    59,    20,    59,    -1,    59,    21,    59,    -1,    59,
      22,    59,    -1,    59,    23,    59,    -1,    59,    24,    59,
      -1,    59,    25,    59,    -1,    59,    29,    59,    -1,    59,
      30,    59,    -1,    59,    31,    59,    -1,    59,    32,    59,
      -1,    59,    33,    59,    -1,    59,    34,    59,    -1,    59,
      28,    54,    -1,    59,    26,    60,    -1,    59,    27,    60,
      -1,    62,    -1,    46,    55,    47,    -1,    59,    -1,    55,
      48,    59,    -1,    56,    57,    -1,    57,    -1,     7,    -1,
      10,    -1,    58,    -1,    61,    -1,    18,     9,    19,    -1,
      18,     9,    49,    56,    19,    -1,     8,    -1,    59,    35,
      59,    -1,    58,    -1,    61,    -1,    63,    -1,    16,    56,
      17,    -1,    16,    17,    -1,    11,    -1,    12,    -1,    13,
      -1,     9,    44,    59,    45,    -1,     9,    44,    59,    45,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   112,   112,   113,   114,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     146,   147,   150,   151,   154,   155,   156,   159,   160,   161,
     164,   165,   168,   169,   170,   171,   172,   173,   174,   177,
     186,   197,   204,   207
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"true\"", "\"false\"",
  "\"boolean expression\"", "\"string expression\"", "\"error token\"",
  "\"number\"", "\"identifier\"", "\"cstring\"", "\"regex\"",
  "\"case-indendent regex\"", "\"regex back reference\"",
  "\"unary operator\"", "\"binary operator\"", "\"start of string\"",
  "\"end of string\"", "\"start of variable name\"",
  "\"end of variable name\"", "\"integer equal\"", "\"integer not equal\"",
  "\"integer less than\"", "\"integer less or equal\"",
  "\"integer greater than\"", "\"integer greater or equal\"",
  "\"regex match\"", "\"regex non-match\"", "\"contained in\"",
  "\"string equal\"", "\"string not equal\"", "\"string less than\"",
  "\"string less or equal\"", "\"string greater than\"",
  "\"string greater or equal\"", "\"string concatenation\"",
  "\"logical or\"", "\"logical and\"", "\"logical not\"", "\"function\"",
  "\"listfunction\"", "\"stringpart\"", "\"variable\"", "\"rebackref\"",
  "'('", "')'", "'{'", "'}'", "','", "':'", "$accept", "root", "expr",
  "comparison", "wordlist", "words", "string", "strpart", "var", "word",
  "regex", "backref", "lstfunccall", "strfunccall", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,    40,    41,   123,   125,    44,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    51,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      54,    54,    55,    55,    56,    56,    56,    57,    57,    57,
      58,    58,    59,    59,    59,    59,    59,    59,    59,    60,
      60,    61,    62,    63
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     1,     2,     3,     3,
       1,     2,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     3,     1,     3,     2,     1,     1,     1,     1,     1,
       3,     5,     1,     3,     1,     1,     1,     3,     2,     1,
       1,     1,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     4,     0,     5,     6,    14,    42,     0,
      51,     0,     0,     0,     0,     0,     2,    10,    44,     0,
      45,    46,    36,    37,     3,    35,    38,    39,     1,     0,
      11,    48,     0,     0,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,     0,    47,    40,     0,
      13,     8,     9,    12,    15,    16,    17,    18,    19,    20,
      49,    50,    28,    29,     0,     0,    27,    30,    21,    22,
      23,    24,    25,    26,    43,    53,     0,     0,     0,    32,
      41,     0,    31,     0,    52,    33
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,    16,    17,    76,    88,    24,    25,    18,    19,
      72,    20,    77,    21
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -30
static const yytype_int8 yypact[] =
{
       2,    60,     7,   -30,    13,   -30,   -30,   -30,   -30,   -29,
     -30,    43,    73,    12,    60,    60,    -8,   -30,   -30,    85,
     -30,   -30,   -30,   -30,    79,   -30,   -30,   -30,   -30,    43,
      25,   -30,   111,   -17,   -30,    17,    60,    60,    43,    43,
      43,    43,    43,    43,    43,   114,   114,    -4,    43,    43,
      43,    43,    43,    43,    43,   -30,   -19,   -30,   -30,     7,
     -30,    -8,   -10,    25,    25,    25,    25,    25,    25,    25,
     -30,   -30,   -30,   -30,    31,    43,   -30,   -30,    25,    25,
      25,    25,    25,    25,    25,   -30,    83,    43,    24,    25,
     -30,    20,   -30,    43,   -30,    25
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -30,   -30,     4,   -30,   -30,   -30,    -9,   -20,    -2,    -5,
      33,    -1,   -30,   -30
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      26,    27,    58,    32,    55,    74,    30,     1,     2,     3,
      26,    27,    55,    28,    22,    29,    54,    23,    34,    35,
      10,    33,    26,    27,    56,    13,    85,    37,    36,    37,
      26,    27,    59,    63,    64,    65,    66,    67,    68,    69,
      61,    62,    75,    78,    79,    80,    81,    82,    83,    84,
      86,     8,     9,    36,    37,    54,    10,    26,    27,    12,
      54,    13,    60,     5,     6,    94,    55,     7,     8,     9,
      89,    92,    93,    10,    11,    87,    12,     0,    13,    73,
      22,     0,    91,    23,    26,    27,    10,     0,    95,    23,
      31,    13,    10,    23,     0,     0,    10,    13,    14,     0,
      38,    13,    90,     0,    15,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    23,     0,     0,    10,    70,    71,     0,    57,    13
};

static const yytype_int8 yycheck[] =
{
       2,     2,    19,    12,    24,     9,    11,     5,     6,     7,
      12,    12,    32,     0,     7,    44,    35,    10,    14,    15,
      13,     9,    24,    24,    29,    18,    45,    37,    36,    37,
      32,    32,    49,    38,    39,    40,    41,    42,    43,    44,
      36,    37,    46,    48,    49,    50,    51,    52,    53,    54,
      59,     8,     9,    36,    37,    35,    13,    59,    59,    16,
      35,    18,    45,     3,     4,    45,    86,     7,     8,     9,
      75,    47,    48,    13,    14,    44,    16,    -1,    18,    46,
       7,    -1,    87,    10,    86,    86,    13,    -1,    93,    10,
      17,    18,    13,    10,    -1,    -1,    13,    18,    38,    -1,
      15,    18,    19,    -1,    44,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    10,    -1,    -1,    13,    11,    12,    -1,    17,    18
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,    51,     3,     4,     7,     8,     9,
      13,    14,    16,    18,    38,    44,    52,    53,    58,    59,
      61,    63,     7,    10,    56,    57,    58,    61,     0,    44,
      59,    17,    56,     9,    52,    52,    36,    37,    15,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    57,    59,    17,    19,    49,
      45,    52,    52,    59,    59,    59,    59,    59,    59,    59,
      11,    12,    60,    60,     9,    46,    54,    62,    59,    59,
      59,    59,    59,    59,    59,    45,    56,    44,    55,    59,
      19,    59,    47,    48,    45,    59
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (ctx, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, yyscanner)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, ctx); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, ap_expr_parse_ctx_t *ctx)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, ctx)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    ap_expr_parse_ctx_t *ctx;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (ctx);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, ap_expr_parse_ctx_t *ctx)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, ctx)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    ap_expr_parse_ctx_t *ctx;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, ctx);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, ap_expr_parse_ctx_t *ctx)
#else
static void
yy_reduce_print (yyvsp, yyrule, ctx)
    YYSTYPE *yyvsp;
    int yyrule;
    ap_expr_parse_ctx_t *ctx;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , ctx);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, ctx); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, ap_expr_parse_ctx_t *ctx)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, ctx)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    ap_expr_parse_ctx_t *ctx;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (ctx);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (ap_expr_parse_ctx_t *ctx);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (ap_expr_parse_ctx_t *ctx)
#else
int
yyparse (ctx)
    ap_expr_parse_ctx_t *ctx;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 112 "util_expr_parse.y"
    { ctx->expr = (yyvsp[(2) - (2)].exVal); ;}
    break;

  case 3:
#line 113 "util_expr_parse.y"
    { ctx->expr = (yyvsp[(2) - (2)].exVal); ;}
    break;

  case 4:
#line 114 "util_expr_parse.y"
    { YYABORT; ;}
    break;

  case 5:
#line 117 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_True,        NULL, NULL, ctx); ;}
    break;

  case 6:
#line 118 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_False,       NULL, NULL, ctx); ;}
    break;

  case 7:
#line 119 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_Not,         (yyvsp[(2) - (2)].exVal),   NULL, ctx); ;}
    break;

  case 8:
#line 120 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_Or,          (yyvsp[(1) - (3)].exVal),   (yyvsp[(3) - (3)].exVal),   ctx); ;}
    break;

  case 9:
#line 121 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_And,         (yyvsp[(1) - (3)].exVal),   (yyvsp[(3) - (3)].exVal),   ctx); ;}
    break;

  case 10:
#line 122 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_Comp,        (yyvsp[(1) - (1)].exVal),   NULL, ctx); ;}
    break;

  case 11:
#line 123 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_unary_op_make(       (yyvsp[(1) - (2)].cpVal),   (yyvsp[(2) - (2)].exVal),   ctx); ;}
    break;

  case 12:
#line 124 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_binary_op_make((yyvsp[(2) - (3)].cpVal),   (yyvsp[(1) - (3)].exVal),   (yyvsp[(3) - (3)].exVal),   ctx); ;}
    break;

  case 13:
#line 125 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(2) - (3)].exVal); ;}
    break;

  case 14:
#line 126 "util_expr_parse.y"
    { YYABORT; ;}
    break;

  case 15:
#line 129 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_EQ,      (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); ;}
    break;

  case 16:
#line 130 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_NE,      (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); ;}
    break;

  case 17:
#line 131 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_LT,      (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); ;}
    break;

  case 18:
#line 132 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_LE,      (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); ;}
    break;

  case 19:
#line 133 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_GT,      (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); ;}
    break;

  case 20:
#line 134 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_GE,      (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); ;}
    break;

  case 21:
#line 135 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_STR_EQ,  (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); ;}
    break;

  case 22:
#line 136 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_STR_NE,  (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); ;}
    break;

  case 23:
#line 137 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_STR_LT,  (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); ;}
    break;

  case 24:
#line 138 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_STR_LE,  (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); ;}
    break;

  case 25:
#line 139 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_STR_GT,  (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); ;}
    break;

  case 26:
#line 140 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_STR_GE,  (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); ;}
    break;

  case 27:
#line 141 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_IN,      (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); ;}
    break;

  case 28:
#line 142 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_REG,     (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); ;}
    break;

  case 29:
#line 143 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_NRE,     (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal), ctx); ;}
    break;

  case 30:
#line 146 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(1) - (1)].exVal); ;}
    break;

  case 31:
#line 147 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(2) - (3)].exVal); ;}
    break;

  case 32:
#line 150 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_ListElement, (yyvsp[(1) - (1)].exVal), NULL, ctx); ;}
    break;

  case 33:
#line 151 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_ListElement, (yyvsp[(3) - (3)].exVal), (yyvsp[(1) - (3)].exVal),   ctx); ;}
    break;

  case 34:
#line 154 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_Concat, (yyvsp[(1) - (2)].exVal), (yyvsp[(2) - (2)].exVal), ctx); ;}
    break;

  case 35:
#line 155 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(1) - (1)].exVal); ;}
    break;

  case 36:
#line 156 "util_expr_parse.y"
    { YYABORT; ;}
    break;

  case 37:
#line 159 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_String, (yyvsp[(1) - (1)].cpVal), NULL, ctx); ;}
    break;

  case 38:
#line 160 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(1) - (1)].exVal); ;}
    break;

  case 39:
#line 161 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(1) - (1)].exVal); ;}
    break;

  case 40:
#line 164 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_var_make((yyvsp[(2) - (3)].cpVal), ctx); ;}
    break;

  case 41:
#line 165 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_str_func_make((yyvsp[(2) - (5)].cpVal), (yyvsp[(4) - (5)].exVal), ctx); ;}
    break;

  case 42:
#line 168 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_Digit,  (yyvsp[(1) - (1)].cpVal), NULL, ctx); ;}
    break;

  case 43:
#line 169 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_Concat, (yyvsp[(1) - (3)].exVal), (yyvsp[(3) - (3)].exVal),   ctx); ;}
    break;

  case 44:
#line 170 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(1) - (1)].exVal); ;}
    break;

  case 45:
#line 171 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(1) - (1)].exVal); ;}
    break;

  case 46:
#line 172 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(1) - (1)].exVal); ;}
    break;

  case 47:
#line 173 "util_expr_parse.y"
    { (yyval.exVal) = (yyvsp[(2) - (3)].exVal); ;}
    break;

  case 48:
#line 174 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_make(op_String, "", NULL, ctx); ;}
    break;

  case 49:
#line 177 "util_expr_parse.y"
    {
                ap_regex_t *regex;
                if ((regex = ap_pregcomp(ctx->pool, (yyvsp[(1) - (1)].cpVal),
                                         AP_REG_EXTENDED|AP_REG_NOSUB)) == NULL) {
                    ctx->error = "Failed to compile regular expression";
                    YYERROR;
                }
                (yyval.exVal) = ap_expr_make(op_Regex, regex, NULL, ctx);
            ;}
    break;

  case 50:
#line 186 "util_expr_parse.y"
    {
                ap_regex_t *regex;
                if ((regex = ap_pregcomp(ctx->pool, (yyvsp[(1) - (1)].cpVal),
                                         AP_REG_EXTENDED|AP_REG_NOSUB|AP_REG_ICASE)) == NULL) {
                    ctx->error = "Failed to compile regular expression";
                    YYERROR;
                }
                (yyval.exVal) = ap_expr_make(op_Regex, regex, NULL, ctx);
            ;}
    break;

  case 51:
#line 197 "util_expr_parse.y"
    {
                int *n = apr_palloc(ctx->pool, sizeof(int));
                *n = (yyvsp[(1) - (1)].num);
                (yyval.exVal) = ap_expr_make(op_RegexBackref, n, NULL, ctx);
            ;}
    break;

  case 52:
#line 204 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_list_func_make((yyvsp[(1) - (4)].cpVal), (yyvsp[(3) - (4)].exVal), ctx); ;}
    break;

  case 53:
#line 207 "util_expr_parse.y"
    { (yyval.exVal) = ap_expr_str_func_make((yyvsp[(1) - (4)].cpVal), (yyvsp[(3) - (4)].exVal), ctx); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1788 "util_expr_parse.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (ctx, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (ctx, yymsg);
	  }
	else
	  {
	    yyerror (ctx, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval, ctx);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, ctx);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (ctx, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, ctx);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, ctx);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 210 "util_expr_parse.y"


void yyerror(ap_expr_parse_ctx_t *ctx, const char *s)
{
    /* s is allocated on the stack */
    ctx->error = apr_pstrdup(ctx->ptemp, s);
}


