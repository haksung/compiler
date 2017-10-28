/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 10 "cpp.y" /* yacc.c:1909  */

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

#line 108 "cpp.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CPP_TAB_H_INCLUDED  */
