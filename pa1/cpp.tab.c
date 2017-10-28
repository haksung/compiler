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
#line 1 "cpp.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "AST.h"
#include "print.h"

#line 75 "cpp.tab.c" /* yacc.c:339  */

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
   by #include "cpp.tab.h".  */
#ifndef YY_YY_CPP_TAB_H_INCLUDED
# define YY_YY_CPP_TAB_H_INCLUDED
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
    ID = 260,
    OP_LE = 261,
    OP_GE = 262,
    OP_GT = 263,
    OP_LT = 264,
    OP_EQ = 265,
    OP_NE = 266,
    OP_UN = 267,
    IF_THEN = 268
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 10 "cpp.y" /* yacc.c:355  */

	struct	Program 		*ptr_program;
	struct	Class		 	*ptr_class;
	struct	Member		 	*ptr_member;
	struct	VarDecl		 	*ptr_vardecl;
	struct	MethodDecl	 	*ptr_methoddecl;
	struct	MethodDef	 	*ptr_methoddef;
	struct	ClassMethodDef	 	*ptr_classmethoddef;
	struct	MainFunc	 	*ptr_mainfunc;
	struct	Param		 	*ptr_param;
	struct	Ident		 	*ptr_ident;
	struct	Type		 	*ptr_type;
	struct	CompoundStmt	 	*ptr_compoundstmt;
	struct	Stmt		 	*ptr_stmt;
	struct	ExprStmt	 	*ptr_exprstmt;
	struct	AssignStmt	 	*ptr_assignstmt;
	struct	RetStmt		 	*ptr_retstmt;
	struct	WhileStmt	 	*ptr_whilestmt;
	struct	DoStmt		 	*ptr_dostmt;
	struct	ForStmt		 	*ptr_forstmt;
	struct	IfStmt		 	*ptr_ifstmt;
	struct	Expr		 	*ptr_expr;
	struct	OperExpr	 	*ptr_operexpr;
	struct	RefExpr		 	*ptr_refexpr;
	struct	RefVarExpr	 	*ptr_refvarexpr;
	struct	RefCallExpr	 	*ptr_refcallexpr;
	struct	IdentExpr	 	*ptr_identexpr;
	struct	CallExpr	 	*ptr_callexpr;
	struct	Arg		 	*ptr_arg;
	struct	UnOp		 	*ptr_unop;
	struct	AddiOp		 	*ptr_addiop;
	struct	MultOp		 	*ptr_multop;
	struct	RelaOp		 	*ptr_relaop;
	struct	EqltOp		 	*ptr_eqltop;

	int			intnum;
	float			floatnum;
	char*			id;

#line 169 "cpp.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CPP_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 186 "cpp.tab.c" /* yacc.c:358  */

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   668

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  244

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   268

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
      18,    19,    15,    13,    30,    14,    37,    16,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,    27,
       2,    12,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    31,     2,    32,     2,     2,     2,     2,     2,    22,
      36,    21,    33,     2,     2,    28,     2,     2,     2,    29,
       2,     2,    25,     2,    34,     2,     2,     2,     2,    35,
       2,     2,     2,    23,     2,    24,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    17,    20
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   102,   102,   103,   106,   114,   122,   130,   140,   148,
     156,   164,   172,   180,   188,   196,   206,   207,   214,   221,
     228,   235,   242,   249,   258,   266,   275,   284,   292,   301,
     312,   320,   328,   336,   346,   355,   364,   373,   384,   394,
     404,   414,   426,   433,   440,   449,   455,   463,   469,   475,
     483,   489,   495,   501,   509,   516,   523,   530,   537,   544,
     551,   558,   565,   571,   578,   585,   592,   599,   606,   613,
     620,   627,   635,   642,   650,   655,   662,   670,   678,   688,
     695,   704,   710,   716,   722,   730,   736,   742,   748,   754,
     760,   768,   774,   782,   788,   796,   802,   810,   816,   824,
     830,   838,   844,   852,   860,   867,   876,   883,   892,   899,
     906,   913,   922,   929
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTNUM", "FLOATNUM", "ID", "OP_LE",
  "OP_GE", "OP_GT", "OP_LT", "OP_EQ", "OP_NE", "'='", "'+'", "'-'", "'*'",
  "'/'", "OP_UN", "'('", "')'", "IF_THEN", "'e'", "'c'", "'{'", "'}'",
  "'p'", "':'", "';'", "'i'", "'m'", "','", "'['", "']'", "'f'", "'r'",
  "'w'", "'d'", "'.'", "$accept", "Start", "Program", "Class", "Member",
  "VarDecl", "MethodDecl", "MethodDef", "ClassMethodDef", "MainFunc",
  "Param", "Ident", "Type", "CompoundStmt", "Stmt", "ExprStmt",
  "AssignStmt", "RetStmt", "WhileStmt", "DoStmt", "ForStmt", "IfStmt",
  "Expr", "OperExpr", "RefExpr", "RefVarExpr", "RefCallExpr", "IdentExpr",
  "CallExpr", "Arg", "UnOp", "AddiOp", "MultOp", "RelaOp", "EqltOp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,    61,    43,    45,    42,    47,   267,    40,    41,
     268,   101,    99,   123,   125,   112,    58,    59,   105,   109,
      44,    91,    93,   102,   114,   119,   100,    46
};
# endif

#define YYPACT_NINF -70

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-70)))

#define YYTABLE_NINF -78

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      34,   -70,     8,   -22,   -70,    61,   -70,    36,    44,   -70,
      23,    43,    67,   -70,    86,    44,   -70,   -70,    94,    81,
      73,   140,   109,   -70,   152,   180,   -70,   182,   164,    95,
     213,   202,    82,   255,   -70,   -70,   195,   205,   130,   -70,
     113,    82,    82,    82,   221,   -70,   -70,    15,   211,   289,
     -70,   -70,   212,   217,    -6,   219,   359,   281,   226,   -70,
     307,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   490,   -70,
     204,   227,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
      82,   142,   164,    41,   226,   -70,   225,    82,    82,   221,
      82,   238,   240,    -2,    -8,   423,   289,   289,     0,   557,
     -70,   289,   289,   289,   -70,   289,   212,   217,   385,   -70,
     226,   333,   223,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   289,   289,   289,   289,   289,   289,   289,
     289,   289,   289,   -70,   251,   289,   173,   164,    54,   -70,
     164,    82,   -70,    82,    82,    -4,   239,   247,   143,   263,
      49,   -70,   -70,   641,    56,   479,   -70,   -70,   571,   512,
     585,   599,   250,   -70,   248,   248,   248,   248,   652,   652,
      22,    22,   -70,   -70,   -70,   -70,   527,   -70,   244,   -70,
     164,   -70,   226,   253,   203,   -70,   146,   162,    13,   123,
     242,   254,   260,   -70,   289,   -70,   359,   289,   269,   359,
     289,   -70,    82,   -70,   -70,   -70,   270,   271,   127,   138,
     164,   153,   -70,   -70,   150,   -70,   -70,   -70,   641,   427,
     542,   -70,   448,   613,   256,   -70,   -70,   -70,   161,   -70,
     164,   -70,   -70,   359,   289,   411,   -70,   -70,   -70,   448,
     627,    55,   359,   448
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    49,     0,    47,    48,     0,     3,     0,     0,     4,
       0,     0,     0,     1,     0,     0,     5,     6,     0,     0,
       0,     0,     0,     7,     0,     0,     8,     0,     0,     0,
       0,     0,    16,     0,    42,    12,     0,     0,     0,    47,
       0,    17,    18,    19,     0,    83,    84,    97,     0,     0,
      50,    62,    47,    48,     0,     0,     0,     0,     0,    61,
       0,    54,    55,    56,    57,    58,    59,    60,     0,    81,
      82,    91,    92,    93,    95,    85,    86,    87,    88,    89,
      16,     0,     0,     0,     0,     9,     0,    20,    21,     0,
      22,     0,     0,    45,     0,     0,     0,     0,    97,     0,
      91,     0,     0,     0,    74,     0,     0,     0,     0,    51,
       0,     0,    45,    52,    71,    70,    63,    64,    65,    66,
      67,    68,    69,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,     0,     0,     0,     0,     0,    38,
       0,     0,    43,    16,    23,     0,     0,     0,     0,     0,
       0,    24,    99,   101,     0,     0,   103,    90,     0,     0,
       0,     0,     0,    53,   110,   111,   109,   108,   112,   113,
     104,   105,   106,   107,    94,    96,     0,    13,     0,    40,
       0,    39,     0,     0,     0,    27,     0,     0,     0,     0,
       0,     0,     0,   100,     0,    98,     0,     0,     0,     0,
       0,    73,    16,    41,    44,    11,     0,     0,     0,     0,
       0,     0,    30,    34,     0,    46,    25,    26,   102,    79,
       0,    75,    76,     0,     0,    28,    29,    32,     0,    36,
       0,    31,    35,     0,     0,     0,    15,    33,    37,    80,
       0,    62,     0,    78
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -70,   -70,   -70,   -70,   -69,   267,   234,   -36,   294,     7,
     -31,   -42,     2,   -28,   -32,    -5,    -3,     3,     5,    10,
      28,    33,    -1,   -70,   -70,   -30,   -70,   168,   172,   -70,
     -70,   -70,   -70,   -70,   -70
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,    40,    41,    42,    43,     8,     9,
      83,    94,    84,    59,   222,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,   100,    72,    73,    74,   154,
      75,    76,    77,    78,    79
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,    60,    10,    71,   150,    88,    90,    12,   184,    10,
      18,   136,   103,    11,    16,    17,   148,    18,    95,   151,
     -49,   104,    23,   185,   108,   111,    71,    71,    19,   149,
      71,    96,   115,    95,    44,    58,    33,   131,   132,     1,
     212,     1,   142,    89,    91,    92,    96,   145,    99,     1,
     138,   144,   191,   192,   139,   116,     2,   117,    14,   110,
     140,    13,     3,   118,     3,   119,    20,     4,   145,     4,
     120,   141,     3,   180,   183,   193,   -77,     4,    71,   -77,
     115,    71,    44,   115,   141,    21,   194,     1,   121,    91,
      92,    22,    92,   122,   153,   155,   156,    26,    27,    24,
     158,   159,   160,   116,   161,   117,   116,    25,   117,   179,
      39,   118,   181,   119,   118,     4,   119,   189,   120,    35,
      36,   120,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,    29,   224,   176,     1,   121,    85,    86,   121,
     204,   122,   214,   182,   122,    44,    92,     1,     1,    82,
      33,     1,   203,   141,   227,   209,   211,   228,    39,    28,
     213,   137,   188,     4,   219,   208,    71,     1,   141,    71,
      39,    39,   230,    33,    39,     4,     4,   231,    30,     4,
     213,   210,   229,   141,    33,    31,   232,    33,   237,    71,
      39,   115,    71,   218,   115,     4,   220,   177,   178,   223,
     232,   239,   238,    71,    44,    71,   206,   207,    32,    71,
     243,   115,    71,    71,   116,   115,   117,   116,    37,   117,
      38,    80,   118,    81,   119,   118,    93,   119,    97,   120,
     101,   112,   120,   240,   116,   102,   117,   105,   116,   135,
     117,   134,   118,   146,   119,   147,   118,   121,   119,   120,
     121,   143,   122,   120,   149,   122,    98,   186,    45,    46,
      47,   129,   130,   131,   132,   187,   190,   121,   200,    48,
     202,   121,   122,    49,   215,    87,   122,   205,    33,    50,
     236,   216,    51,    52,    45,    46,    47,   217,    53,    54,
      55,    56,    45,    46,    98,    48,   221,   225,   226,    49,
      57,    15,   174,    48,    33,   109,   175,    49,    51,    52,
      45,    46,    98,     0,    53,    54,    55,    56,     0,     0,
       0,    48,     0,     0,     0,    49,     0,     0,     0,     0,
      33,   113,     0,     0,   114,   106,    45,    46,    98,     0,
     107,    54,    55,    56,     0,     0,     0,    48,     0,     0,
       0,    49,     0,     0,     0,     0,    33,   163,     0,     0,
     114,   106,    45,    46,    98,     0,   107,    54,    55,    56,
       0,     0,     0,    48,     0,     0,     0,    49,     0,     0,
       0,     0,    33,     0,     0,     0,    51,   106,    45,    46,
      98,     0,   107,    54,    55,    56,     0,     0,     0,    48,
       0,     0,     0,    49,     0,     0,     0,     0,    33,     0,
       0,     0,   114,   106,    45,    46,    98,     0,   107,    54,
     162,    56,     0,     0,     0,    48,    45,    46,    98,    49,
      45,    46,    98,     0,    33,     0,     0,    48,   241,   106,
       0,    49,   152,     0,   107,    54,    55,    56,   233,     0,
      33,    45,    46,    98,   114,   106,     0,     0,     0,     0,
     107,    54,    55,    56,     0,     0,     0,     0,     0,     0,
       0,    33,     0,     0,     0,   114,   106,     0,     0,     0,
       0,   107,    54,    55,    56,   123,   124,   125,   126,   127,
     128,     0,   129,   130,   131,   132,   123,   124,   125,   126,
     127,   128,     0,   129,   130,   131,   132,     0,     0,     0,
       0,   195,     0,     0,     0,     0,     0,   133,   123,   124,
     125,   126,   127,   128,     0,   129,   130,   131,   132,     0,
       0,     0,     0,   123,   124,   125,   126,   127,   128,   197,
     129,   130,   131,   132,     0,     0,     0,     0,   123,   124,
     125,   126,   127,   128,   201,   129,   130,   131,   132,     0,
       0,     0,     0,   123,   124,   125,   126,   127,   128,   234,
     129,   130,   131,   132,     0,     0,   157,   123,   124,   125,
     126,   127,   128,     0,   129,   130,   131,   132,     0,     0,
     196,   123,   124,   125,   126,   127,   128,     0,   129,   130,
     131,   132,     0,     0,   198,   123,   124,   125,   126,   127,
     128,     0,   129,   130,   131,   132,     0,     0,   199,   123,
     124,   125,   126,   127,   128,     0,   129,   130,   131,   132,
       0,     0,   235,   123,   124,   125,   126,   127,   128,     0,
     129,   130,   131,   132,     0,     0,   242,   123,   124,   125,
     126,   127,   128,     0,   129,   130,   131,   132,   123,   124,
     125,   126,     0,     0,     0,   129,   130,   131,   132
};

static const yytype_int16 yycheck[] =
{
      28,    33,     0,    33,    12,    41,    42,    29,    12,     7,
       8,    80,    18,     5,     7,     8,    18,    15,    18,    27,
       5,    27,    15,    27,    56,    57,    56,    57,     5,    31,
      60,    31,    60,    18,    32,    33,    23,    15,    16,     5,
      27,     5,    84,    41,    42,    43,    31,    89,    49,     5,
      81,    87,     3,     4,    82,    60,    22,    60,    22,    57,
      19,     0,    28,    60,    28,    60,    23,    33,   110,    33,
      60,    30,    28,    19,   143,    19,    21,    33,   108,    24,
     108,   111,    80,   111,    30,    18,    30,     5,    60,    87,
      88,     5,    90,    60,    95,    96,    97,    24,    25,     5,
     101,   102,   103,   108,   105,   108,   111,    26,   111,   137,
      28,   108,   140,   108,   111,    33,   111,   148,   108,    24,
      25,   111,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,    23,   202,   135,     5,   108,    24,    25,   111,
     182,   108,    19,   141,   111,   143,   144,     5,     5,    19,
      23,     5,   180,    30,    27,   186,   187,    19,    28,    19,
     188,    19,    19,    33,   196,    19,   196,     5,    30,   199,
      28,    28,    19,    23,    28,    33,    33,    27,    26,    33,
     208,    19,   210,    30,    23,     5,   214,    23,    27,   219,
      28,   219,   222,   194,   222,    33,   197,    24,    25,   200,
     228,   233,   230,   233,   202,   235,     3,     4,    26,   239,
     242,   239,   242,   243,   219,   243,   219,   222,     5,   222,
      18,    26,   219,    18,   219,   222,     5,   222,    17,   219,
      18,     5,   222,   234,   239,    18,   239,    18,   243,    12,
     243,    37,   239,     5,   239,     5,   243,   219,   243,   239,
     222,    26,   219,   243,    31,   222,     5,    18,     3,     4,
       5,    13,    14,    15,    16,    18,     3,   239,    18,    14,
      26,   243,   239,    18,    32,    41,   243,    24,    23,    24,
      24,    27,    27,    28,     3,     4,     5,    27,    33,    34,
      35,    36,     3,     4,     5,    14,    27,    27,    27,    18,
      33,     7,   134,    14,    23,    24,   134,    18,    27,    28,
       3,     4,     5,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    14,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      23,    24,    -1,    -1,    27,    28,     3,     4,     5,    -1,
      33,    34,    35,    36,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,
      27,    28,     3,     4,     5,    -1,    33,    34,    35,    36,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    28,     3,     4,
       5,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    28,     3,     4,     5,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    14,     3,     4,     5,    18,
       3,     4,     5,    -1,    23,    -1,    -1,    14,    27,    28,
      -1,    18,    19,    -1,    33,    34,    35,    36,    21,    -1,
      23,     3,     4,     5,    27,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,     6,     7,     8,     9,
      10,    11,    -1,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    27,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,     6,     7,     8,     9,    10,    11,    27,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,     6,     7,
       8,     9,    10,    11,    27,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,     6,     7,     8,     9,    10,    11,    27,
      13,    14,    15,    16,    -1,    -1,    19,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    -1,    -1,
      19,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    -1,    -1,    19,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    -1,    -1,    19,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      -1,    -1,    19,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    -1,    -1,    19,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,     6,     7,
       8,     9,    -1,    -1,    -1,    13,    14,    15,    16
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    22,    28,    33,    39,    40,    41,    46,    47,
      50,     5,    29,     0,    22,    46,    47,    47,    50,     5,
      23,    18,     5,    47,     5,    26,    24,    25,    19,    23,
      26,     5,    26,    23,    51,    24,    25,     5,    18,    28,
      42,    43,    44,    45,    50,     3,     4,     5,    14,    18,
      24,    27,    28,    33,    34,    35,    36,    43,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    68,    69,    70,    71,    72,
      26,    18,    19,    48,    50,    24,    25,    44,    45,    50,
      45,    50,    50,     5,    49,    18,    31,    17,     5,    60,
      63,    18,    18,    18,    27,    18,    28,    33,    52,    24,
      50,    52,     5,    24,    27,    51,    53,    54,    55,    56,
      57,    58,    59,     6,     7,     8,     9,    10,    11,    13,
      14,    15,    16,    27,    37,    12,    42,    19,    48,    51,
      19,    30,    49,    26,    45,    49,     5,     5,    18,    31,
      12,    27,    19,    60,    67,    60,    60,    19,    60,    60,
      60,    60,    35,    24,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    65,    66,    60,    24,    25,    51,
      19,    51,    50,    42,    12,    27,    18,    18,    19,    48,
       3,     3,     4,    19,    30,    32,    19,    27,    19,    19,
      18,    27,    26,    51,    49,    24,     3,     4,    19,    48,
      19,    48,    27,    51,    19,    32,    27,    27,    60,    52,
      60,    27,    52,    60,    42,    27,    27,    27,    19,    51,
      19,    27,    51,    21,    27,    19,    24,    27,    51,    52,
      60,    27,    19,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    39,    39,    40,    40,    40,    40,    41,    41,
      41,    41,    41,    41,    41,    41,    42,    42,    42,    42,
      42,    42,    42,    42,    43,    43,    43,    43,    43,    43,
      44,    44,    44,    44,    45,    45,    45,    45,    46,    46,
      46,    46,    47,    48,    48,    49,    49,    50,    50,    50,
      51,    51,    51,    51,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    53,    54,    55,    55,    56,    57,    58,    59,
      59,    60,    60,    60,    60,    61,    61,    61,    61,    61,
      61,    62,    62,    63,    63,    64,    64,    65,    65,    66,
      66,    67,    67,    68,    69,    69,    70,    70,    71,    71,
      71,    71,    72,    72
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     2,     3,     4,     7,
       7,    10,     5,     8,     8,    11,     0,     1,     1,     1,
       2,     2,     2,     3,     3,     5,     5,     4,     6,     6,
       5,     6,     6,     7,     5,     6,     6,     7,     7,     8,
       8,     9,     5,     2,     4,     1,     4,     1,     1,     1,
       2,     3,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     4,     2,     5,     5,     7,     9,     5,
       7,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     3,     1,     3,     1,     4,     3,
       4,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3
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
        case 4:
#line 106 "cpp.y" /* yacc.c:1646  */
    {
			struct Program *program = (struct Program *)malloc(sizeof(struct Program));
			program->_class = NULL;
			program->classMethodDef = NULL;
			program->mainFunc = (yyvsp[0].ptr_mainfunc);
			head = program;
			(yyval.ptr_program) = program;			
		}
#line 1513 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 114 "cpp.y" /* yacc.c:1646  */
    {
			struct Program *program = (struct Program *)malloc(sizeof(struct Program));
			program->_class = (yyvsp[-1].ptr_class);
			program->classMethodDef = NULL;
			program->mainFunc = (yyvsp[0].ptr_mainfunc);
			head = program;
			(yyval.ptr_program) = program;
		}
#line 1526 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 122 "cpp.y" /* yacc.c:1646  */
    {
			struct Program *program = (struct Program *)malloc(sizeof(struct Program));
			program->_class = NULL;
			program->classMethodDef = (yyvsp[-1].ptr_classmethoddef);
			program->mainFunc = (yyvsp[0].ptr_mainfunc);
			head = program;
			(yyval.ptr_program) = program;
		}
#line 1539 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 130 "cpp.y" /* yacc.c:1646  */
    {
			struct Program *program = (struct Program *)malloc(sizeof(struct Program));
			program->_class = (yyvsp[-2].ptr_class);
			program->classMethodDef = (yyvsp[-1].ptr_classmethoddef);
			program->mainFunc = (yyvsp[0].ptr_mainfunc);
			head = program;
			(yyval.ptr_program) = program;
		}
#line 1552 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 140 "cpp.y" /* yacc.c:1646  */
    {
			struct Class *class = (struct Class *)malloc(sizeof(struct Class));
			class->id = (yyvsp[-2].id);
			class->priMember = NULL;
			class->pubMember = NULL;
			class->prev = NULL;
			(yyval.ptr_class) = class;
		}
#line 1565 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 148 "cpp.y" /* yacc.c:1646  */
    {
			struct Class *class = (struct Class *)malloc(sizeof(struct Class));
			class->id = (yyvsp[-5].id);
			class->priMember = (yyvsp[-1].ptr_member);
			class->pubMember = NULL;
			class->prev = NULL;
			(yyval.ptr_class) = class;
		}
#line 1578 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 156 "cpp.y" /* yacc.c:1646  */
    {
			struct Class *class = (struct Class *)malloc(sizeof(struct Class));
			class->id = (yyvsp[-5].id);
			class->priMember = NULL;
			class->pubMember = (yyvsp[-1].ptr_member);
			class->prev = NULL;
			(yyval.ptr_class) = class;
		}
#line 1591 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 164 "cpp.y" /* yacc.c:1646  */
    {
			struct Class *class = (struct Class *)malloc(sizeof(struct Class));
			class->id = (yyvsp[-8].id);
			class->priMember = (yyvsp[-4].ptr_member);
			class->pubMember = (yyvsp[-1].ptr_member);
			class->prev = NULL;
			(yyval.ptr_class) = class;
		}
#line 1604 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 172 "cpp.y" /* yacc.c:1646  */
    {
			struct Class *class = (struct Class *)malloc(sizeof(struct Class));
			class->id = (yyvsp[-2].id);
			class->priMember = NULL;
			class->pubMember = NULL;
			class->prev = (yyvsp[-4].ptr_class);
			(yyval.ptr_class) = class;
		}
#line 1617 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 180 "cpp.y" /* yacc.c:1646  */
    {
			struct Class *class = (struct Class *)malloc(sizeof(struct Class));
			class->id = (yyvsp[-5].id);
			class->priMember = (yyvsp[-1].ptr_member);
			class->pubMember = NULL;
			class->prev = (yyvsp[-7].ptr_class);
			(yyval.ptr_class) = class;
		}
#line 1630 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 188 "cpp.y" /* yacc.c:1646  */
    {
			struct Class *class = (struct Class *)malloc(sizeof(struct Class));
			class->id = (yyvsp[-5].id);
			class->priMember = NULL;
			class->pubMember = (yyvsp[-1].ptr_member);
			class->prev = (yyvsp[-7].ptr_class);
			(yyval.ptr_class) = class;
		}
#line 1643 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 196 "cpp.y" /* yacc.c:1646  */
    {
			struct Class *class = (struct Class *)malloc(sizeof(struct Class));
			class->id = (yyvsp[-8].id);
			class->priMember = (yyvsp[-4].ptr_member);
			class->pubMember = (yyvsp[-1].ptr_member);
			class->prev = (yyvsp[-10].ptr_class);
			(yyval.ptr_class) = class;
		}
#line 1656 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 207 "cpp.y" /* yacc.c:1646  */
    {
			struct Member *member = (struct Member *)malloc(sizeof(struct Member));
			member->varDecl = (yyvsp[0].ptr_vardecl);
			member->methodDecl = NULL;
			member->methodDef = NULL;
			(yyval.ptr_member) = member;
		}
#line 1668 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 214 "cpp.y" /* yacc.c:1646  */
    {
			struct Member *member = (struct Member *)malloc(sizeof(struct Member));
			member->varDecl = NULL;
			member->methodDecl = (yyvsp[0].ptr_methoddecl);
			member->methodDef = NULL;
			(yyval.ptr_member) = member;
		}
#line 1680 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 221 "cpp.y" /* yacc.c:1646  */
    {
			struct Member *member = (struct Member *)malloc(sizeof(struct Member));
			member->varDecl = NULL;
			member->methodDecl = NULL;
			member->methodDef = (yyvsp[0].ptr_methoddef);
			(yyval.ptr_member) = member;
		}
#line 1692 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 228 "cpp.y" /* yacc.c:1646  */
    {
			struct Member *member = (struct Member *)malloc(sizeof(struct Member));
			member->varDecl = (yyvsp[-1].ptr_vardecl);
			member->methodDecl = (yyvsp[0].ptr_methoddecl);
			member->methodDef = NULL;
			(yyval.ptr_member) = member;
		}
#line 1704 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 235 "cpp.y" /* yacc.c:1646  */
    {
			struct Member *member = (struct Member *)malloc(sizeof(struct Member));
			member->varDecl = (yyvsp[-1].ptr_vardecl);
			member->methodDecl = NULL;
			member->methodDef = (yyvsp[0].ptr_methoddef);
			(yyval.ptr_member) = member;
		}
#line 1716 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 242 "cpp.y" /* yacc.c:1646  */
    {
			struct Member *member = (struct Member *)malloc(sizeof(struct Member));
			member->varDecl = NULL;
			member->methodDecl = (yyvsp[-1].ptr_methoddecl);
			member->methodDef = (yyvsp[0].ptr_methoddef);
			(yyval.ptr_member) = member;
		}
#line 1728 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 249 "cpp.y" /* yacc.c:1646  */
    {
			struct Member *member = (struct Member *)malloc(sizeof(struct Member));
			member->varDecl = (yyvsp[-2].ptr_vardecl);
			member->methodDecl = (yyvsp[-1].ptr_methoddecl);
			member->methodDef = (yyvsp[0].ptr_methoddef);
			(yyval.ptr_member) = member;
		}
#line 1740 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 258 "cpp.y" /* yacc.c:1646  */
    {
			struct VarDecl *vardecl = (struct VarDecl *)malloc(sizeof(struct VarDecl));
			vardecl->type = (yyvsp[-2].ptr_type);
			vardecl->ident = (yyvsp[-1].ptr_ident);
			vardecl->assignType = eNon;
			vardecl->prev = NULL;
			(yyval.ptr_vardecl) = vardecl;
		}
#line 1753 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 266 "cpp.y" /* yacc.c:1646  */
    {
			struct VarDecl *vardecl = (struct VarDecl *)malloc(sizeof(struct VarDecl));
			vardecl->type = (yyvsp[-4].ptr_type);
			vardecl->ident = (yyvsp[-3].ptr_ident);
			vardecl->assignType = eAsInt;
			vardecl->assigner.intnum = (yyvsp[-1].intnum);
			vardecl->prev = NULL;
			(yyval.ptr_vardecl) = vardecl;
		}
#line 1767 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 275 "cpp.y" /* yacc.c:1646  */
    {
			struct VarDecl *vardecl = (struct VarDecl *)malloc(sizeof(struct VarDecl));
			vardecl->type = (yyvsp[-4].ptr_type);
			vardecl->ident = (yyvsp[-3].ptr_ident);
			vardecl->assignType = eAsFloat;
			vardecl->assigner.floatnum = (yyvsp[-1].floatnum);
			vardecl->prev = NULL;
			(yyval.ptr_vardecl) = vardecl;
		}
#line 1781 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 284 "cpp.y" /* yacc.c:1646  */
    {
			struct VarDecl *vardecl = (struct VarDecl *)malloc(sizeof(struct VarDecl));
			vardecl->type = (yyvsp[-2].ptr_type);
			vardecl->ident = (yyvsp[-1].ptr_ident);
			vardecl->assignType = eNon;
			vardecl->prev = (yyvsp[-3].ptr_vardecl);
			(yyval.ptr_vardecl) = vardecl;
		}
#line 1794 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 292 "cpp.y" /* yacc.c:1646  */
    {
			struct VarDecl *vardecl = (struct VarDecl *)malloc(sizeof(struct VarDecl));
			vardecl->type = (yyvsp[-4].ptr_type);
			vardecl->ident = (yyvsp[-3].ptr_ident);
			vardecl->assignType = eAsInt;
			vardecl->assigner.intnum = (yyvsp[-1].intnum);
			vardecl->prev = (yyvsp[-5].ptr_vardecl);
			(yyval.ptr_vardecl) = vardecl;
		}
#line 1808 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 301 "cpp.y" /* yacc.c:1646  */
    {
			struct VarDecl *vardecl = (struct VarDecl *)malloc(sizeof(struct VarDecl));
			vardecl->type = (yyvsp[-4].ptr_type);
			vardecl->ident = (yyvsp[-3].ptr_ident);
			vardecl->assignType = eAsFloat;
			vardecl->assigner.floatnum = (yyvsp[-1].floatnum);
			vardecl->prev = (yyvsp[-5].ptr_vardecl);
			(yyval.ptr_vardecl) = vardecl;
		}
#line 1822 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 312 "cpp.y" /* yacc.c:1646  */
    {
			struct MethodDecl *methoddecl = (struct MethodDecl *)malloc(sizeof(struct MethodDecl));
			methoddecl->id = (yyvsp[-3].id);
			methoddecl->type = (yyvsp[-4].ptr_type);
			methoddecl->param = NULL;
			methoddecl->prev = NULL;
			(yyval.ptr_methoddecl) = methoddecl;
		}
#line 1835 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 320 "cpp.y" /* yacc.c:1646  */
    {
			struct MethodDecl *methoddecl = (struct MethodDecl *)malloc(sizeof(struct MethodDecl));
			methoddecl->id = (yyvsp[-4].id);
			methoddecl->type = (yyvsp[-5].ptr_type);
			methoddecl->param = (yyvsp[-2].ptr_param);
			methoddecl->prev = NULL;
			(yyval.ptr_methoddecl) = methoddecl;
		}
#line 1848 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 328 "cpp.y" /* yacc.c:1646  */
    {
			struct MethodDecl *methoddecl = (struct MethodDecl *)malloc(sizeof(struct MethodDecl));
			methoddecl->id = (yyvsp[-3].id);
			methoddecl->type = (yyvsp[-4].ptr_type);
			methoddecl->param = NULL;
			methoddecl->prev = (yyvsp[-5].ptr_methoddecl);
			(yyval.ptr_methoddecl) = methoddecl;
		}
#line 1861 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 336 "cpp.y" /* yacc.c:1646  */
    {
			struct MethodDecl *methoddecl = (struct MethodDecl *)malloc(sizeof(struct MethodDecl));
			methoddecl->id = (yyvsp[-4].id);
			methoddecl->type = (yyvsp[-5].ptr_type);
			methoddecl->param = (yyvsp[-2].ptr_param);
			methoddecl->prev = (yyvsp[-6].ptr_methoddecl);
			(yyval.ptr_methoddecl) = methoddecl;
		}
#line 1874 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 346 "cpp.y" /* yacc.c:1646  */
    {
			struct MethodDef *methoddef = (struct MethodDef *)malloc(sizeof(struct MethodDef));
			methoddef->id = (yyvsp[-3].id);
			methoddef->type = (yyvsp[-4].ptr_type);
			methoddef->param = NULL;
			methoddef->compoundStmt = (yyvsp[0].ptr_compoundstmt);
			methoddef->prev = NULL;
			(yyval.ptr_methoddef) = methoddef;
		}
#line 1888 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 355 "cpp.y" /* yacc.c:1646  */
    {
			struct MethodDef *methoddef = (struct MethodDef *)malloc(sizeof(struct MethodDef));
			methoddef->id = (yyvsp[-4].id);
			methoddef->type = (yyvsp[-5].ptr_type);
			methoddef->param = (yyvsp[-2].ptr_param);
			methoddef->compoundStmt = (yyvsp[0].ptr_compoundstmt);
			methoddef->prev = NULL;
			(yyval.ptr_methoddef) = methoddef;
		}
#line 1902 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 364 "cpp.y" /* yacc.c:1646  */
    {
			struct MethodDef *methoddef = (struct MethodDef *)malloc(sizeof(struct MethodDef));
			methoddef->id = (yyvsp[-3].id);
			methoddef->type = (yyvsp[-4].ptr_type);
			methoddef->param = NULL;
			methoddef->compoundStmt = (yyvsp[0].ptr_compoundstmt);
			methoddef->prev = (yyvsp[-5].ptr_methoddef);
			(yyval.ptr_methoddef) = methoddef;
		}
#line 1916 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 373 "cpp.y" /* yacc.c:1646  */
    {
			struct MethodDef *methoddef = (struct MethodDef *)malloc(sizeof(struct MethodDef));
			methoddef->id = (yyvsp[-4].id);
			methoddef->type = (yyvsp[-5].ptr_type);
			methoddef->param = (yyvsp[-2].ptr_param);
			methoddef->compoundStmt = (yyvsp[0].ptr_compoundstmt);
			methoddef->prev = (yyvsp[-6].ptr_methoddef);
			(yyval.ptr_methoddef) = methoddef;
		}
#line 1930 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 384 "cpp.y" /* yacc.c:1646  */
    {
			struct ClassMethodDef *classmethoddef = (struct ClassMethodDef *)malloc(sizeof(struct ClassMethodDef));
			classmethoddef->type = (yyvsp[-6].ptr_type);
			classmethoddef->className = (yyvsp[-5].id);
			classmethoddef->methodName = (yyvsp[-3].id);
			classmethoddef->param = NULL;
			classmethoddef->compoundStmt = (yyvsp[0].ptr_compoundstmt);
			classmethoddef->prev = NULL;
			(yyval.ptr_classmethoddef) = classmethoddef;
		}
#line 1945 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 394 "cpp.y" /* yacc.c:1646  */
    {
			struct ClassMethodDef *classmethoddef = (struct ClassMethodDef *)malloc(sizeof(struct ClassMethodDef));
			classmethoddef->type = (yyvsp[-7].ptr_type);
			classmethoddef->className = (yyvsp[-6].id);
			classmethoddef->methodName = (yyvsp[-4].id);
			classmethoddef->param = (yyvsp[-2].ptr_param);
			classmethoddef->compoundStmt = (yyvsp[0].ptr_compoundstmt);
			classmethoddef->prev = NULL;
			(yyval.ptr_classmethoddef) = classmethoddef;
		}
#line 1960 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 404 "cpp.y" /* yacc.c:1646  */
    {
			struct ClassMethodDef *classmethoddef = (struct ClassMethodDef *)malloc(sizeof(struct ClassMethodDef));
			classmethoddef->type = (yyvsp[-6].ptr_type);
			classmethoddef->className = (yyvsp[-5].id);
			classmethoddef->methodName = (yyvsp[-3].id);
			classmethoddef->param = NULL;
			classmethoddef->compoundStmt = (yyvsp[0].ptr_compoundstmt);
			classmethoddef->prev = (yyvsp[-7].ptr_classmethoddef);
			(yyval.ptr_classmethoddef) = classmethoddef;
		}
#line 1975 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 414 "cpp.y" /* yacc.c:1646  */
    {
			struct ClassMethodDef *classmethoddef = (struct ClassMethodDef *)malloc(sizeof(struct ClassMethodDef));
			classmethoddef->type = (yyvsp[-7].ptr_type);
			classmethoddef->className = (yyvsp[-6].id);
			classmethoddef->methodName = (yyvsp[-4].id);
			classmethoddef->param = (yyvsp[-2].ptr_param);
			classmethoddef->compoundStmt = (yyvsp[0].ptr_compoundstmt);
			classmethoddef->prev = (yyvsp[-8].ptr_classmethoddef);
			(yyval.ptr_classmethoddef) = classmethoddef;
		}
#line 1990 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 426 "cpp.y" /* yacc.c:1646  */
    {
			struct MainFunc *mainfunc = (struct MainFunc *)malloc(sizeof(struct MainFunc));
			mainfunc->compoundStmt = (yyvsp[0].ptr_compoundstmt);
			(yyval.ptr_mainfunc) = mainfunc;
		}
#line 2000 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 433 "cpp.y" /* yacc.c:1646  */
    {
			struct Param *param = (struct Param *)malloc(sizeof(struct Param));
			param->type = (yyvsp[-1].ptr_type);
			param->ident = (yyvsp[0].ptr_ident);
			param->prev = NULL;
			(yyval.ptr_param) = param;
		}
#line 2012 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 440 "cpp.y" /* yacc.c:1646  */
    {
			struct Param *param = (struct Param *)malloc(sizeof(struct Param));
			param->type = (yyvsp[-1].ptr_type);
			param->ident = (yyvsp[0].ptr_ident);
			param->prev = (yyvsp[-3].ptr_param);
			(yyval.ptr_param) = param;
		}
#line 2024 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 449 "cpp.y" /* yacc.c:1646  */
    {
			struct Ident *ident = (struct Ident *)malloc(sizeof(struct Ident));
			ident->id = (yyvsp[0].id);
			ident->len = 0;
			(yyval.ptr_ident) = ident;
		}
#line 2035 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 455 "cpp.y" /* yacc.c:1646  */
    {
			struct Ident *ident = (struct Ident *)malloc(sizeof(struct Ident));
			ident->id = (yyvsp[-3].id);
			ident->len = 3;
			(yyval.ptr_ident) = ident;		
		}
#line 2046 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 463 "cpp.y" /* yacc.c:1646  */
    {
			struct Type *type = (struct Type *)malloc(sizeof(struct Type));
			type->id = NULL;
			type->e = eInt;
			(yyval.ptr_type) = type;
		}
#line 2057 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 469 "cpp.y" /* yacc.c:1646  */
    {
			struct Type *type = (struct Type *)malloc(sizeof(struct Type));
			type->id = NULL;
			type->e = eFloat;
			(yyval.ptr_type) = type;
		}
#line 2068 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 475 "cpp.y" /* yacc.c:1646  */
    {
			struct Type *type = (struct Type *)malloc(sizeof(struct Type));
			type->id = (yyvsp[0].id);
			type->e = eClass;
			(yyval.ptr_type) = type;
		}
#line 2079 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 483 "cpp.y" /* yacc.c:1646  */
    {
			struct CompoundStmt *compoundstmt = (struct CompoundStmt *)malloc(sizeof(struct CompoundStmt));
			compoundstmt->varDecl = NULL;
			compoundstmt->stmt = NULL;
			(yyval.ptr_compoundstmt) = compoundstmt;
		}
#line 2090 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 489 "cpp.y" /* yacc.c:1646  */
    {
			struct CompoundStmt *compoundstmt = (struct CompoundStmt *)malloc(sizeof(struct CompoundStmt));
			compoundstmt->varDecl = (yyvsp[-1].ptr_vardecl);
			compoundstmt->stmt = NULL;
			(yyval.ptr_compoundstmt) = compoundstmt;
		}
#line 2101 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 495 "cpp.y" /* yacc.c:1646  */
    {
			struct CompoundStmt *compoundstmt = (struct CompoundStmt *)malloc(sizeof(struct CompoundStmt));
			compoundstmt->varDecl = NULL;
			compoundstmt->stmt = (yyvsp[-1].ptr_stmt);
			(yyval.ptr_compoundstmt) = compoundstmt;
		}
#line 2112 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 501 "cpp.y" /* yacc.c:1646  */
    {
			struct CompoundStmt *compoundstmt = (struct CompoundStmt *)malloc(sizeof(struct CompoundStmt));
			compoundstmt->varDecl = (yyvsp[-2].ptr_vardecl);
			compoundstmt->stmt = (yyvsp[-1].ptr_stmt);
			(yyval.ptr_compoundstmt) = compoundstmt;
		}
#line 2123 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 509 "cpp.y" /* yacc.c:1646  */
    {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eExpr;
			stmt->type.exprStmt = (yyvsp[0].ptr_exprstmt);
			stmt->prev = NULL;
			(yyval.ptr_stmt) = stmt;
		}
#line 2135 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 516 "cpp.y" /* yacc.c:1646  */
    {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eAssign;
			stmt->type.assignStmt = (yyvsp[0].ptr_assignstmt);
			stmt->prev = NULL;
			(yyval.ptr_stmt) = stmt;
		}
#line 2147 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 523 "cpp.y" /* yacc.c:1646  */
    {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eRet;
			stmt->type.retStmt = (yyvsp[0].ptr_retstmt);
			stmt->prev = NULL;
			(yyval.ptr_stmt) = stmt;
		}
#line 2159 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 530 "cpp.y" /* yacc.c:1646  */
    {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eWhile;
			stmt->type.whileStmt = (yyvsp[0].ptr_whilestmt);
			stmt->prev = NULL;
			(yyval.ptr_stmt) = stmt;
		}
#line 2171 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 537 "cpp.y" /* yacc.c:1646  */
    {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eDo;
			stmt->type.doStmt = (yyvsp[0].ptr_dostmt);
			stmt->prev = NULL;
			(yyval.ptr_stmt) = stmt;
		}
#line 2183 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 544 "cpp.y" /* yacc.c:1646  */
    {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eFor;
			stmt->type.forStmt = (yyvsp[0].ptr_forstmt);
			stmt->prev = NULL;
			(yyval.ptr_stmt) = stmt;
		}
#line 2195 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 551 "cpp.y" /* yacc.c:1646  */
    {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eIf;
			stmt->type.ifStmt = (yyvsp[0].ptr_ifstmt);
			stmt->prev = NULL;
			(yyval.ptr_stmt) = stmt;
		}
#line 2207 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 558 "cpp.y" /* yacc.c:1646  */
    {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eCompound;
			stmt->type.compoundStmt = (yyvsp[0].ptr_compoundstmt);
			stmt->prev = NULL;
			(yyval.ptr_stmt) = stmt;
		}
#line 2219 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 565 "cpp.y" /* yacc.c:1646  */
    {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eSemi;
			stmt->prev = NULL;
			(yyval.ptr_stmt) = stmt;
		}
#line 2230 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 571 "cpp.y" /* yacc.c:1646  */
    {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eExpr;
			stmt->type.exprStmt = (yyvsp[0].ptr_exprstmt);
			stmt->prev = (yyvsp[-1].ptr_stmt);
			(yyval.ptr_stmt) = stmt;
		}
#line 2242 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 578 "cpp.y" /* yacc.c:1646  */
    {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eAssign;
			stmt->type.assignStmt = (yyvsp[0].ptr_assignstmt);
			stmt->prev = (yyvsp[-1].ptr_stmt);
			(yyval.ptr_stmt) = stmt;
		}
#line 2254 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 585 "cpp.y" /* yacc.c:1646  */
    {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eRet;
			stmt->type.retStmt = (yyvsp[0].ptr_retstmt);
			stmt->prev = (yyvsp[-1].ptr_stmt);
			(yyval.ptr_stmt) = stmt;
		}
#line 2266 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 592 "cpp.y" /* yacc.c:1646  */
    {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eWhile;
			stmt->type.whileStmt = (yyvsp[0].ptr_whilestmt);
			stmt->prev = (yyvsp[-1].ptr_stmt);
			(yyval.ptr_stmt) = stmt;
		}
#line 2278 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 599 "cpp.y" /* yacc.c:1646  */
    {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eDo;
			stmt->type.doStmt = (yyvsp[0].ptr_dostmt);
			stmt->prev = (yyvsp[-1].ptr_stmt);
			(yyval.ptr_stmt) = stmt;
		}
#line 2290 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 606 "cpp.y" /* yacc.c:1646  */
    {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eFor;
			stmt->type.forStmt = (yyvsp[0].ptr_forstmt);
			stmt->prev = (yyvsp[-1].ptr_stmt);
			(yyval.ptr_stmt) = stmt;
		}
#line 2302 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 613 "cpp.y" /* yacc.c:1646  */
    {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eIf;
			stmt->type.ifStmt = (yyvsp[0].ptr_ifstmt);
			stmt->prev = (yyvsp[-1].ptr_stmt);
			(yyval.ptr_stmt) = stmt;
		}
#line 2314 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 620 "cpp.y" /* yacc.c:1646  */
    {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eCompound;
			stmt->type.compoundStmt = (yyvsp[0].ptr_compoundstmt);
			stmt->prev = (yyvsp[-1].ptr_stmt);
			(yyval.ptr_stmt) = stmt;
		}
#line 2326 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 627 "cpp.y" /* yacc.c:1646  */
    {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eSemi;
			stmt->prev = (yyvsp[-1].ptr_stmt);
			(yyval.ptr_stmt) = stmt;
		}
#line 2337 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 635 "cpp.y" /* yacc.c:1646  */
    {
			struct ExprStmt *exprstmt = (struct ExprStmt *)malloc(sizeof(struct ExprStmt));
			exprstmt->expr = (yyvsp[-1].ptr_expr);
			(yyval.ptr_exprstmt) = exprstmt;
		}
#line 2347 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 642 "cpp.y" /* yacc.c:1646  */
    {
			struct AssignStmt *assignstmt = (struct AssignStmt *)malloc(sizeof(struct AssignStmt));
			assignstmt->refVarExpr = (yyvsp[-3].ptr_refvarexpr);
			assignstmt->expr = (yyvsp[-1].ptr_expr);
			(yyval.ptr_assignstmt) = assignstmt;
		}
#line 2358 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 650 "cpp.y" /* yacc.c:1646  */
    {
			struct RetStmt *retstmt = (struct RetStmt *)malloc(sizeof(struct RetStmt));
			retstmt->expr = NULL;
			(yyval.ptr_retstmt) = retstmt;
		}
#line 2368 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 655 "cpp.y" /* yacc.c:1646  */
    {
			struct RetStmt *retstmt = (struct RetStmt *)malloc(sizeof(struct RetStmt));
			retstmt->expr = (yyvsp[-2].ptr_expr);
			(yyval.ptr_retstmt) = retstmt;		
		}
#line 2378 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 662 "cpp.y" /* yacc.c:1646  */
    {
			struct WhileStmt *whilestmt = (struct WhileStmt *)malloc(sizeof(struct WhileStmt));
			whilestmt->cond = (yyvsp[-2].ptr_expr);
			whilestmt->body = (yyvsp[0].ptr_stmt);
			(yyval.ptr_whilestmt) = whilestmt;
		}
#line 2389 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 670 "cpp.y" /* yacc.c:1646  */
    {
			struct DoStmt *dostmt = (struct DoStmt *)malloc(sizeof(struct DoStmt));
			dostmt->cond = (yyvsp[-2].ptr_expr);
			dostmt->body = (yyvsp[-5].ptr_stmt);
			(yyval.ptr_dostmt) = dostmt;
		}
#line 2400 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 678 "cpp.y" /* yacc.c:1646  */
    {
			struct ForStmt *forstmt = (struct ForStmt *)malloc(sizeof(struct ForStmt));
			forstmt->init = (yyvsp[-6].ptr_expr);
			forstmt->cond = (yyvsp[-4].ptr_expr);
			forstmt->incr = (yyvsp[-2].ptr_expr);
			forstmt->body = (yyvsp[0].ptr_stmt);
			(yyval.ptr_forstmt) = forstmt;
		}
#line 2413 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 688 "cpp.y" /* yacc.c:1646  */
    {
			struct IfStmt *ifstmt = (struct IfStmt *)malloc(sizeof(struct IfStmt));
			ifstmt->cond = (yyvsp[-2].ptr_expr);
			ifstmt->ifBody = (yyvsp[0].ptr_stmt);
			ifstmt->elseBody = NULL;
			(yyval.ptr_ifstmt) = ifstmt;
		}
#line 2425 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 695 "cpp.y" /* yacc.c:1646  */
    {
			struct IfStmt *ifstmt = (struct IfStmt *)malloc(sizeof(struct IfStmt));
			ifstmt->cond = (yyvsp[-4].ptr_expr);
			ifstmt->ifBody = (yyvsp[-2].ptr_stmt);
			ifstmt->elseBody = (yyvsp[0].ptr_stmt);
			(yyval.ptr_ifstmt) = ifstmt;
		}
#line 2437 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 704 "cpp.y" /* yacc.c:1646  */
    {
			struct Expr *expr = (struct Expr *)malloc(sizeof(struct Expr));
			expr->e = eOper;
			expr->type.operExpr = (yyvsp[0].ptr_operexpr);
			(yyval.ptr_expr) = expr;
		}
#line 2448 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 710 "cpp.y" /* yacc.c:1646  */
    {
			struct Expr *expr = (struct Expr *)malloc(sizeof(struct Expr));
			expr->e = eRef;
			expr->type.refExpr = (yyvsp[0].ptr_refexpr);
			(yyval.ptr_expr) = expr;
		}
#line 2459 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 716 "cpp.y" /* yacc.c:1646  */
    {
			struct Expr *expr = (struct Expr *)malloc(sizeof(struct Expr));
			expr->e = eIntnum;
			expr->type.intnum = (yyvsp[0].intnum);
			(yyval.ptr_expr) = expr;
		}
#line 2470 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 722 "cpp.y" /* yacc.c:1646  */
    {
			struct Expr *expr = (struct Expr *)malloc(sizeof(struct Expr));
			expr->e = eFloatnum;
			expr->type.floatnum = (yyvsp[0].floatnum);
			(yyval.ptr_expr) = expr;
		}
#line 2481 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 730 "cpp.y" /* yacc.c:1646  */
    {
			struct OperExpr *operexpr = (struct OperExpr *)malloc(sizeof(struct OperExpr));
			operexpr->e = eUn;
			operexpr->type.un = (yyvsp[0].ptr_unop);
			(yyval.ptr_operexpr) = operexpr;
		}
#line 2492 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 736 "cpp.y" /* yacc.c:1646  */
    {
			struct OperExpr *operexpr = (struct OperExpr *)malloc(sizeof(struct OperExpr));
			operexpr->e = eAddi;
			operexpr->type.addi = (yyvsp[0].ptr_addiop);
			(yyval.ptr_operexpr) = operexpr;
		}
#line 2503 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 742 "cpp.y" /* yacc.c:1646  */
    {
			struct OperExpr *operexpr = (struct OperExpr *)malloc(sizeof(struct OperExpr));
			operexpr->e = eMult;
			operexpr->type.mult = (yyvsp[0].ptr_multop);
			(yyval.ptr_operexpr) = operexpr;
		}
#line 2514 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 748 "cpp.y" /* yacc.c:1646  */
    {
			struct OperExpr *operexpr = (struct OperExpr *)malloc(sizeof(struct OperExpr));
			operexpr->e = eRela;
			operexpr->type.rela = (yyvsp[0].ptr_relaop);
			(yyval.ptr_operexpr) = operexpr;
		}
#line 2525 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 754 "cpp.y" /* yacc.c:1646  */
    {
			struct OperExpr *operexpr = (struct OperExpr *)malloc(sizeof(struct OperExpr));
			operexpr->e = eEqlt;
			operexpr->type.eqlt = (yyvsp[0].ptr_eqltop);
			(yyval.ptr_operexpr) = operexpr;
		}
#line 2536 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 760 "cpp.y" /* yacc.c:1646  */
    {
			struct OperExpr *operexpr = (struct OperExpr *)malloc(sizeof(struct OperExpr));
			operexpr->e = eBracket;
			operexpr->type.bracket = (yyvsp[-1].ptr_expr);
			(yyval.ptr_operexpr) = operexpr;
		}
#line 2547 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 768 "cpp.y" /* yacc.c:1646  */
    {
			struct RefExpr *refexpr = (struct RefExpr *)malloc(sizeof(struct RefExpr));
			refexpr->e = eVar;
			refexpr->type.refVarExpr = (yyvsp[0].ptr_refvarexpr);
			(yyval.ptr_refexpr) = refexpr;
		}
#line 2558 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 774 "cpp.y" /* yacc.c:1646  */
    {
			struct RefExpr *refexpr = (struct RefExpr *)malloc(sizeof(struct RefExpr));
			refexpr->e = eCall;
			refexpr->type.refCallExpr = (yyvsp[0].ptr_refcallexpr);
			(yyval.ptr_refexpr) = refexpr;
		}
#line 2569 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 782 "cpp.y" /* yacc.c:1646  */
    {
			struct RefVarExpr *refvarexpr = (struct RefVarExpr *)malloc(sizeof(struct RefVarExpr));
			refvarexpr->refExpr = NULL;
			refvarexpr->identExpr = (yyvsp[0].ptr_identexpr);
			(yyval.ptr_refvarexpr) = refvarexpr;
		}
#line 2580 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 788 "cpp.y" /* yacc.c:1646  */
    {
			struct RefVarExpr *refvarexpr = (struct RefVarExpr *)malloc(sizeof(struct RefVarExpr));
			refvarexpr->refExpr = (yyvsp[-2].ptr_refexpr);
			refvarexpr->identExpr = (yyvsp[0].ptr_identexpr);
			(yyval.ptr_refvarexpr) = refvarexpr;
		}
#line 2591 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 796 "cpp.y" /* yacc.c:1646  */
    {
			struct RefCallExpr *refcallexpr = (struct RefCallExpr *)malloc(sizeof(struct RefCallExpr));
			refcallexpr->refExpr = NULL;
			refcallexpr->callExpr = (yyvsp[0].ptr_callexpr);
			(yyval.ptr_refcallexpr) = refcallexpr;
		}
#line 2602 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 802 "cpp.y" /* yacc.c:1646  */
    {
			struct RefCallExpr *refcallexpr = (struct RefCallExpr *)malloc(sizeof(struct RefCallExpr));
			refcallexpr->refExpr = (yyvsp[-2].ptr_refexpr);
			refcallexpr->callExpr = (yyvsp[0].ptr_callexpr);
			(yyval.ptr_refcallexpr) = refcallexpr;
		}
#line 2613 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 810 "cpp.y" /* yacc.c:1646  */
    {
			struct IdentExpr *identexpr = (struct IdentExpr *)malloc(sizeof(struct IdentExpr));
			identexpr->id = (yyvsp[0].id);
			identexpr->expr = NULL;
			(yyval.ptr_identexpr) = identexpr;
		}
#line 2624 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 816 "cpp.y" /* yacc.c:1646  */
    {
			struct IdentExpr *identexpr = (struct IdentExpr *)malloc(sizeof(struct IdentExpr));
			identexpr->id = (yyvsp[-3].id);
			identexpr->expr = (yyvsp[-1].ptr_expr);
			(yyval.ptr_identexpr) = identexpr;		
		}
#line 2635 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 824 "cpp.y" /* yacc.c:1646  */
    {
			struct CallExpr *callexpr = (struct CallExpr *)malloc(sizeof(struct CallExpr));
			callexpr->id = (yyvsp[-2].id);
			callexpr->arg = NULL;
			(yyval.ptr_callexpr) = callexpr;
		}
#line 2646 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 830 "cpp.y" /* yacc.c:1646  */
    {
			struct CallExpr *callexpr = (struct CallExpr *)malloc(sizeof(struct CallExpr));
			callexpr->id = (yyvsp[-3].id);
			callexpr->arg = (yyvsp[-1].ptr_arg);
			(yyval.ptr_callexpr) = callexpr;
		}
#line 2657 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 838 "cpp.y" /* yacc.c:1646  */
    {
			struct Arg *arg = (struct Arg *)malloc(sizeof(struct Arg));
			arg->expr = (yyvsp[0].ptr_expr);
			arg->prev = NULL;
			(yyval.ptr_arg) = arg;
		}
#line 2668 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 844 "cpp.y" /* yacc.c:1646  */
    {
			struct Arg *arg = (struct Arg *)malloc(sizeof(struct Arg));
			arg->expr = (yyvsp[0].ptr_expr);
			arg->prev = (yyvsp[-2].ptr_arg);
			(yyval.ptr_arg) = arg;
		}
#line 2679 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 852 "cpp.y" /* yacc.c:1646  */
    {
			struct UnOp *unop = (struct UnOp *)malloc(sizeof(struct UnOp));
			unop->e = eNegative;
			unop->expr = (yyvsp[0].ptr_expr);
			(yyval.ptr_unop) = unop;
		}
#line 2690 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 860 "cpp.y" /* yacc.c:1646  */
    {
			struct AddiOp *addiop = (struct AddiOp *)malloc(sizeof(struct AddiOp));
			addiop->e = ePlus;
			addiop->lhs = (yyvsp[-2].ptr_expr);
			addiop->rhs = (yyvsp[0].ptr_expr);
			(yyval.ptr_addiop) = addiop; 
		}
#line 2702 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 867 "cpp.y" /* yacc.c:1646  */
    {
			struct AddiOp *addiop = (struct AddiOp *)malloc(sizeof(struct AddiOp));
			addiop->e = eMinus;
			addiop->lhs = (yyvsp[-2].ptr_expr);
			addiop->rhs = (yyvsp[0].ptr_expr);
			(yyval.ptr_addiop) = addiop;
		}
#line 2714 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 876 "cpp.y" /* yacc.c:1646  */
    {
			struct MultOp *multop = (struct MultOp *)malloc(sizeof(struct MultOp));
			multop->e = eMul;
			multop->lhs = (yyvsp[-2].ptr_expr);
			multop->rhs = (yyvsp[0].ptr_expr);
			(yyval.ptr_multop) = multop; 
		}
#line 2726 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 883 "cpp.y" /* yacc.c:1646  */
    {
			struct MultOp *multop = (struct MultOp *)malloc(sizeof(struct MultOp));
			multop->e = eDiv;
			multop->lhs = (yyvsp[-2].ptr_expr);
			multop->rhs = (yyvsp[0].ptr_expr);
			(yyval.ptr_multop) = multop;
		}
#line 2738 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 892 "cpp.y" /* yacc.c:1646  */
    {
			struct RelaOp *relaop = (struct RelaOp *)malloc(sizeof(struct RelaOp));
			relaop->e = eLT;
			relaop->lhs = (yyvsp[-2].ptr_expr);
			relaop->rhs = (yyvsp[0].ptr_expr);
			(yyval.ptr_relaop) = relaop;
		}
#line 2750 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 899 "cpp.y" /* yacc.c:1646  */
    {
			struct RelaOp *relaop = (struct RelaOp *)malloc(sizeof(struct RelaOp));
			relaop->e = eGT;
			relaop->lhs = (yyvsp[-2].ptr_expr);
			relaop->rhs = (yyvsp[0].ptr_expr);
			(yyval.ptr_relaop) = relaop;
		}
#line 2762 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 906 "cpp.y" /* yacc.c:1646  */
    {
			struct RelaOp *relaop = (struct RelaOp *)malloc(sizeof(struct RelaOp));
			relaop->e = eLE;
			relaop->lhs = (yyvsp[-2].ptr_expr);
			relaop->rhs = (yyvsp[0].ptr_expr);
			(yyval.ptr_relaop) = relaop;
		}
#line 2774 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 913 "cpp.y" /* yacc.c:1646  */
    {
			struct RelaOp *relaop = (struct RelaOp *)malloc(sizeof(struct RelaOp));
			relaop->e = eGE;
			relaop->lhs = (yyvsp[-2].ptr_expr);
			relaop->rhs = (yyvsp[0].ptr_expr);
			(yyval.ptr_relaop) = relaop;
		}
#line 2786 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 922 "cpp.y" /* yacc.c:1646  */
    {
			struct EqltOp *eqltop = (struct EqltOp *)malloc(sizeof(struct EqltOp));
			eqltop->e = eEQ;
			eqltop->lhs = (yyvsp[-2].ptr_expr);
			eqltop->rhs = (yyvsp[0].ptr_expr);
			(yyval.ptr_eqltop) = eqltop;
		}
#line 2798 "cpp.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 929 "cpp.y" /* yacc.c:1646  */
    {
			struct EqltOp *eqltop = (struct EqltOp *)malloc(sizeof(struct EqltOp));
			eqltop->e = eNE;
			eqltop->lhs = (yyvsp[-2].ptr_expr);
			eqltop->rhs = (yyvsp[0].ptr_expr);
			(yyval.ptr_eqltop) = eqltop;
		}
#line 2810 "cpp.tab.c" /* yacc.c:1646  */
    break;


#line 2814 "cpp.tab.c" /* yacc.c:1646  */
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
#line 938 "cpp.y" /* yacc.c:1906  */


int yyerror (char *s) {
	return fprintf (stderr, "%s\n", s);
}
