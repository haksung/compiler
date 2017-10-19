/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "c2c.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"
#include "print.h"

#line 74 "c2c.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "c2c.tab.h".  */
#ifndef YY_YY_C2C_TAB_H_INCLUDED
# define YY_YY_C2C_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INTNUM = 258,
    FLOATNUM = 259,
    IDENT = 260
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 9 "c2c.y" /* yacc.c:355  */

	struct PROGRAM			*ptr_program;
	struct DECLARATION		*ptr_declaration;
	struct IDENTIFIER		*ptr_identifier;
	struct FUNCTION			*ptr_function;
	struct PARAMETER		*ptr_parameter;
	struct COMPOUNDSTMT		*ptr_compoundstmt;
	struct STMT				*ptr_stmt;
	struct ASSIGN			*ptr_assign;
	struct CALL				*ptr_call;
	struct ARG				*ptr_arg;
	struct WHILE_S			*ptr_while_s;
	struct FOR_S			*ptr_for_s;
	struct IF_S				*ptr_if_s;
	struct EXPR				*ptr_expr;
	struct UNOP				*ptr_unop;
	struct ADDIOP			*ptr_addiop;
	struct MULTOP			*ptr_multop;
	struct RELAOP			*ptr_relaop;
	struct EQLTOP			*ptr_eqltop;
	struct ID_S				*ptr_id_s;

	int						intnum;
	float					floatnum;
	char*					ident;

#line 147 "c2c.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_C2C_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 164 "c2c.tab.c" /* yacc.c:358  */

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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   451

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  27
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  198

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   260

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    26,     2,     2,     2,     2,     2,     2,
      15,    16,     6,     8,     2,     9,     2,     7,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    11,
      24,    20,    25,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    13,     2,    14,     2,     2,     2,     2,     2,     2,
      22,    23,    12,     2,     2,    10,     2,     2,     2,     2,
       2,     2,     2,     2,    19,     2,     2,     2,     2,    21,
       2,     2,     2,    17,     2,    18,     2,     2,     2,     2,
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
       5
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    69,    78,    88,    97,   106,   114,   124,
     133,   143,   151,   161,   172,   183,   193,   203,   213,   222,
     235,   244,   253,   261,   271,   279,   288,   297,   306,   315,
     324,   333,   342,   351,   360,   368,   376,   384,   392,   400,
     408,   416,   426,   434,   445,   455,   463,   472,   481,   492,
     504,   512,   523,   531,   539,   547,   555,   563,   571,   579,
     587,   595,   605,   615,   624,   635,   644,   655,   664,   673,
     682,   693,   702,   712,   719
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTNUM", "FLOATNUM", "IDENT", "'*'",
  "'/'", "'+'", "'-'", "'i'", "';'", "'f'", "'['", "']'", "'('", "')'",
  "'{'", "'}'", "'r'", "'='", "'w'", "'d'", "'e'", "'<'", "'>'", "'!'",
  "$accept", "Go", "Program", "Declaration", "Identifier", "Function",
  "Parameter", "Compoundstmt", "Stmt", "Assign", "Call", "Arg", "While_s",
  "For_s", "If_s", "Expr", "Unop", "Addiop", "Multop", "Relaop", "Eqltop",
  "Id_s", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,    42,    47,    43,    45,
     105,    59,   102,    91,    93,    40,    41,   123,   125,   114,
      61,   119,   100,   101,    60,    62,    33
};
# endif

#define YYPACT_NINF -59

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-59)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     136,    -3,    10,    28,   -59,   137,   144,   150,    24,   221,
      37,   -59,    -3,    10,   144,    41,    57,    30,    33,    23,
     -59,    47,   -59,    60,    76,    51,    69,    71,   102,   102,
      89,    62,   112,    99,   -59,   -59,    86,   111,   -59,   106,
     119,   119,   410,   102,   102,   114,   123,   410,   125,   190,
     142,   242,    -9,     3,    26,   410,   215,   153,   154,   416,
     120,   429,   164,   165,   -59,   -59,   -59,   119,   119,   410,
     -59,   161,   410,   176,   410,   179,   215,   215,   215,   215,
     177,   187,   -59,   -59,   238,   215,   215,   -59,    84,   -59,
     -59,   -59,   -59,   -59,   -59,   215,   410,     3,    26,   -59,
     429,   -59,   410,   215,   -59,   199,   200,   -59,   -59,   -59,
     -59,   -59,   203,   -59,   204,   410,   208,   410,   183,    96,
     339,   339,   207,   -10,   206,   -59,   215,    31,   241,   215,
     215,   215,   215,   -59,   215,   215,   215,   215,   262,     4,
      83,   121,   211,   283,   -59,   -59,   -59,   -59,   219,   -59,
     224,   181,   -59,   339,   239,   215,   290,   -59,    44,    44,
      31,    31,   339,   339,   339,   339,   243,   234,   -59,   -59,
     -59,   -59,   -59,   -59,   215,   410,   311,   -59,   410,   210,
     339,   350,   177,   365,   215,   236,   246,   -59,   318,   255,
     256,   -59,   410,   410,   380,   395,   -59,   -59
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     0,     4,    11,     0,    11,
       0,     1,     0,     0,     3,     0,     0,     0,     0,     9,
       7,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     0,     0,    12,    11,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      41,    25,     0,     0,    37,    38,    39,    20,    21,     0,
      10,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    41,    60,    61,    73,     0,     0,    57,     0,    52,
      53,    54,    55,    56,    58,     0,     0,     0,     0,    41,
      24,    18,     0,     0,    33,     0,     0,    29,    30,    31,
      34,    35,    41,    19,    41,     0,    41,     0,     0,     0,
      46,    42,     0,     0,     0,    40,     0,    62,     0,     0,
       0,     0,     0,    36,     0,     0,     0,     0,     0,     0,
       0,     0,    41,     0,    26,    27,    17,    15,    41,    16,
      41,     0,    44,    45,     0,     0,     0,    59,    65,    66,
      63,    64,    71,    67,    68,    72,     0,     0,     5,     6,
      32,    28,    13,    14,     0,     0,     0,    74,     0,     0,
      43,     0,     0,     0,     0,    50,     0,    47,     0,     0,
       0,    48,     0,     0,     0,     0,    51,    49
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -59,   -59,   -59,   263,   101,   269,    40,   -35,   -58,   -21,
     -42,   -59,   -17,   -14,   -11,   109,   -59,   -59,   -59,   -59,
     -59,   -59
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,    59,     8,     6,    31,   104,    61,    62,
      87,   119,    64,    65,    66,    88,    89,    90,    91,    92,
      93,    94
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      63,   100,     7,    76,    76,    63,    77,    60,    39,    52,
      78,    78,    71,    63,    53,     9,    54,    63,    79,   106,
      81,   102,   167,   103,    99,    57,    58,    63,    11,    19,
      63,    39,    63,    27,   112,    20,    32,   114,   139,   116,
     105,    80,    19,    28,   107,    29,    25,   108,    22,    30,
     109,   134,   131,   132,    63,   135,   136,   137,   106,   124,
      63,    99,    26,    33,   134,    19,    36,   142,   135,   136,
     137,    34,    43,    63,    44,    63,    49,    51,    45,   105,
     148,    19,   150,   107,    37,    38,   108,    35,    19,   109,
     129,   130,   131,   132,   168,   133,    28,   106,    29,    82,
      83,    84,    48,    10,   134,    85,    42,    39,   135,   136,
     137,    86,   152,    23,    24,    46,    47,   181,   105,    17,
     183,    28,   107,    29,    19,   108,    19,    50,   109,    40,
      41,    69,   169,    63,   194,   195,    63,    70,   101,   106,
      99,   106,    72,    99,    67,    68,     1,    12,     2,    13,
      63,    63,   106,   106,    15,    10,    16,    99,    99,    74,
     105,   186,   105,    17,   107,    18,   107,   108,    95,   108,
     109,    96,   109,   105,   105,   110,   111,   107,   107,   113,
     108,   108,   123,   109,   109,   118,   120,   121,   122,   129,
     130,   131,   132,   115,   127,   128,   117,   151,   140,   141,
      43,   174,    44,   134,   138,   125,    73,   135,   136,   137,
     144,   145,   143,   129,   130,   131,   132,   155,    82,    83,
      84,   146,   147,   154,    85,   184,   149,   134,   153,   170,
      86,   135,   136,   137,    17,   156,    21,   172,   158,   159,
     160,   161,   173,   162,   163,   164,   165,   129,   130,   131,
     132,   126,    43,    77,    44,   179,   175,   157,    75,   189,
     178,   134,   190,     5,   176,   135,   136,   137,   129,   130,
     131,   132,   192,   193,    14,     0,     0,     0,   166,     0,
       0,     0,   134,   180,     0,     0,   135,   136,   137,   129,
     130,   131,   132,   188,   171,     0,   129,   130,   131,   132,
       0,     0,     0,   134,   177,     0,     0,   135,   136,   137,
     134,     0,     0,     0,   135,   136,   137,   129,   130,   131,
     132,     0,   182,     0,   129,   130,   131,   132,     0,     0,
       0,   134,     0,     0,   191,   135,   136,   137,   134,     0,
       0,     0,   135,   136,   137,   129,   130,   131,   132,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,   134,
      53,     0,    54,   135,   136,   137,     0,   102,   185,   103,
      52,    57,    58,     0,     0,    53,     0,    54,     0,     0,
       0,     0,   102,   187,   103,    52,    57,    58,     0,     0,
      53,     0,    54,     0,     0,     0,     0,   102,   196,   103,
      52,    57,    58,     0,     0,    53,     0,    54,     0,     0,
       0,     0,   102,   197,   103,    52,    57,    58,     0,     0,
      53,    52,    54,     0,     0,     0,    97,    55,    98,    56,
       0,    57,    58,    55,    52,    56,     0,    57,    58,    53,
       0,    54,     0,     0,     0,     0,   102,     0,   103,     0,
      57,    58
};

static const yytype_int16 yycheck[] =
{
      42,    59,     5,    13,    13,    47,    15,    42,     5,     5,
      20,    20,    47,    55,    10,     5,    12,    59,    15,    61,
      55,    17,    18,    19,    59,    21,    22,    69,     0,     5,
      72,     5,    74,     3,    69,    11,    13,    72,    96,    74,
      61,    15,     5,    10,    61,    12,     5,    61,    11,    16,
      61,    20,     8,     9,    96,    24,    25,    26,   100,    80,
     102,    96,     5,    16,    20,     5,    15,   102,    24,    25,
      26,    11,    10,   115,    12,   117,    36,    37,    16,   100,
     115,     5,   117,   100,    15,    14,   100,    11,     5,   100,
       6,     7,     8,     9,    11,    11,    10,   139,    12,     3,
       4,     5,    16,     2,    20,     9,    17,     5,    24,    25,
      26,    15,    16,    12,    13,     3,    17,   175,   139,    13,
     178,    10,   139,    12,     5,   139,     5,    16,   139,    28,
      29,    17,    11,   175,   192,   193,   178,    14,    18,   181,
     175,   183,    17,   178,    43,    44,    10,    10,    12,    12,
     192,   193,   194,   195,    10,    54,    12,   192,   193,    17,
     181,   182,   183,    13,   181,    15,   183,   181,    15,   183,
     181,    17,   183,   194,   195,    11,    11,   194,   195,    18,
     194,   195,     5,   194,   195,    76,    77,    78,    79,     6,
       7,     8,     9,    17,    85,    86,    17,    14,    97,    98,
      10,    20,    12,    20,    95,    18,    16,    24,    25,    26,
      11,    11,   103,     6,     7,     8,     9,    11,     3,     4,
       5,    18,    18,    16,     9,    15,    18,    20,   119,    18,
      15,    24,    25,    26,    13,   126,    15,    18,   129,   130,
     131,   132,    18,   134,   135,   136,   137,     6,     7,     8,
       9,    13,    10,    15,    12,    21,    17,    16,    16,    23,
      17,    20,    16,     0,   155,    24,    25,    26,     6,     7,
       8,     9,    17,    17,     5,    -1,    -1,    -1,    16,    -1,
      -1,    -1,    20,   174,    -1,    -1,    24,    25,    26,     6,
       7,     8,     9,   184,    11,    -1,     6,     7,     8,     9,
      -1,    -1,    -1,    20,    14,    -1,    -1,    24,    25,    26,
      20,    -1,    -1,    -1,    24,    25,    26,     6,     7,     8,
       9,    -1,    11,    -1,     6,     7,     8,     9,    -1,    -1,
      -1,    20,    -1,    -1,    16,    24,    25,    26,    20,    -1,
      -1,    -1,    24,    25,    26,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,    20,
      10,    -1,    12,    24,    25,    26,    -1,    17,    18,    19,
       5,    21,    22,    -1,    -1,    10,    -1,    12,    -1,    -1,
      -1,    -1,    17,    18,    19,     5,    21,    22,    -1,    -1,
      10,    -1,    12,    -1,    -1,    -1,    -1,    17,    18,    19,
       5,    21,    22,    -1,    -1,    10,    -1,    12,    -1,    -1,
      -1,    -1,    17,    18,    19,     5,    21,    22,    -1,    -1,
      10,     5,    12,    -1,    -1,    -1,    10,    17,    12,    19,
      -1,    21,    22,    17,     5,    19,    -1,    21,    22,    10,
      -1,    12,    -1,    -1,    -1,    -1,    17,    -1,    19,    -1,
      21,    22
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    12,    28,    29,    30,    32,     5,    31,     5,
      31,     0,    10,    12,    32,    10,    12,    13,    15,     5,
      11,    15,    11,    31,    31,     5,     5,     3,    10,    12,
      16,    33,    13,    16,    11,    11,    15,    15,    14,     5,
      31,    31,    17,    10,    12,    16,     3,    17,    16,    33,
      16,    33,     5,    10,    12,    17,    19,    21,    22,    30,
      34,    35,    36,    37,    39,    40,    41,    31,    31,    17,
      14,    34,    17,    16,    17,    16,    13,    15,    20,    15,
      15,    34,     3,     4,     5,     9,    15,    37,    42,    43,
      44,    45,    46,    47,    48,    15,    17,    10,    12,    34,
      35,    18,    17,    19,    34,    36,    37,    39,    40,    41,
      11,    11,    34,    18,    34,    17,    34,    17,    42,    38,
      42,    42,    42,     5,    36,    18,    13,    42,    42,     6,
       7,     8,     9,    11,    20,    24,    25,    26,    42,    35,
      31,    31,    34,    42,    11,    11,    18,    18,    34,    18,
      34,    14,    16,    42,    16,    11,    42,    16,    42,    42,
      42,    42,    42,    42,    42,    42,    16,    18,    11,    11,
      18,    11,    18,    18,    20,    17,    42,    14,    17,    21,
      42,    35,    11,    35,    15,    18,    36,    18,    42,    23,
      16,    16,    17,    17,    35,    35,    18,    18
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    27,    28,    29,    29,    30,    30,    30,    30,    31,
      31,    31,    31,    32,    32,    32,    32,    32,    32,    32,
      33,    33,    33,    33,    34,    34,    35,    35,    35,    35,
      35,    35,    35,    35,    35,    35,    35,    35,    35,    35,
      35,    35,    36,    36,    37,    38,    38,    39,    39,    40,
      41,    41,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    43,    44,    44,    45,    45,    46,    46,    46,
      46,    47,    47,    48,    48
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     4,     4,     3,     3,     2,
       5,     1,     4,     9,     9,     8,     8,     8,     7,     7,
       3,     3,     2,     2,     2,     1,     3,     3,     4,     2,
       2,     2,     4,     2,     2,     2,     3,     1,     1,     1,
       3,     1,     3,     6,     4,     2,     1,     7,     8,    11,
       7,    11,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     4
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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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
      yychar = yylex ();
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 70 "c2c.y" /* yacc.c:1646  */
    {
		struct PROGRAM *program = (struct PROGRAM*)malloc( sizeof(struct PROGRAM) );
		program->decl = (yyvsp[-1].ptr_declaration);
		program->func = (yyvsp[0].ptr_function);
		head = program;
		(yyval.ptr_program) = program;
	}
#line 1415 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 79 "c2c.y" /* yacc.c:1646  */
    {
		struct PROGRAM *program = (struct PROGRAM*)malloc( sizeof(struct PROGRAM) );
		program->func = (yyvsp[0].ptr_function);
		head = program;
		(yyval.ptr_program) = program;
	}
#line 1426 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 89 "c2c.y" /* yacc.c:1646  */
    {
		struct DECLARATION *declaration = (struct DECLARATION*)malloc( sizeof(struct DECLARATION) );
		declaration->t = eInt;
		declaration->id = (yyvsp[-1].ptr_identifier);
		declaration->prev = (yyvsp[-3].ptr_declaration);
		(yyval.ptr_declaration) = declaration;
	}
#line 1438 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 98 "c2c.y" /* yacc.c:1646  */
    {
		struct DECLARATION *declaration = (struct DECLARATION*)malloc( sizeof(struct DECLARATION) );
		declaration->t = eFloat;
		declaration->id = (yyvsp[-1].ptr_identifier);
		declaration->prev = (yyvsp[-3].ptr_declaration);
		(yyval.ptr_declaration) = declaration;
	}
#line 1450 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 107 "c2c.y" /* yacc.c:1646  */
    {
		struct DECLARATION *declaration = (struct DECLARATION*)malloc( sizeof(struct DECLARATION) );
		declaration->t = eInt;
		declaration->id = (yyvsp[-1].ptr_identifier);
		(yyval.ptr_declaration) = declaration;
	}
#line 1461 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 115 "c2c.y" /* yacc.c:1646  */
    {
		struct DECLARATION *declaration = (struct DECLARATION*)malloc( sizeof(struct DECLARATION) );
		declaration->t = eFloat;
		declaration->id = (yyvsp[-1].ptr_identifier);
		(yyval.ptr_declaration) = declaration;
	}
#line 1472 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 125 "c2c.y" /* yacc.c:1646  */
    {
		struct IDENTIFIER *identifier = (struct IDENTIFIER*)malloc( sizeof(struct IDENTIFIER) );
		identifier->ID = (yyvsp[0].ident);
		identifier->intnum = 0;
		identifier->prev = (yyvsp[-1].ptr_identifier);
		(yyval.ptr_identifier) = identifier;
	}
#line 1484 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 134 "c2c.y" /* yacc.c:1646  */
    {
		struct IDENTIFIER *identifier = (struct IDENTIFIER*)malloc( sizeof(struct IDENTIFIER) );
		identifier->ID = (yyvsp[-3].ident);
		identifier->intnum = (yyvsp[-1].intnum);
		identifier->prev = (yyvsp[-4].ptr_identifier);
		(yyval.ptr_identifier) = identifier;

	}
#line 1497 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 144 "c2c.y" /* yacc.c:1646  */
    {
		struct IDENTIFIER *identifier = (struct IDENTIFIER*)malloc( sizeof(struct IDENTIFIER) );
		identifier->ID = (yyvsp[0].ident);
		identifier->intnum = 0;
		(yyval.ptr_identifier) = identifier;
	}
#line 1508 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 152 "c2c.y" /* yacc.c:1646  */
    {
		struct IDENTIFIER *identifier = (struct IDENTIFIER*)malloc( sizeof(struct IDENTIFIER) );
		identifier->ID = (yyvsp[-3].ident);
		identifier->intnum = (yyvsp[-1].intnum);
		(yyval.ptr_identifier) = identifier;
	}
#line 1519 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 162 "c2c.y" /* yacc.c:1646  */
    {
		struct FUNCTION *function = (struct FUNCTION*)malloc( sizeof(struct FUNCTION) );
		function->t = eInt;
		function->ID = (yyvsp[-6].ident);
		function->param = (yyvsp[-4].ptr_parameter);
		function->cstmt = (yyvsp[-1].ptr_compoundstmt);
		function->prev = (yyvsp[-8].ptr_function);
		(yyval.ptr_function) = function;
	}
#line 1533 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 173 "c2c.y" /* yacc.c:1646  */
    {
		struct FUNCTION *function = (struct FUNCTION*)malloc( sizeof(struct FUNCTION) );
		function->t = eFloat;
		function->ID = (yyvsp[-6].ident);
		function->param = (yyvsp[-4].ptr_parameter);
		function->cstmt = (yyvsp[-1].ptr_compoundstmt);
		function->prev = (yyvsp[-8].ptr_function);
		(yyval.ptr_function) = function;
	}
#line 1547 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 184 "c2c.y" /* yacc.c:1646  */
    {
		struct FUNCTION *function = (struct FUNCTION*)malloc( sizeof(struct FUNCTION) );
		function->t = eInt;
		function->ID = (yyvsp[-5].ident);
		function->cstmt = (yyvsp[-1].ptr_compoundstmt);
		function->prev = (yyvsp[-7].ptr_function);
		(yyval.ptr_function) = function;
	}
#line 1560 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 194 "c2c.y" /* yacc.c:1646  */
    {
		struct FUNCTION *function = (struct FUNCTION*)malloc( sizeof(struct FUNCTION) );
		function->t = eFloat;
		function->ID = (yyvsp[-5].ident);
		function->cstmt = (yyvsp[-1].ptr_compoundstmt);
		function->prev = (yyvsp[-7].ptr_function);
		(yyval.ptr_function) = function;
	}
#line 1573 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 204 "c2c.y" /* yacc.c:1646  */
    {
		struct FUNCTION *function = (struct FUNCTION*)malloc( sizeof(struct FUNCTION) );
		function->t = eInt;
		function->ID = (yyvsp[-6].ident);
		function->param = (yyvsp[-4].ptr_parameter);
		function->cstmt = (yyvsp[-1].ptr_compoundstmt);
		(yyval.ptr_function) = function;
	}
#line 1586 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 214 "c2c.y" /* yacc.c:1646  */
    {
		struct FUNCTION *function = (struct FUNCTION*)malloc( sizeof(struct FUNCTION) );
		function->t = eInt;
		function->ID = (yyvsp[-5].ident);
		function->cstmt = (yyvsp[-1].ptr_compoundstmt);
		(yyval.ptr_function) = function;
	}
#line 1598 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 223 "c2c.y" /* yacc.c:1646  */
    {
		struct FUNCTION *function = (struct FUNCTION*)malloc( sizeof(struct FUNCTION) );
		function->t = eFloat;
		function->ID = (yyvsp[-5].ident);
		function->cstmt = (yyvsp[-1].ptr_compoundstmt);
		(yyval.ptr_function) = function;
	}
#line 1610 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 236 "c2c.y" /* yacc.c:1646  */
    {
		struct PARAMETER *parameter = (struct PARAMETER*)malloc( sizeof(struct PARAMETER) );
		parameter->t = eInt;
		parameter->id = (yyvsp[0].ptr_identifier);
		parameter->prev = (yyvsp[-2].ptr_parameter);
		(yyval.ptr_parameter) = parameter;
	}
#line 1622 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 245 "c2c.y" /* yacc.c:1646  */
    {
		struct PARAMETER *parameter = (struct PARAMETER*)malloc( sizeof(struct PARAMETER) );
		parameter->t = eFloat;
		parameter->id = (yyvsp[0].ptr_identifier);
		parameter->prev = (yyvsp[-2].ptr_parameter);
		(yyval.ptr_parameter) = parameter;
	}
#line 1634 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 254 "c2c.y" /* yacc.c:1646  */
    {
		struct PARAMETER *parameter = (struct PARAMETER*)malloc( sizeof(struct PARAMETER) );
		parameter->t = eInt;
		parameter->id = (yyvsp[0].ptr_identifier);
		(yyval.ptr_parameter) = parameter;
	}
#line 1645 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 262 "c2c.y" /* yacc.c:1646  */
    {
		struct PARAMETER *parameter = (struct PARAMETER*)malloc( sizeof(struct PARAMETER) );
		parameter->t = eFloat;
		parameter->id = (yyvsp[0].ptr_identifier);
		(yyval.ptr_parameter) = parameter;
	}
#line 1656 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 272 "c2c.y" /* yacc.c:1646  */
    {
		struct COMPOUNDSTMT *compoundstmt = (struct COMPOUNDSTMT*)malloc( sizeof(struct COMPOUNDSTMT) );
		compoundstmt->decl = (yyvsp[-1].ptr_declaration);
		compoundstmt->stmt = (yyvsp[0].ptr_stmt);
		(yyval.ptr_compoundstmt) = compoundstmt;
	}
#line 1667 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 280 "c2c.y" /* yacc.c:1646  */
    {
		struct COMPOUNDSTMT *compoundstmt = (struct COMPOUNDSTMT*)malloc( sizeof(struct COMPOUNDSTMT) );
		compoundstmt->stmt = (yyvsp[0].ptr_stmt);
		(yyval.ptr_compoundstmt) = compoundstmt;
	}
#line 1677 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 289 "c2c.y" /* yacc.c:1646  */
    {
		struct STMT *stmt = (struct STMT*)malloc( sizeof(struct STMT) );
		stmt->s = eAssign;
		stmt->stmt.assign_ = (yyvsp[-1].ptr_assign);
		stmt->prev = (yyvsp[-2].ptr_stmt);
		(yyval.ptr_stmt) = stmt;
	}
#line 1689 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 298 "c2c.y" /* yacc.c:1646  */
    {
		struct STMT *stmt = (struct STMT*)malloc( sizeof(struct STMT) );
		stmt->s = eCall;
		stmt->stmt.call_ = (yyvsp[-1].ptr_call);
		stmt->prev = (yyvsp[-2].ptr_stmt);
		(yyval.ptr_stmt) = stmt;
	}
#line 1701 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 307 "c2c.y" /* yacc.c:1646  */
    {
		struct STMT *stmt = (struct STMT*)malloc( sizeof(struct STMT) );
		stmt->s = eRet;
		stmt->stmt.return_ = (yyvsp[-1].ptr_expr);
		stmt->prev = (yyvsp[-3].ptr_stmt);
		(yyval.ptr_stmt) = stmt;
	}
#line 1713 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 316 "c2c.y" /* yacc.c:1646  */
    {
		struct STMT *stmt = (struct STMT*)malloc( sizeof(struct STMT) );
		stmt->s = eWhile;
		stmt->stmt.while_ = (yyvsp[0].ptr_while_s);
		stmt->prev = (yyvsp[-1].ptr_stmt);
		(yyval.ptr_stmt) = stmt;
	}
#line 1725 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 325 "c2c.y" /* yacc.c:1646  */
    {
		struct STMT *stmt = (struct STMT*)malloc( sizeof(struct STMT) );
		stmt->s = eFor;
		stmt->stmt.for_ = (yyvsp[0].ptr_for_s);
		stmt->prev = (yyvsp[-1].ptr_stmt);
		(yyval.ptr_stmt) = stmt;
	}
#line 1737 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 334 "c2c.y" /* yacc.c:1646  */
    {
		struct STMT *stmt = (struct STMT*)malloc( sizeof(struct STMT) );
		stmt->s = eIf;
		stmt->stmt.if_ = (yyvsp[0].ptr_if_s);
		stmt->prev = (yyvsp[-1].ptr_stmt);
		(yyval.ptr_stmt) = stmt;
	}
#line 1749 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 343 "c2c.y" /* yacc.c:1646  */
    {
		struct STMT *stmt = (struct STMT*)malloc( sizeof(struct STMT) );
		stmt->s = eCompound;
		stmt->stmt.cstmt_ = (yyvsp[-1].ptr_compoundstmt);
		stmt->prev = (yyvsp[-3].ptr_stmt);
		(yyval.ptr_stmt) = stmt;
	}
#line 1761 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 352 "c2c.y" /* yacc.c:1646  */
    {
		struct STMT *stmt = (struct STMT*)malloc( sizeof(struct STMT) );
		stmt->s = eSemi;
		stmt->stmt.cstmt_ = (yyvsp[0].ptr_compoundstmt);
		stmt->prev = (yyvsp[-1].ptr_stmt);
		(yyval.ptr_stmt) = stmt;
	}
#line 1773 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 361 "c2c.y" /* yacc.c:1646  */
    {
		struct STMT *stmt = (struct STMT*)malloc( sizeof(struct STMT) );
		stmt->s = eAssign;
		stmt->stmt.assign_ = (yyvsp[-1].ptr_assign);
		(yyval.ptr_stmt) = stmt;
	}
#line 1784 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 369 "c2c.y" /* yacc.c:1646  */
    {
		struct STMT *stmt = (struct STMT*)malloc( sizeof(struct STMT) );
		stmt->s = eCall;
		stmt->stmt.call_ = (yyvsp[-1].ptr_call);
		(yyval.ptr_stmt) = stmt;
	}
#line 1795 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 377 "c2c.y" /* yacc.c:1646  */
    {
		struct STMT *stmt = (struct STMT*)malloc( sizeof(struct STMT) );
		stmt->s = eRet;
		stmt->stmt.return_ = (yyvsp[-1].ptr_expr);
		(yyval.ptr_stmt) = stmt;
	}
#line 1806 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 385 "c2c.y" /* yacc.c:1646  */
    {
		struct STMT *stmt = (struct STMT*)malloc( sizeof(struct STMT) );
		stmt->s = eWhile;
		stmt->stmt.while_ = (yyvsp[0].ptr_while_s);
		(yyval.ptr_stmt) = stmt;
	}
#line 1817 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 393 "c2c.y" /* yacc.c:1646  */
    {
		struct STMT *stmt = (struct STMT*)malloc( sizeof(struct STMT) );
		stmt->s = eFor;
		stmt->stmt.for_ = (yyvsp[0].ptr_for_s);
		(yyval.ptr_stmt) = stmt;
	}
#line 1828 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 401 "c2c.y" /* yacc.c:1646  */
    {
		struct STMT *stmt = (struct STMT*)malloc( sizeof(struct STMT) );
		stmt->s = eIf;
		stmt->stmt.if_ = (yyvsp[0].ptr_if_s);
		(yyval.ptr_stmt) = stmt;
	}
#line 1839 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 409 "c2c.y" /* yacc.c:1646  */
    {
		struct STMT *stmt = (struct STMT*)malloc( sizeof(struct STMT) );
		stmt->s = eCompound;
		stmt->stmt.cstmt_ = (yyvsp[-1].ptr_compoundstmt);
		(yyval.ptr_stmt) = stmt;
	}
#line 1850 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 417 "c2c.y" /* yacc.c:1646  */
    {
		struct STMT *stmt = (struct STMT*)malloc( sizeof(struct STMT) );
		stmt->s = eSemi;
		stmt->stmt.cstmt_ = (yyvsp[0].ptr_compoundstmt);
		(yyval.ptr_stmt) = stmt;
	}
#line 1861 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 427 "c2c.y" /* yacc.c:1646  */
    {
		struct ASSIGN *assign = (struct ASSIGN*)malloc( sizeof(struct ASSIGN) );
		assign->ID = (yyvsp[-2].ident);
		assign->expr = (yyvsp[0].ptr_expr);
		(yyval.ptr_assign) = assign;
	}
#line 1872 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 435 "c2c.y" /* yacc.c:1646  */
    {
		struct ASSIGN *assign = (struct ASSIGN*)malloc( sizeof(struct ASSIGN) );
		assign->ID = (yyvsp[-5].ident);
		assign->index = (yyvsp[-3].ptr_expr);
		assign->expr = (yyvsp[0].ptr_expr);
		(yyval.ptr_assign) = assign;
	}
#line 1884 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 446 "c2c.y" /* yacc.c:1646  */
    {
		struct CALL *call = (struct CALL*)malloc( sizeof(struct CALL) );
		call->ID = (yyvsp[-3].ident);
		call->arg = (yyvsp[-1].ptr_arg);
		(yyval.ptr_call) = call;
	}
#line 1895 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 456 "c2c.y" /* yacc.c:1646  */
    {
		struct ARG *arg = (struct ARG*)malloc( sizeof(struct ARG) );
		arg->expr = (yyvsp[0].ptr_expr);
		arg->prev = (yyvsp[-1].ptr_arg);
		(yyval.ptr_arg) = arg;
	}
#line 1906 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 464 "c2c.y" /* yacc.c:1646  */
    {
		struct ARG *arg = (struct ARG*)malloc( sizeof(struct ARG) );
		arg->expr = (yyvsp[0].ptr_expr);
		(yyval.ptr_arg) = arg;
	}
#line 1916 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 473 "c2c.y" /* yacc.c:1646  */
    {
		struct WHILE_S *while_s = (struct WHILE_S*)malloc( sizeof(struct WHILE_S) );
		while_s->do_while = 0;
		while_s->cond = (yyvsp[-4].ptr_expr);
		while_s->stmt = (yyvsp[-1].ptr_stmt);
		(yyval.ptr_while_s) = while_s;
	}
#line 1928 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 482 "c2c.y" /* yacc.c:1646  */
    {
		struct WHILE_S *while_s = (struct WHILE_S*)malloc( sizeof(struct WHILE_S) );
		while_s->do_while = 1;
		while_s->cond = (yyvsp[-1].ptr_expr);
		while_s->stmt = (yyvsp[-5].ptr_stmt);
		(yyval.ptr_while_s) = while_s;
	}
#line 1940 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 493 "c2c.y" /* yacc.c:1646  */
    {
		struct FOR_S *for_s = (struct FOR_S*)malloc( sizeof(struct FOR_S) );
		for_s->init = (yyvsp[-8].ptr_assign);
		for_s->cond = (yyvsp[-6].ptr_expr);
		for_s->inc = (yyvsp[-4].ptr_assign);
		for_s->stmt = (yyvsp[-1].ptr_stmt);
		(yyval.ptr_for_s) = for_s;
	}
#line 1953 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 505 "c2c.y" /* yacc.c:1646  */
    {
		struct IF_S *if_s = (struct IF_S*)malloc( sizeof(struct IF_S) );
		if_s->cond = (yyvsp[-4].ptr_expr);
		if_s->if_ = (yyvsp[-1].ptr_stmt);
		(yyval.ptr_if_s) = if_s;
	}
#line 1964 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 513 "c2c.y" /* yacc.c:1646  */
    {
		struct IF_S *if_s = (struct IF_S*)malloc( sizeof(struct IF_S) );
		if_s->cond = (yyvsp[-8].ptr_expr);
		if_s->if_ = (yyvsp[-5].ptr_stmt);
		if_s->else_ = (yyvsp[-1].ptr_stmt);
		(yyval.ptr_if_s) = if_s;
	}
#line 1976 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 524 "c2c.y" /* yacc.c:1646  */
    {
		struct EXPR* expr = (struct EXPR*)malloc( sizeof(struct EXPR) );
		expr->e = eUnop;
		expr->expression.unop_ = (yyvsp[0].ptr_unop);
		(yyval.ptr_expr) = expr;
	}
#line 1987 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 532 "c2c.y" /* yacc.c:1646  */
    {
		struct EXPR* expr = (struct EXPR*)malloc( sizeof(struct EXPR) );
		expr->e = eAddi;
		expr->expression.addiop_ = (yyvsp[0].ptr_addiop);
		(yyval.ptr_expr) = expr;
	}
#line 1998 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 540 "c2c.y" /* yacc.c:1646  */
    {
		struct EXPR* expr = (struct EXPR*)malloc( sizeof(struct EXPR) );
		expr->e = eMulti;
		expr->expression.multop_ = (yyvsp[0].ptr_multop);
		(yyval.ptr_expr) = expr;
	}
#line 2009 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 548 "c2c.y" /* yacc.c:1646  */
    {
		struct EXPR* expr = (struct EXPR*)malloc( sizeof(struct EXPR) );
		expr->e = eRela;
		expr->expression.relaop_ = (yyvsp[0].ptr_relaop);
		(yyval.ptr_expr) = expr;
	}
#line 2020 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 556 "c2c.y" /* yacc.c:1646  */
    {
		struct EXPR* expr = (struct EXPR*)malloc( sizeof(struct EXPR) );
		expr->e = eEqlt;
		expr->expression.eqltop_ = (yyvsp[0].ptr_eqltop);
		(yyval.ptr_expr) = expr;
	}
#line 2031 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 564 "c2c.y" /* yacc.c:1646  */
    {
		struct EXPR* expr = (struct EXPR*)malloc( sizeof(struct EXPR) );
		expr->e = eCallExpr;
		expr->expression.call_ = (yyvsp[0].ptr_call);
		(yyval.ptr_expr) = expr;
	}
#line 2042 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 572 "c2c.y" /* yacc.c:1646  */
    {
		struct EXPR* expr = (struct EXPR*)malloc( sizeof(struct EXPR) );
		expr->e = eId;
		expr->expression.ID_ = (yyvsp[0].ptr_id_s);
		(yyval.ptr_expr) = expr;
	}
#line 2053 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 580 "c2c.y" /* yacc.c:1646  */
    {
		struct EXPR* expr = (struct EXPR*)malloc( sizeof(struct EXPR) );
		expr->e = eExpr;
		expr->expression.bracket = (yyvsp[-1].ptr_expr);
		(yyval.ptr_expr) = expr;
	}
#line 2064 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 588 "c2c.y" /* yacc.c:1646  */
    {
		struct EXPR* expr = (struct EXPR*)malloc( sizeof(struct EXPR) );
		expr->e = eIntnum;
		expr->expression.intnum = (yyvsp[0].intnum);
		(yyval.ptr_expr) = expr;
	}
#line 2075 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 596 "c2c.y" /* yacc.c:1646  */
    {
		struct EXPR* expr = (struct EXPR*)malloc( sizeof(struct EXPR) );
		expr->e = eFloatnum;
		expr->expression.floatnum = (yyvsp[0].floatnum);
		(yyval.ptr_expr) = expr;
	}
#line 2086 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 606 "c2c.y" /* yacc.c:1646  */
    {
		struct UNOP* unop = (struct UNOP*)malloc( sizeof(struct UNOP) );
		unop->u = eNegative;
		unop->expr = (yyvsp[0].ptr_expr);
		(yyval.ptr_unop) = unop;
	}
#line 2097 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 616 "c2c.y" /* yacc.c:1646  */
    {
		struct ADDIOP* addiop = (struct ADDIOP*)malloc( sizeof(struct ADDIOP) );
		addiop->a = ePlus;
		addiop->lhs = (yyvsp[-2].ptr_expr);
		addiop->rhs = (yyvsp[0].ptr_expr);
		(yyval.ptr_addiop) = addiop;
	}
#line 2109 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 625 "c2c.y" /* yacc.c:1646  */
    {
		struct ADDIOP* addiop = (struct ADDIOP*)malloc( sizeof(struct ADDIOP) );
		addiop->a = eMinus;
		addiop->lhs = (yyvsp[-2].ptr_expr);
		addiop->rhs = (yyvsp[0].ptr_expr);
		(yyval.ptr_addiop) = addiop;
	}
#line 2121 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 636 "c2c.y" /* yacc.c:1646  */
    {
		struct MULTOP* multop = (struct MULTOP*)malloc( sizeof(struct MULTOP) );
		multop->m = eMult;
		multop->lhs = (yyvsp[-2].ptr_expr);
		multop->rhs = (yyvsp[0].ptr_expr);
		(yyval.ptr_multop) = multop;
	}
#line 2133 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 645 "c2c.y" /* yacc.c:1646  */
    {
		struct MULTOP* multop = (struct MULTOP*)malloc( sizeof(struct MULTOP) );
		multop->m = eDiv;
		multop->lhs = (yyvsp[-2].ptr_expr);
		multop->rhs = (yyvsp[0].ptr_expr);
		(yyval.ptr_multop) = multop;
	}
#line 2145 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 656 "c2c.y" /* yacc.c:1646  */
    {
		struct RELAOP* relaop = (struct RELAOP*)malloc( sizeof(struct RELAOP) );
		relaop->r = eLT;
		relaop->lhs = (yyvsp[-2].ptr_expr);
		relaop->rhs = (yyvsp[0].ptr_expr);
		(yyval.ptr_relaop) = relaop;
	}
#line 2157 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 665 "c2c.y" /* yacc.c:1646  */
    {
		struct RELAOP* relaop = (struct RELAOP*)malloc( sizeof(struct RELAOP) );
		relaop->r = eGT;
		relaop->lhs = (yyvsp[-2].ptr_expr);
		relaop->rhs = (yyvsp[0].ptr_expr);
		(yyval.ptr_relaop) = relaop;
	}
#line 2169 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 674 "c2c.y" /* yacc.c:1646  */
    {
		struct RELAOP* relaop = (struct RELAOP*)malloc( sizeof(struct RELAOP) );
		relaop->r = eLE;
		relaop->lhs = (yyvsp[-2].ptr_expr);
		relaop->rhs = (yyvsp[0].ptr_expr);
		(yyval.ptr_relaop) = relaop;
	}
#line 2181 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 683 "c2c.y" /* yacc.c:1646  */
    {
		struct RELAOP* relaop = (struct RELAOP*)malloc( sizeof(struct RELAOP) );
		relaop->r = eGE;
		relaop->lhs = (yyvsp[-2].ptr_expr);
		relaop->rhs = (yyvsp[0].ptr_expr);
		(yyval.ptr_relaop) = relaop;
	}
#line 2193 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 694 "c2c.y" /* yacc.c:1646  */
    {
		struct EQLTOP* eqltop = (struct EQLTOP*)malloc( sizeof(struct EQLTOP) );
		eqltop->e = eEQ;
		eqltop->lhs = (yyvsp[-2].ptr_expr);
		eqltop->rhs = (yyvsp[0].ptr_expr);
		(yyval.ptr_eqltop) = eqltop;
	}
#line 2205 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 703 "c2c.y" /* yacc.c:1646  */
    {
		struct EQLTOP* eqltop = (struct EQLTOP*)malloc( sizeof(struct EQLTOP) );
		eqltop->e = eNE;
		eqltop->lhs = (yyvsp[-2].ptr_expr);
		eqltop->rhs = (yyvsp[0].ptr_expr);
		(yyval.ptr_eqltop) = eqltop;
	}
#line 2217 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 713 "c2c.y" /* yacc.c:1646  */
    {
		struct ID_S* id_s = (struct ID_S*)malloc( sizeof(struct ID_S) );
		id_s->ID = (yyvsp[0].ident);
		(yyval.ptr_id_s) = id_s;
	}
#line 2227 "c2c.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 720 "c2c.y" /* yacc.c:1646  */
    {
		struct ID_S* id_s = (struct ID_S*)malloc( sizeof(struct ID_S) );
		id_s->ID = (yyvsp[-3].ident);
		id_s->expr = (yyvsp[-1].ptr_expr);
		(yyval.ptr_id_s) = id_s;
	}
#line 2238 "c2c.tab.c" /* yacc.c:1646  */
    break;


#line 2242 "c2c.tab.c" /* yacc.c:1646  */
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
      yyerror (YY_("syntax error"));
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
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



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
                      yytoken, &yylval);
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
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
#line 728 "c2c.y" /* yacc.c:1906  */


int yyerror (char* s) {
	return fprintf(stderr, "%s\n", s);
}
