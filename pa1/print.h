#ifndef PRINT_H
#define PRINT_H

#include "AST.h"

struct Program *head;

struct table {
	char	*loc;

	
};

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
