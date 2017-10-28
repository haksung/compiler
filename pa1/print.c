#include <stdio.h>
#include "AST.h"
#include "print.h"

FILE *ast;
FILE *table;

int tab;
void print_tab(int n) {
	int i;
	for(i=0; i<n; i++)
		fprintf(ast, "\t");
	return;
}

int main () {
	ast = fopen("ast.txt", "w");
	table = fopen("s_table.txt", "w");

	if (!yyparse()) 
		dfs();
	
	fprintf(ast, "\n");
	fprintf(table, "\n");
	fclose(ast);
	fclose(table);

	return 0;
}

void dfs () {
	if (head == NULL) {
		fprintf (stderr, "program does not exist.\n");
		return;
	}

	if(head->_class != NULL)
		Class(head->_class);

	if(head->classMethodDef != NULL)
		ClassMethodDef(head->classMethodDef);

	if(head->mainFunc != NULL)
		MainFunc(head->mainFunc);
}


void Class(struct Class *class) {
	if(class->prev != NULL)
		Class(class->prev);

	fprintf(ast, "class %s {\n", class->id);

	tab = tab + 2;	
	if(class->priMember != NULL) {
		fprintf(ast, "\tprivate :\n");
		Member(class->priMember);
	}
	if(class->pubMember != NULL) {
		fprintf(ast, "\tpublic :\n");
		Member(class->pubMember);
	}
	tab = tab - 2;

	fprintf(ast, "}\n\n");
	return;
}

void Member(struct Member *member) {
	if(member->varDecl != NULL)
		VarDecl(member->varDecl);

	if(member->methodDecl != NULL)
		MethodDecl(member->methodDecl);

	if(member->methodDef != NULL)
		MethodDef(member->methodDef);
	return;
}

void VarDecl(struct VarDecl *varDecl) {
	if(varDecl->prev != NULL)
		VarDecl(varDecl->prev);

	if(varDecl->type != NULL && varDecl->ident != NULL) {
		print_tab(tab);
		Type(varDecl->type);
		Ident(varDecl->ident);
		if(varDecl->assignType == eAsInt)
			fprintf(ast, "= %d ", varDecl->assigner.intnum);
		if(varDecl->assignType == eAsFloat)
			fprintf(ast, "= %f ", varDecl->assigner.floatnum);
		fprintf(ast, ";\n");
	}
	
	return;
}

void MethodDecl(struct MethodDecl *methodDecl) {
	if(methodDecl->prev != NULL)
		MethodDecl(methodDecl->prev);

	if(methodDecl->type != NULL) {
		print_tab(tab);
		Type(methodDecl->type);
		fprintf(ast, "%s ( ", methodDecl->id);
		if(methodDecl->param != NULL)
			Param(methodDecl->param);
		fprintf(ast, ") ;\n");
	}
	
	return;
}

void MethodDef(struct MethodDef *methodDef) {
	if(methodDef->prev != NULL)
		MethodDef(methodDef->prev);

	if(methodDef->type != NULL) {
		print_tab(tab);
		Type(methodDef->type);
		fprintf(ast, "%s ( ", methodDef->id);
		if(methodDef->param != NULL)
			Param(methodDef->param);
		fprintf(ast, ") ");
		if(methodDef->compoundStmt != NULL)
			CompoundStmt(methodDef->compoundStmt);
		fprintf(ast, "\n");
	}
	
	return;
}

void ClassMethodDef(struct ClassMethodDef *classMethodDef) {
	if(classMethodDef->prev != NULL)
		ClassMethodDef(classMethodDef->prev);

	if(classMethodDef->type != NULL) {
		Type(classMethodDef->type);
		fprintf(ast, "%s :: %s ( ", classMethodDef->className, classMethodDef->methodName);
		if(classMethodDef->param != NULL)
			Param(classMethodDef->param);
		fprintf(ast, ") ");
		if(classMethodDef->compoundStmt != NULL)
			CompoundStmt(classMethodDef->compoundStmt);
		fprintf(ast, "\n");
	}
	
	return;
}

void MainFunc(struct MainFunc *mainFunc) {
	fprintf(ast, "int main ( ) ");
	if(mainFunc->compoundStmt != NULL)
		CompoundStmt(mainFunc->compoundStmt);
	return;
}

void Param(struct Param *param) {
	if(param->prev != NULL) {
		Param(param->prev);
		fprintf(ast, ", ");
	}
	if(param->type != NULL && param->ident != NULL) {
		Type(param->type);
		Ident(param->ident);
	}

	return;
}

void Ident(struct Ident *ident) {
	fprintf(ast, "%s ", ident->id);
	if(ident->len > 0)
		fprintf(ast, "[ %d ] ", ident->len);
	return;
}

void Type(struct Type *type) {
	if(type->e == eInt)
		fprintf(ast, "int ");
	else if(type->e == eFloat)
		fprintf(ast, "float ");
	else if(type->e == eClass)
		fprintf(ast, "%s ", type->id);
	return;
}

void CompoundStmt(struct CompoundStmt *compoundStmt) {
	tab++;
	fprintf(ast, "{\n");
	if(compoundStmt->varDecl != NULL)
		VarDecl(compoundStmt->varDecl);
	if(compoundStmt->stmt != NULL)
		Stmt(compoundStmt->stmt);
	tab--;
	print_tab(tab);
	fprintf(ast, "}\n");

	return;
}

void Stmt(struct Stmt *stmt) {
	if(stmt->prev != NULL)
		Stmt(stmt->prev);
	
	if(stmt->e == eExpr && stmt->type.exprStmt != NULL)
		ExprStmt(stmt->type.exprStmt);
	else if(stmt->e == eAssign && stmt->type.assignStmt != NULL)
		AssignStmt(stmt->type.assignStmt);
	else if(stmt->e == eRet && stmt->type.retStmt != NULL)
		RetStmt(stmt->type.retStmt);
	else if(stmt->e == eWhile && stmt->type.whileStmt != NULL)
		WhileStmt(stmt->type.whileStmt);
	else if(stmt->e == eDo && stmt->type.doStmt != NULL)
		DoStmt(stmt->type.doStmt);	
	else if(stmt->e == eFor && stmt->type.forStmt != NULL)
		ForStmt(stmt->type.forStmt);
	else if(stmt->e == eIf && stmt->type.ifStmt != NULL)
		IfStmt(stmt->type.ifStmt);
	else if(stmt->e == eCompound && stmt->type.compoundStmt != NULL)
		CompoundStmt(stmt->type.compoundStmt);
	else if(stmt->e == eSemi)
		fprintf(ast, ";\n");
	
	return;
}

void ExprStmt(struct ExprStmt *exprStmt) {
	if(exprStmt->expr != NULL) {
		print_tab(tab);
		Expr(exprStmt->expr);
		fprintf(ast, ";\n");
	}
		
	return;
}

void AssignStmt(struct AssignStmt *assignStmt) {
	if(assignStmt->refVarExpr != NULL && assignStmt->expr != NULL) {
		print_tab(tab);
		RefVarExpr(assignStmt->refVarExpr);
		fprintf(ast, "= ");
		Expr(assignStmt->expr);
		fprintf(ast, ";\n");
	}
		
	return;
}

void RetStmt(struct RetStmt *retStmt) {
	print_tab(tab);
	fprintf(ast, "return ");
	if(retStmt->expr != NULL)
		Expr(retStmt->expr);
	fprintf(ast, ";\n");
		
	return;
}

void WhileStmt(struct WhileStmt *whileStmt) {
	print_tab(tab);
	fprintf(ast, "while ( ");
	if(whileStmt->cond != NULL)
		Expr(whileStmt->cond);
	fprintf(ast, ") ");
	if(whileStmt->body != NULL)
		Stmt(whileStmt->body);
		
	return;
}

void DoStmt(struct DoStmt *doStmt) {
	print_tab(tab);
	fprintf(ast, "do ");
	if(doStmt->body != NULL)
		Stmt(doStmt->body);
	fprintf(ast, "while ( ");
	if(doStmt->cond != NULL)
		Expr(doStmt->cond);
	fprintf(ast, ") ;\n");
		
	return;
}

void ForStmt(struct ForStmt *forStmt) {
	print_tab(tab);
	fprintf(ast, "for ( ");
	if(forStmt->init != NULL && forStmt->cond != NULL && forStmt->incr != NULL) {
		Expr(forStmt->init);
		fprintf(ast, "; ");
		Expr(forStmt->cond);
		fprintf(ast, "; ");
		Expr(forStmt->incr);
	}
	if(forStmt->body != NULL)
		Stmt(forStmt->body);
		
	return;
}

void IfStmt(struct IfStmt *ifStmt) {
	print_tab(tab);
	fprintf(ast, "if ( ");
	if(ifStmt->cond != NULL)
		Expr(ifStmt->cond);
	fprintf(ast, ") ");
	if(ifStmt->ifBody != NULL)
		Stmt(ifStmt->ifBody);
	if(ifStmt->elseBody != NULL) {
		print_tab(tab);
		fprintf(ast, "else ");
		Stmt(ifStmt->elseBody);
	}

	return;
}

void Expr(struct Expr *expr) {
	if(expr->e == eOper)
		OperExpr(expr->type.operExpr);
	else if(expr->e == eRef)
		RefExpr(expr->type.refExpr);
	else if(expr->e == eIntnum)
		fprintf(ast, "%d ", expr->type.intnum);
	else if(expr->e == eFloatnum)
		fprintf(ast, "%f ", expr->type.floatnum);

	return;
}

void OperExpr(struct OperExpr *operExpr) {
	if(operExpr->e == eUn)
		UnOp(operExpr->type.un);
	else if(operExpr->e == eAddi)
		AddiOp(operExpr->type.addi);
	else if(operExpr->e == eMult)
		MultOp(operExpr->type.mult);
	else if(operExpr->e == eRela)
		RelaOp(operExpr->type.rela);
	else if(operExpr->e == eEqlt)
		EqltOp(operExpr->type.eqlt);
	else if(operExpr->e == eBracket) {
		fprintf(ast, "( ");
		Expr(operExpr->type.bracket);
		fprintf(ast, ") ");
	}

	return;
}

void RefExpr(struct RefExpr *refExpr) {
	if(refExpr->e == eVar)
		RefVarExpr(refExpr->type.refVarExpr);
	else if(refExpr->e == eCall)
		RefCallExpr(refExpr->type.refCallExpr);

	return;
}

void RefVarExpr(struct RefVarExpr *refVarExpr) {
	if(refVarExpr->identExpr != NULL) {
		if(refVarExpr->refExpr != NULL) {
			RefExpr(refVarExpr->refExpr);
			fprintf(ast, ". ");
		}
		IdentExpr(refVarExpr->identExpr);
	}

	return;
}

void RefCallExpr(struct RefCallExpr *refCallExpr) {
	if(refCallExpr->callExpr != NULL) {
		if(refCallExpr->refExpr != NULL) {
			RefExpr(refCallExpr->refExpr);
			fprintf(ast, ". ");
		}
		CallExpr(refCallExpr->callExpr);
	}

	return;
}

void IdentExpr(struct IdentExpr *identExpr) {
	fprintf(ast, "%s ", identExpr->id);
	if(identExpr->expr != NULL) {
		fprintf(ast, "[ ");
		Expr(identExpr->expr);
		fprintf(ast, "] ");
	}

	return;
}

void CallExpr(struct CallExpr *callExpr) {
	fprintf(ast, "%s ( ", callExpr->id);
	if(callExpr->arg != NULL)
		Arg(callExpr->arg);
	fprintf(ast, ") ");

	return;
}

void Arg(struct Arg *arg) {
	if(arg->prev != NULL) {
		Arg(arg->prev);
		fprintf(ast, ", ");
	}
	if(arg->expr != NULL)
		Expr(arg->expr);

	return;
}

void UnOp(struct UnOp *unOp) {
	if(unOp->e == eNegative && unOp->expr != NULL) {
		fprintf(ast, "- ");
		Expr(unOp->expr);
	}

	return;
}

void AddiOp(struct AddiOp *addiOp) {
	if(addiOp->lhs != NULL && addiOp->rhs != NULL) {
		Expr(addiOp->lhs);
		if(addiOp->e == ePlus)
			fprintf(ast, "+ ");
		else if(addiOp->e == eMinus)
			fprintf(ast, "- ");
		Expr(addiOp->rhs);
	}

	return;
}

void MultOp(struct MultOp *multOp) {
	if(multOp->lhs != NULL && multOp->rhs != NULL) {
		Expr(multOp->lhs);
		if(multOp->e == eMul)
			fprintf(ast, "* ");
		else if(multOp->e == eDiv)
			fprintf(ast, "/ ");
		Expr(multOp->rhs);
	}

	return;
}

void RelaOp(struct RelaOp *relaOp) {
	if(relaOp->lhs != NULL && relaOp->rhs != NULL) {
		Expr(relaOp->lhs);
		if(relaOp->e == eLT)
			fprintf(ast, "< ");
		else if(relaOp->e == eGT)
			fprintf(ast, "> ");
		else if(relaOp->e == eLE)
			fprintf(ast, "<= ");
		else if(relaOp->e == eGE)
			fprintf(ast, ">= ");
		Expr(relaOp->rhs);
	}

	return;
}

void EqltOp(struct EqltOp *eqltOp) {
	if(eqltOp->lhs != NULL && eqltOp->rhs != NULL) {
		Expr(eqltOp->lhs);
		if(eqltOp->e == eEQ)
			fprintf(ast, "== ");
		else if(eqltOp->e == eNE)
			fprintf(ast, "!= ");
		Expr(eqltOp->rhs);
	}

	return;
}
