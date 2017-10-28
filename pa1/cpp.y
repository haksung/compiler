%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "AST.h"
#include "print.h"
%}

%union {
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
}

%token <intnum>INTNUM <floatnum>FLOATNUM <id>ID
%token OP_LE OP_GE OP_GT OP_LT OP_EQ OP_NE

%right	'='
%left	OP_EQ OP_NE
%left	OP_LE OP_GE OP_GT OP_LT
%left	'+' '-'
%left	'*' '/'
%right	OP_UN
%left	'(' ')'

%nonassoc IF_THEN
%nonassoc 'else'

%start Start

%type <ptr_program>		Program;
%type <ptr_class>		Class;
%type <ptr_member> 		Member;
%type <ptr_vardecl> 		VarDecl;
%type <ptr_methoddecl> 		MethodDecl;
%type <ptr_methoddef> 		MethodDef;
%type <ptr_classmethoddef> 	ClassMethodDef;
%type <ptr_mainfunc> 		MainFunc;
%type <ptr_param> 		Param;
%type <ptr_ident> 		Ident;
%type <ptr_type> 		Type;
%type <ptr_compoundstmt> 	CompoundStmt;
%type <ptr_stmt> 		Stmt;
%type <ptr_exprstmt> 		ExprStmt;
%type <ptr_assignstmt> 		AssignStmt;
%type <ptr_retstmt> 		RetStmt;
%type <ptr_whilestmt> 		WhileStmt;
%type <ptr_dostmt> 		DoStmt;
%type <ptr_forstmt> 		ForStmt;
%type <ptr_ifstmt> 		IfStmt;
%type <ptr_expr> 		Expr;
%type <ptr_operexpr> 		OperExpr;
%type <ptr_refexpr> 		RefExpr;
%type <ptr_refvarexpr>		RefVarExpr;
%type <ptr_refcallexpr> 	RefCallExpr;
%type <ptr_identexpr> 		IdentExpr;
%type <ptr_callexpr> 		CallExpr;
%type <ptr_arg> 		Arg;
%type <ptr_unop> 		UnOp;
%type <ptr_addiop> 		AddiOp;
%type <ptr_multop> 		MultOp;
%type <ptr_relaop> 		RelaOp;
%type <ptr_eqltop>		EqltOp;

%%

Start :		/* empty string */
		| Program
		;

Program :	  MainFunc {
			struct Program *program = (struct Program *)malloc(sizeof(struct Program));
			program->_class = NULL;
			program->classMethodDef = NULL;
			program->mainFunc = $1;
			head = program;
			$$ = program;			
		}	
		| Class MainFunc {
			struct Program *program = (struct Program *)malloc(sizeof(struct Program));
			program->_class = $1;
			program->classMethodDef = NULL;
			program->mainFunc = $2;
			head = program;
			$$ = program;
		}
		| ClassMethodDef MainFunc {
			struct Program *program = (struct Program *)malloc(sizeof(struct Program));
			program->_class = NULL;
			program->classMethodDef = $1;
			program->mainFunc = $2;
			head = program;
			$$ = program;
		}	
		| Class ClassMethodDef MainFunc {
			struct Program *program = (struct Program *)malloc(sizeof(struct Program));
			program->_class = $1;
			program->classMethodDef = $2;
			program->mainFunc = $3;
			head = program;
			$$ = program;
		}
		;

Class :		  'class' ID '{' '}' {
			struct Class *class = (struct Class *)malloc(sizeof(struct Class));
			class->id = $2;
			class->priMember = NULL;
			class->pubMember = NULL;
			class->prev = NULL;
			$$ = class;
		}
		| 'class' ID '{' 'private' ':' Member '}' {
			struct Class *class = (struct Class *)malloc(sizeof(struct Class));
			class->id = $2;
			class->priMember = $6;
			class->pubMember = NULL;
			class->prev = NULL;
			$$ = class;
		}
		| 'class' ID '{' 'public' ':' Member '}' {
			struct Class *class = (struct Class *)malloc(sizeof(struct Class));
			class->id = $2;
			class->priMember = NULL;
			class->pubMember = $6;
			class->prev = NULL;
			$$ = class;
		}
		| 'class' ID '{' 'private' ':' Member 'public' ':' Member '}' {
			struct Class *class = (struct Class *)malloc(sizeof(struct Class));
			class->id = $2;
			class->priMember = $6;
			class->pubMember = $9;
			class->prev = NULL;
			$$ = class;
		}
		| Class 'class' ID '{' '}' {
			struct Class *class = (struct Class *)malloc(sizeof(struct Class));
			class->id = $3;
			class->priMember = NULL;
			class->pubMember = NULL;
			class->prev = $1;
			$$ = class;
		}
		| Class 'class' ID '{' 'private' ':' Member '}' {
			struct Class *class = (struct Class *)malloc(sizeof(struct Class));
			class->id = $3;
			class->priMember = $7;
			class->pubMember = NULL;
			class->prev = $1;
			$$ = class;
		}
		| Class 'class' ID '{' 'public' ':' Member '}' {
			struct Class *class = (struct Class *)malloc(sizeof(struct Class));
			class->id = $3;
			class->priMember = NULL;
			class->pubMember = $7;
			class->prev = $1;
			$$ = class;
		}
		| Class 'class' ID '{' 'private' ':' Member 'public' ':' Member '}' {
			struct Class *class = (struct Class *)malloc(sizeof(struct Class));
			class->id = $3;
			class->priMember = $7;
			class->pubMember = $10;
			class->prev = $1;
			$$ = class;
		}
		;

Member:		  /* empty string */
		| VarDecl {
			struct Member *member = (struct Member *)malloc(sizeof(struct Member));
			member->varDecl = $1;
			member->methodDecl = NULL;
			member->methodDef = NULL;
			$$ = member;
		}
		| MethodDecl {
			struct Member *member = (struct Member *)malloc(sizeof(struct Member));
			member->varDecl = NULL;
			member->methodDecl = $1;
			member->methodDef = NULL;
			$$ = member;
		}
		| MethodDef {
			struct Member *member = (struct Member *)malloc(sizeof(struct Member));
			member->varDecl = NULL;
			member->methodDecl = NULL;
			member->methodDef = $1;
			$$ = member;
		}
		| VarDecl MethodDecl {
			struct Member *member = (struct Member *)malloc(sizeof(struct Member));
			member->varDecl = $1;
			member->methodDecl = $2;
			member->methodDef = NULL;
			$$ = member;
		}
		| VarDecl MethodDef {
			struct Member *member = (struct Member *)malloc(sizeof(struct Member));
			member->varDecl = $1;
			member->methodDecl = NULL;
			member->methodDef = $2;
			$$ = member;
		}
		| MethodDecl MethodDef {
			struct Member *member = (struct Member *)malloc(sizeof(struct Member));
			member->varDecl = NULL;
			member->methodDecl = $1;
			member->methodDef = $2;
			$$ = member;
		}
		| VarDecl MethodDecl MethodDef {
			struct Member *member = (struct Member *)malloc(sizeof(struct Member));
			member->varDecl = $1;
			member->methodDecl = $2;
			member->methodDef = $3;
			$$ = member;
		}
		;

VarDecl :	  Type Ident ';' {
			struct VarDecl *vardecl = (struct VarDecl *)malloc(sizeof(struct VarDecl));
			vardecl->type = $1;
			vardecl->ident = $2;
			vardecl->assignType = eNon;
			vardecl->prev = NULL;
			$$ = vardecl;
		}
		| Type Ident '=' INTNUM ';' {
			struct VarDecl *vardecl = (struct VarDecl *)malloc(sizeof(struct VarDecl));
			vardecl->type = $1;
			vardecl->ident = $2;
			vardecl->assignType = eAsInt;
			vardecl->assigner.intnum = $4;
			vardecl->prev = NULL;
			$$ = vardecl;
		}
		| Type Ident '=' FLOATNUM ';' {
			struct VarDecl *vardecl = (struct VarDecl *)malloc(sizeof(struct VarDecl));
			vardecl->type = $1;
			vardecl->ident = $2;
			vardecl->assignType = eAsFloat;
			vardecl->assigner.floatnum = $4;
			vardecl->prev = NULL;
			$$ = vardecl;
		}
		| VarDecl Type Ident ';' {
			struct VarDecl *vardecl = (struct VarDecl *)malloc(sizeof(struct VarDecl));
			vardecl->type = $2;
			vardecl->ident = $3;
			vardecl->assignType = eNon;
			vardecl->prev = $1;
			$$ = vardecl;
		}
		| VarDecl Type Ident '=' INTNUM ';' {
			struct VarDecl *vardecl = (struct VarDecl *)malloc(sizeof(struct VarDecl));
			vardecl->type = $2;
			vardecl->ident = $3;
			vardecl->assignType = eAsInt;
			vardecl->assigner.intnum = $5;
			vardecl->prev = $1;
			$$ = vardecl;
		}
		| VarDecl Type Ident '=' FLOATNUM ';' {
			struct VarDecl *vardecl = (struct VarDecl *)malloc(sizeof(struct VarDecl));
			vardecl->type = $2;
			vardecl->ident = $3;
			vardecl->assignType = eAsFloat;
			vardecl->assigner.floatnum = $5;
			vardecl->prev = $1;
			$$ = vardecl;
		}
		;

MethodDecl : 	  Type ID '(' ')' ';' {
			struct MethodDecl *methoddecl = (struct MethodDecl *)malloc(sizeof(struct MethodDecl));
			methoddecl->id = $2;
			methoddecl->type = $1;
			methoddecl->param = NULL;
			methoddecl->prev = NULL;
			$$ = methoddecl;
		}
		| Type ID '(' Param ')' ';' {
			struct MethodDecl *methoddecl = (struct MethodDecl *)malloc(sizeof(struct MethodDecl));
			methoddecl->id = $2;
			methoddecl->type = $1;
			methoddecl->param = $4;
			methoddecl->prev = NULL;
			$$ = methoddecl;
		}
		| MethodDecl Type ID '(' ')' ';' {
			struct MethodDecl *methoddecl = (struct MethodDecl *)malloc(sizeof(struct MethodDecl));
			methoddecl->id = $3;
			methoddecl->type = $2;
			methoddecl->param = NULL;
			methoddecl->prev = $1;
			$$ = methoddecl;
		}
		| MethodDecl Type ID '(' Param ')' ';' {
			struct MethodDecl *methoddecl = (struct MethodDecl *)malloc(sizeof(struct MethodDecl));
			methoddecl->id = $3;
			methoddecl->type = $2;
			methoddecl->param = $5;
			methoddecl->prev = $1;
			$$ = methoddecl;
		}
		;

MethodDef:	  Type ID '(' ')' CompoundStmt {
			struct MethodDef *methoddef = (struct MethodDef *)malloc(sizeof(struct MethodDef));
			methoddef->id = $2;
			methoddef->type = $1;
			methoddef->param = NULL;
			methoddef->compoundStmt = $5;
			methoddef->prev = NULL;
			$$ = methoddef;
		}
		| Type ID '(' Param ')' CompoundStmt {
			struct MethodDef *methoddef = (struct MethodDef *)malloc(sizeof(struct MethodDef));
			methoddef->id = $2;
			methoddef->type = $1;
			methoddef->param = $4;
			methoddef->compoundStmt = $6;
			methoddef->prev = NULL;
			$$ = methoddef;
		}
		| MethodDef Type ID '(' ')' CompoundStmt {
			struct MethodDef *methoddef = (struct MethodDef *)malloc(sizeof(struct MethodDef));
			methoddef->id = $3;
			methoddef->type = $2;
			methoddef->param = NULL;
			methoddef->compoundStmt = $6;
			methoddef->prev = $1;
			$$ = methoddef;
		}
		| MethodDef Type ID '(' Param ')' CompoundStmt {
			struct MethodDef *methoddef = (struct MethodDef *)malloc(sizeof(struct MethodDef));
			methoddef->id = $3;
			methoddef->type = $2;
			methoddef->param = $5;
			methoddef->compoundStmt = $7;
			methoddef->prev = $1;
			$$ = methoddef;
		}
		;

ClassMethodDef :  Type ID '::' ID '(' ')' CompoundStmt {
			struct ClassMethodDef *classmethoddef = (struct ClassMethodDef *)malloc(sizeof(struct ClassMethodDef));
			classmethoddef->type = $1;
			classmethoddef->className = $2;
			classmethoddef->methodName = $4;
			classmethoddef->param = NULL;
			classmethoddef->compoundStmt = $7;
			classmethoddef->prev = NULL;
			$$ = classmethoddef;
		}
		| Type ID '::' ID '(' Param ')' CompoundStmt {
			struct ClassMethodDef *classmethoddef = (struct ClassMethodDef *)malloc(sizeof(struct ClassMethodDef));
			classmethoddef->type = $1;
			classmethoddef->className = $2;
			classmethoddef->methodName = $4;
			classmethoddef->param = $6;
			classmethoddef->compoundStmt = $8;
			classmethoddef->prev = NULL;
			$$ = classmethoddef;
		}
		| ClassMethodDef Type ID '::' ID '(' ')' CompoundStmt {
			struct ClassMethodDef *classmethoddef = (struct ClassMethodDef *)malloc(sizeof(struct ClassMethodDef));
			classmethoddef->type = $2;
			classmethoddef->className = $3;
			classmethoddef->methodName = $5;
			classmethoddef->param = NULL;
			classmethoddef->compoundStmt = $8;
			classmethoddef->prev = $1;
			$$ = classmethoddef;
		}
		| ClassMethodDef Type ID '::' ID '(' Param ')' CompoundStmt {
			struct ClassMethodDef *classmethoddef = (struct ClassMethodDef *)malloc(sizeof(struct ClassMethodDef));
			classmethoddef->type = $2;
			classmethoddef->className = $3;
			classmethoddef->methodName = $5;
			classmethoddef->param = $7;
			classmethoddef->compoundStmt = $9;
			classmethoddef->prev = $1;
			$$ = classmethoddef;
		}
		;

MainFunc :	'int' 'main' '(' ')' CompoundStmt {
			struct MainFunc *mainfunc = (struct MainFunc *)malloc(sizeof(struct MainFunc));
			mainfunc->compoundStmt = $5;
			$$ = mainfunc;
		}
		;

Param : 	  Type Ident {
			struct Param *param = (struct Param *)malloc(sizeof(struct Param));
			param->type = $1;
			param->ident = $2;
			param->prev = NULL;
			$$ = param;
		}
		| Param ',' Type Ident {
			struct Param *param = (struct Param *)malloc(sizeof(struct Param));
			param->type = $3;
			param->ident = $4;
			param->prev = $1;
			$$ = param;
		}
		;

Ident :		  ID {
			struct Ident *ident = (struct Ident *)malloc(sizeof(struct Ident));
			ident->id = $1;
			ident->len = 0;
			$$ = ident;
		}
		| ID '[' INTNUM ']' {
			struct Ident *ident = (struct Ident *)malloc(sizeof(struct Ident));
			ident->id = $1;
			ident->len = 3;
			$$ = ident;		
		}
		;

Type :		  'int' {
			struct Type *type = (struct Type *)malloc(sizeof(struct Type));
			type->id = NULL;
			type->e = eInt;
			$$ = type;
		}
		| 'float' {
			struct Type *type = (struct Type *)malloc(sizeof(struct Type));
			type->id = NULL;
			type->e = eFloat;
			$$ = type;
		}
		| ID {
			struct Type *type = (struct Type *)malloc(sizeof(struct Type));
			type->id = $1;
			type->e = eClass;
			$$ = type;
		}
		;

CompoundStmt :	  '{' '}' {
			struct CompoundStmt *compoundstmt = (struct CompoundStmt *)malloc(sizeof(struct CompoundStmt));
			compoundstmt->varDecl = NULL;
			compoundstmt->stmt = NULL;
			$$ = compoundstmt;
		}
		| '{' VarDecl '}' {
			struct CompoundStmt *compoundstmt = (struct CompoundStmt *)malloc(sizeof(struct CompoundStmt));
			compoundstmt->varDecl = $2;
			compoundstmt->stmt = NULL;
			$$ = compoundstmt;
		}
		| '{' Stmt '}' {
			struct CompoundStmt *compoundstmt = (struct CompoundStmt *)malloc(sizeof(struct CompoundStmt));
			compoundstmt->varDecl = NULL;
			compoundstmt->stmt = $2;
			$$ = compoundstmt;
		}
		| '{' VarDecl Stmt '}' {
			struct CompoundStmt *compoundstmt = (struct CompoundStmt *)malloc(sizeof(struct CompoundStmt));
			compoundstmt->varDecl = $2;
			compoundstmt->stmt = $3;
			$$ = compoundstmt;
		}
		;

Stmt :		  ExprStmt {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eExpr;
			stmt->type.exprStmt = $1;
			stmt->prev = NULL;
			$$ = stmt;
		}
		| AssignStmt {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eAssign;
			stmt->type.assignStmt = $1;
			stmt->prev = NULL;
			$$ = stmt;
		}
		| RetStmt {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eRet;
			stmt->type.retStmt = $1;
			stmt->prev = NULL;
			$$ = stmt;
		}
		| WhileStmt {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eWhile;
			stmt->type.whileStmt = $1;
			stmt->prev = NULL;
			$$ = stmt;
		}
		| DoStmt {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eDo;
			stmt->type.doStmt = $1;
			stmt->prev = NULL;
			$$ = stmt;
		}
		| ForStmt {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eFor;
			stmt->type.forStmt = $1;
			stmt->prev = NULL;
			$$ = stmt;
		}
		| IfStmt {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eIf;
			stmt->type.ifStmt = $1;
			stmt->prev = NULL;
			$$ = stmt;
		}
		| CompoundStmt {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eCompound;
			stmt->type.compoundStmt = $1;
			stmt->prev = NULL;
			$$ = stmt;
		}
		| ';' {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eSemi;
			stmt->prev = NULL;
			$$ = stmt;
		}
		| Stmt ExprStmt {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eExpr;
			stmt->type.exprStmt = $2;
			stmt->prev = $1;
			$$ = stmt;
		}
		| Stmt AssignStmt {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eAssign;
			stmt->type.assignStmt = $2;
			stmt->prev = $1;
			$$ = stmt;
		}
		| Stmt RetStmt {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eRet;
			stmt->type.retStmt = $2;
			stmt->prev = $1;
			$$ = stmt;
		}
		| Stmt WhileStmt {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eWhile;
			stmt->type.whileStmt = $2;
			stmt->prev = $1;
			$$ = stmt;
		}
		| Stmt DoStmt {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eDo;
			stmt->type.doStmt = $2;
			stmt->prev = $1;
			$$ = stmt;
		}
		| Stmt ForStmt {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eFor;
			stmt->type.forStmt = $2;
			stmt->prev = $1;
			$$ = stmt;
		}
		| Stmt IfStmt {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eIf;
			stmt->type.ifStmt = $2;
			stmt->prev = $1;
			$$ = stmt;
		}
		| Stmt CompoundStmt {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eCompound;
			stmt->type.compoundStmt = $2;
			stmt->prev = $1;
			$$ = stmt;
		}
		| Stmt ';' {
			struct Stmt *stmt = (struct Stmt *)malloc(sizeof(struct Stmt));
			stmt->e = eSemi;
			stmt->prev = $1;
			$$ = stmt;
		}
		;

ExprStmt :	Expr ';' {
			struct ExprStmt *exprstmt = (struct ExprStmt *)malloc(sizeof(struct ExprStmt));
			exprstmt->expr = $1;
			$$ = exprstmt;
		}
		;

AssignStmt :	RefVarExpr '=' Expr ';' {
			struct AssignStmt *assignstmt = (struct AssignStmt *)malloc(sizeof(struct AssignStmt));
			assignstmt->refVarExpr = $1;
			assignstmt->expr = $3;
			$$ = assignstmt;
		}
		;

RetStmt :	  'return' ';' {
			struct RetStmt *retstmt = (struct RetStmt *)malloc(sizeof(struct RetStmt));
			retstmt->expr = NULL;
			$$ = retstmt;
		}
		| 'return' '(' Expr ')' ';' {
			struct RetStmt *retstmt = (struct RetStmt *)malloc(sizeof(struct RetStmt));
			retstmt->expr = $3;
			$$ = retstmt;		
		}
		;

WhileStmt :	'while' '(' Expr ')' Stmt {
			struct WhileStmt *whilestmt = (struct WhileStmt *)malloc(sizeof(struct WhileStmt));
			whilestmt->cond = $3;
			whilestmt->body = $5;
			$$ = whilestmt;
		}
		;

DoStmt :	'do' Stmt 'while' '(' Expr ')' ';' {
			struct DoStmt *dostmt = (struct DoStmt *)malloc(sizeof(struct DoStmt));
			dostmt->cond = $5;
			dostmt->body = $2;
			$$ = dostmt;
		}
		;

ForStmt :	'for' '(' Expr ';' Expr ';' Expr ')' Stmt {
			struct ForStmt *forstmt = (struct ForStmt *)malloc(sizeof(struct ForStmt));
			forstmt->init = $3;
			forstmt->cond = $5;
			forstmt->incr = $7;
			forstmt->body = $9;
			$$ = forstmt;
		}
		;

IfStmt :	  'if' '(' Expr ')' Stmt %prec IF_THEN {
			struct IfStmt *ifstmt = (struct IfStmt *)malloc(sizeof(struct IfStmt));
			ifstmt->cond = $3;
			ifstmt->ifBody = $5;
			ifstmt->elseBody = NULL;
			$$ = ifstmt;
		}
		| 'if' '(' Expr ')' Stmt 'else' Stmt {
			struct IfStmt *ifstmt = (struct IfStmt *)malloc(sizeof(struct IfStmt));
			ifstmt->cond = $3;
			ifstmt->ifBody = $5;
			ifstmt->elseBody = $7;
			$$ = ifstmt;
		}
		;

Expr :		  OperExpr {
			struct Expr *expr = (struct Expr *)malloc(sizeof(struct Expr));
			expr->e = eOper;
			expr->type.operExpr = $1;
			$$ = expr;
		}
		| RefExpr {
			struct Expr *expr = (struct Expr *)malloc(sizeof(struct Expr));
			expr->e = eRef;
			expr->type.refExpr = $1;
			$$ = expr;
		}
		| INTNUM {
			struct Expr *expr = (struct Expr *)malloc(sizeof(struct Expr));
			expr->e = eIntnum;
			expr->type.intnum = $1;
			$$ = expr;
		}
		| FLOATNUM {
			struct Expr *expr = (struct Expr *)malloc(sizeof(struct Expr));
			expr->e = eFloatnum;
			expr->type.floatnum = $1;
			$$ = expr;
		}
		;

OperExpr :	  UnOp {
			struct OperExpr *operexpr = (struct OperExpr *)malloc(sizeof(struct OperExpr));
			operexpr->e = eUn;
			operexpr->type.un = $1;
			$$ = operexpr;
		}
		| AddiOp {
			struct OperExpr *operexpr = (struct OperExpr *)malloc(sizeof(struct OperExpr));
			operexpr->e = eAddi;
			operexpr->type.addi = $1;
			$$ = operexpr;
		}
		| MultOp {
			struct OperExpr *operexpr = (struct OperExpr *)malloc(sizeof(struct OperExpr));
			operexpr->e = eMult;
			operexpr->type.mult = $1;
			$$ = operexpr;
		}
		| RelaOp {
			struct OperExpr *operexpr = (struct OperExpr *)malloc(sizeof(struct OperExpr));
			operexpr->e = eRela;
			operexpr->type.rela = $1;
			$$ = operexpr;
		}
		| EqltOp {
			struct OperExpr *operexpr = (struct OperExpr *)malloc(sizeof(struct OperExpr));
			operexpr->e = eEqlt;
			operexpr->type.eqlt = $1;
			$$ = operexpr;
		}
		| '(' Expr ')' {
			struct OperExpr *operexpr = (struct OperExpr *)malloc(sizeof(struct OperExpr));
			operexpr->e = eBracket;
			operexpr->type.bracket = $2;
			$$ = operexpr;
		}
		;

RefExpr : 	  RefVarExpr {
			struct RefExpr *refexpr = (struct RefExpr *)malloc(sizeof(struct RefExpr));
			refexpr->e = eVar;
			refexpr->type.refVarExpr = $1;
			$$ = refexpr;
		}
		| RefCallExpr {
			struct RefExpr *refexpr = (struct RefExpr *)malloc(sizeof(struct RefExpr));
			refexpr->e = eCall;
			refexpr->type.refCallExpr = $1;
			$$ = refexpr;
		}
		;

RefVarExpr :	  IdentExpr {
			struct RefVarExpr *refvarexpr = (struct RefVarExpr *)malloc(sizeof(struct RefVarExpr));
			refvarexpr->refExpr = NULL;
			refvarexpr->identExpr = $1;
			$$ = refvarexpr;
		}
		| RefExpr '.' IdentExpr {
			struct RefVarExpr *refvarexpr = (struct RefVarExpr *)malloc(sizeof(struct RefVarExpr));
			refvarexpr->refExpr = $1;
			refvarexpr->identExpr = $3;
			$$ = refvarexpr;
		}
		;

RefCallExpr : 	  CallExpr {
			struct RefCallExpr *refcallexpr = (struct RefCallExpr *)malloc(sizeof(struct RefCallExpr));
			refcallexpr->refExpr = NULL;
			refcallexpr->callExpr = $1;
			$$ = refcallexpr;
		}
		| RefExpr '.' CallExpr {
			struct RefCallExpr *refcallexpr = (struct RefCallExpr *)malloc(sizeof(struct RefCallExpr));
			refcallexpr->refExpr = $1;
			refcallexpr->callExpr = $3;
			$$ = refcallexpr;
		}
		;

IdentExpr : 	  ID {
			struct IdentExpr *identexpr = (struct IdentExpr *)malloc(sizeof(struct IdentExpr));
			identexpr->id = $1;
			identexpr->expr = NULL;
			$$ = identexpr;
		}
		| ID '[' Expr ']' {
			struct IdentExpr *identexpr = (struct IdentExpr *)malloc(sizeof(struct IdentExpr));
			identexpr->id = $1;
			identexpr->expr = $3;
			$$ = identexpr;		
		}
		;

CallExpr :	  ID '(' ')' {
			struct CallExpr *callexpr = (struct CallExpr *)malloc(sizeof(struct CallExpr));
			callexpr->id = $1;
			callexpr->arg = NULL;
			$$ = callexpr;
		}
		| ID '(' Arg ')' {
			struct CallExpr *callexpr = (struct CallExpr *)malloc(sizeof(struct CallExpr));
			callexpr->id = $1;
			callexpr->arg = $3;
			$$ = callexpr;
		}
		;

Arg :		  Expr {
			struct Arg *arg = (struct Arg *)malloc(sizeof(struct Arg));
			arg->expr = $1;
			arg->prev = NULL;
			$$ = arg;
		}		
		| Arg ',' Expr {
			struct Arg *arg = (struct Arg *)malloc(sizeof(struct Arg));
			arg->expr = $3;
			arg->prev = $1;
			$$ = arg;
		}
		;

UnOp :		'-' OP_UN Expr {
			struct UnOp *unop = (struct UnOp *)malloc(sizeof(struct UnOp));
			unop->e = eNegative;
			unop->expr = $3;
			$$ = unop;
		}
		;

AddiOp : 	  Expr '+' Expr {
			struct AddiOp *addiop = (struct AddiOp *)malloc(sizeof(struct AddiOp));
			addiop->e = ePlus;
			addiop->lhs = $1;
			addiop->rhs = $3;
			$$ = addiop; 
		}
		| Expr '-' Expr {
			struct AddiOp *addiop = (struct AddiOp *)malloc(sizeof(struct AddiOp));
			addiop->e = eMinus;
			addiop->lhs = $1;
			addiop->rhs = $3;
			$$ = addiop;
		}
		;

MultOp : 	  Expr '*' Expr {
			struct MultOp *multop = (struct MultOp *)malloc(sizeof(struct MultOp));
			multop->e = eMul;
			multop->lhs = $1;
			multop->rhs = $3;
			$$ = multop; 
		}
		| Expr '/' Expr {
			struct MultOp *multop = (struct MultOp *)malloc(sizeof(struct MultOp));
			multop->e = eDiv;
			multop->lhs = $1;
			multop->rhs = $3;
			$$ = multop;
		}
		;

RelaOp :	  Expr OP_LT Expr {
			struct RelaOp *relaop = (struct RelaOp *)malloc(sizeof(struct RelaOp));
			relaop->e = eLT;
			relaop->lhs = $1;
			relaop->rhs = $3;
			$$ = relaop;
		}
		| Expr OP_GT Expr {
			struct RelaOp *relaop = (struct RelaOp *)malloc(sizeof(struct RelaOp));
			relaop->e = eGT;
			relaop->lhs = $1;
			relaop->rhs = $3;
			$$ = relaop;
		}
		| Expr OP_LE Expr {
			struct RelaOp *relaop = (struct RelaOp *)malloc(sizeof(struct RelaOp));
			relaop->e = eLE;
			relaop->lhs = $1;
			relaop->rhs = $3;
			$$ = relaop;
		}
		| Expr OP_GE Expr {
			struct RelaOp *relaop = (struct RelaOp *)malloc(sizeof(struct RelaOp));
			relaop->e = eGE;
			relaop->lhs = $1;
			relaop->rhs = $3;
			$$ = relaop;
		}
		;

EqltOp :	  Expr OP_EQ Expr {
			struct EqltOp *eqltop = (struct EqltOp *)malloc(sizeof(struct EqltOp));
			eqltop->e = eEQ;
			eqltop->lhs = $1;
			eqltop->rhs = $3;
			$$ = eqltop;
		}
		| Expr OP_NE Expr {
			struct EqltOp *eqltop = (struct EqltOp *)malloc(sizeof(struct EqltOp));
			eqltop->e = eNE;
			eqltop->lhs = $1;
			eqltop->rhs = $3;
			$$ = eqltop;
		}
		;

%%

int yyerror (char *s) {
	return fprintf (stderr, "%s\n", s);
}
