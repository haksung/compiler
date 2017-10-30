#ifndef PRINT_H
#define PRINT_H

#include "AST.h"

struct Program *head;

struct table {
	int 	type;	// 1: Int, 2: Float, 3: Class
	char 	*name;
	int	arr;	// 0: -, 1~: Array_num
	int	role;	// 1: Parameter, 2: Variable
	int	stmt;	// 1: Class, 2: Function 3: While, 4: For, 5: If, 6: Compound, 7: Do
	int	io;	// 1: In, 2: Out

	struct table *next;
};

struct table *t;

void dfs(void);
void Class(struct Class*);
void Member(struct Member*);
void VarDecl(struct VarDecl*);
void MethodDecl(struct MethodDecl*);
void MethodDef(struct MethodDef*);
void ClassMethodDef(struct ClassMethodDef*);
void MainFunc(struct MainFunc*);
void Param(struct Param*);
void Ident(struct Ident*);
void Type(struct Type*);
void CompoundStmt(struct CompoundStmt*);
void Stmt(struct Stmt*);
void ExprStmt(struct ExprStmt*);
void AssignStmt(struct AssignStmt*);
void RetStmt(struct RetStmt*);
void WhileStmt(struct WhileStmt*);
void DoStmt(struct DoStmt*);
void ForStmt(struct ForStmt*);
void IfStmt(struct IfStmt*);
void Expr(struct Expr*);
void OperExpr(struct OperExpr*);
void RefExpr(struct RefExpr*);
void RefVarExpr(struct RefVarExpr*);
void RefCallExpr(struct RefCallExpr*);
void IdentExpr(struct IdentExpr*);
void CallExpr(struct CallExpr*);
void Arg(struct Arg*);
void UnOp(struct UnOp*);
void AddiOp(struct AddiOp*);
void MultOp(struct MultOp*);
void RelaOp(struct RelaOp*);
void EqltOp(struct EqltOp*);

#endif
