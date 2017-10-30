#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

// about Symbol table
// global variable
int type;
int arr;
int role;
int stmt;
int io;
int location[50];

void add_info(int type, char *name, int arr, int role, int stmt, int io) {
        struct table *temp;
        struct table *new = (struct table *)malloc(sizeof(struct table));

	new->type = type;
	new->name = strdup(name);
	new->arr = arr;
	new->role = role;
	new->stmt = stmt;
	new->io = io;	

        if(t == NULL) {
                t = new;
                return;
        }

        temp = t;
        while(1) {
                if(temp->next == NULL) {
                        temp->next = new;
                        break;
                }
                temp = temp->next;
        }
	return;
}

void print_table() {
	int i, j, aaa=0;
	int order=0, count=0, print=0, stair=-1;
	int while_num[50];
	int do_num[50];
	int for_num[50];
	int if_num[50];
	int compound_num[50];
	int while_count=0, do_count=0, for_count=0;
	int if_count=0, compound_count=0;
	char *temp;

	for(i=0;i<50;i++)
		while_num[i]=0;
	for(i=0;i<50;i++)
		do_num[i]=0;
	for(i=0;i<50;i++)
		for_num[i]=0;
	for(i=0;i<50;i++)
		if_num[i]=0;
	for(i=0;i<50;i++)
		compound_num[i]=0;

	while(1) {
		if(t == NULL)
			break;

		if(t->io == 1) {
			count = 0;
			print = 0;
    			if(t->stmt == 1 || t->stmt == 2) {
				temp = strdup(t->name);
			}

			if(t->stmt == 3) {
				stair++;
				location[order] = 3;
				while_num[stair]++;
				order++;
			}

			if(t->stmt == 4) {
				stair++;
				location[order] = 4;
				for_num[stair]++;
				order++;
			}

			if(t->stmt == 5) {
				stair++;
				location[order] = 5;
				if_num[stair]++;
				order++;
			}

			if(t->stmt == 6) {
				stair++;
				location[order] = 6;
				compound_num[stair]++;
				order++;
			}

			if(t->stmt == 7) {
				stair++;
				location[order] = 7;
				do_num[stair]++;
				order++;
			}
		}

		if(t->role == 1 || t->role == 2) {
			if(print == 0) {
				print = 1;

				if(aaa != 0)
					fprintf(table, "\n");
				aaa = 1;

				fprintf(table, "Location : %s ",temp);

				for(i=0; location[i] != 0 ;i++) {
					if(location[i] == 3)
						fprintf(table, "- While(%d) ", while_num[i]);
					if(location[i] == 4)
						fprintf(table, "- For(%d) ", for_num[i]);
					if(location[i] == 5)
						fprintf(table, "- If(%d) ", if_num[i]);
					if(location[i] == 6)
						fprintf(table, "- Compound(%d)", compound_num[i]);
					if(location[i] == 7)
						fprintf(table, "- Do(%d)", do_num[i]);
				}
				fprintf(table, "\n");
				
				fprintf(table, "%10s", "Count");
				fprintf(table, "%10s", "Type");
				fprintf(table, "%10s", "Name");
				fprintf(table, "%10s", "Array");
				fprintf(table, "%10s", "Role");
				fprintf(table, "\n");
			}
			
			count++;
			fprintf(table, "%10d", count);

			if(t->type == 1)
				fprintf(table, "%10s", "int");
			if(t->type == 2)
				fprintf(table, "%10s", "float");
			if(t->type == 3)
				fprintf(table, "%10s", "float");

			fprintf(table, "%10s", t->name);

			if(t->arr == 0)
				fprintf(table, "         -");
			else if(t->arr > 0)
				fprintf(table, "%10d", t->arr);

			if(t->role == 1)
				fprintf(table, "%10s", "parameter");
			else if(t->role == 2)
				fprintf(table, "%10s", "variable");

			fprintf(table, "\n");
		}

		if(t->io == 2) {
			count = 0;

			if(t->stmt == 1 || t->stmt == 2) {
				for(i=0; i<50; i++)
					location[i] = 0;

				stair = -1;
				order = 0;
				while_count = 0;
				for_count = 0;
				if_count = 0;
				compound_count = 0;
				do_count = 0;

				for(i=0; i<50; i++)
					while_num[i] = 0;
				for(i=0; i<50; i++)
					for_num[i] = 0;
				for(i=0; i<50; i++)
					if_num[i] = 0;
				for(i=0; i<50; i++)
					compound_num[i] = 0;
				for(i=0; i<50; i++)
					do_num[i] = 0;
			}
			else {
				stair--;
				order--;
				location[order] = 0;
			}
		}

		t = t->next;
	}
}

int main () {
	ast = fopen("ast.txt", "w");
	table = fopen("s_table.txt", "w");

	if (!yyparse()) { 
		dfs();
		print_table();
	}
	
	fprintf(ast, "\n");
	fprintf(table, "\n");
	fclose(ast);
	fclose(table);

	return 0;
}

// about AST
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
	
	type = -1;
	arr = -1;
	role = -1;
	stmt = 1;
	io = 1;	
	add_info(type, class->id, arr, role, stmt, io);

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

	type = -1;
	arr = -1;
	role = -1;
	stmt = 1;
	io = 2;	
	add_info(type, class->id, arr, role, stmt, io);

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
		role = 2;
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

// Do not make symbol table, in MethodDecl
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
		type = -1;
		arr = -1;
		role = -1;
		stmt = 2;
		io = 1;	
		add_info(type, methodDef->id, arr, role, stmt, io);

		print_tab(tab);
		Type(methodDef->type);
		fprintf(ast, "%s ( ", methodDef->id);
		if(methodDef->param != NULL)
			Param(methodDef->param);
		fprintf(ast, ") ");
		if(methodDef->compoundStmt != NULL)
			CompoundStmt(methodDef->compoundStmt);
		fprintf(ast, "\n");
	
		type = -1;
		arr = -1;
		role = -1;
		stmt = 2;
		io = 2;	
		add_info(type, methodDef->id, arr, role, stmt, io);
	}
	
	return;
}

void ClassMethodDef(struct ClassMethodDef *classMethodDef) {
	if(classMethodDef->prev != NULL)
		ClassMethodDef(classMethodDef->prev);

	if(classMethodDef->type != NULL) {

		type = -1;
		arr = -1;
		role = -1;
		stmt = 1;
		io = 1;	
		add_info(type, classMethodDef->className, arr, role, stmt, io);
		
		stmt = 2;
		add_info(type, classMethodDef->methodName, arr, role, stmt, io);

		Type(classMethodDef->type);
		fprintf(ast, "%s :: %s ( ", classMethodDef->className, classMethodDef->methodName);
		if(classMethodDef->param != NULL)
			Param(classMethodDef->param);
		fprintf(ast, ") ");
		if(classMethodDef->compoundStmt != NULL)
			CompoundStmt(classMethodDef->compoundStmt);
		fprintf(ast, "\n");

		type = -1;
		arr = -1;
		role = -1;
		stmt = 2;
		io = 2;
		add_info(type, classMethodDef->methodName, arr, role, stmt, io);

		stmt = 1;
		add_info(type, classMethodDef->className, arr, role, stmt, io);
	}
	
	return;
}

void MainFunc(struct MainFunc *mainFunc) {
	fprintf(ast, "int main ( ) ");
	if(mainFunc->compoundStmt != NULL) {
		type = -1;
		arr = -1;
		role = -1;
		stmt = 2;
		io = 1;	
		add_info(type, "main", arr, role, stmt, io);

		CompoundStmt(mainFunc->compoundStmt);

		type = -1;
		arr = -1;
		role = -1;
		stmt = 2;
		io = 2;	
		add_info(type, "main", arr, role, stmt, io);
	}
	return;
}

void Param(struct Param *param) {
	if(param->prev != NULL) {
		Param(param->prev);
		fprintf(ast, ", ");
	}
	if(param->type != NULL && param->ident != NULL) {
		role = 1;
		Type(param->type);
		Ident(param->ident);
	}

	return;
}

void Ident(struct Ident *ident) {
	fprintf(ast, "%s ", ident->id);
	arr = 0;
	if(ident->len > 0) {
		arr = ident->len;
		fprintf(ast, "[ %d ] ", ident->len);
	}

	stmt = -1;
	io = -1;
	add_info(type, ident->id, arr, role, stmt, io);

	return;
}

void Type(struct Type *ptype) {
	if(ptype->e == eInt) {
		type = 1;
		fprintf(ast, "int ");
	}
	else if(ptype->e == eFloat) {
		type = 2;
		fprintf(ast, "float ");
	}
	else if(ptype->e == eClass) {
		type = 3;
		fprintf(ast, "%s ", ptype->id);
	}
	return;
}

void CompoundStmt(struct CompoundStmt *compoundStmt) {
	role = 2;
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

void Stmt(struct Stmt *pstmt) {
	if(pstmt->prev != NULL)
		Stmt(pstmt->prev);
	
	if(pstmt->e == eExpr && pstmt->type.exprStmt != NULL)
		ExprStmt(pstmt->type.exprStmt);
	else if(pstmt->e == eAssign && pstmt->type.assignStmt != NULL)
		AssignStmt(pstmt->type.assignStmt);
	else if(pstmt->e == eRet && pstmt->type.retStmt != NULL)
		RetStmt(pstmt->type.retStmt);
	else if(pstmt->e == eWhile && pstmt->type.whileStmt != NULL)
		WhileStmt(pstmt->type.whileStmt);
	else if(pstmt->e == eDo && pstmt->type.doStmt != NULL)
		DoStmt(pstmt->type.doStmt);	
	else if(pstmt->e == eFor && pstmt->type.forStmt != NULL)
		ForStmt(pstmt->type.forStmt);
	else if(pstmt->e == eIf && pstmt->type.ifStmt != NULL)
		IfStmt(pstmt->type.ifStmt);
	else if(pstmt->e == eCompound && pstmt->type.compoundStmt != NULL) {
		type = -1;
		arr = -1;
		role = -1;
		stmt = 6;
		io = 1;	
		add_info(type, "Compound", arr, role, stmt, io);

		CompoundStmt(pstmt->type.compoundStmt);

		type = -1;
		arr = -1;
		role = -1;
		stmt = 6;
		io = 2;	
		add_info(type, "Compound", arr, role, stmt, io);
	}
	else if(pstmt->e == eSemi)
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
	type = -1;
	arr = -1;
	role = -1;
	stmt = 3;
	io = 1;	
	add_info(type, "while", arr, role, stmt, io);

	print_tab(tab);
	fprintf(ast, "while ( ");
	if(whileStmt->cond != NULL)
		Expr(whileStmt->cond);
	fprintf(ast, ") ");
	if(whileStmt->body != NULL)
		Stmt(whileStmt->body);
	
	type = -1;
	arr = -1;
	role = -1;
	stmt = 3;
	io = 2;	
	add_info(type, "while", arr, role, stmt, io);	
	return;
}

void DoStmt(struct DoStmt *doStmt) {
	type = -1;
	arr = -1;
	role = -1;
	stmt = 7;
	io = 1;	
	add_info(type, "do", arr, role, stmt, io);

	print_tab(tab);
	fprintf(ast, "do ");
	if(doStmt->body != NULL)
		Stmt(doStmt->body);
	print_tab(tab);
	fprintf(ast, "while ( ");
	if(doStmt->cond != NULL)
		Expr(doStmt->cond);
	fprintf(ast, ") ;\n");
		
	type = -1;
	arr = -1;
	role = -1;
	stmt = 7;
	io = 2;	
	add_info(type, "do", arr, role, stmt, io);
	return;
}

void ForStmt(struct ForStmt *forStmt) {
	type = -1;
	arr = -1;
	role = -1;
	stmt = 4;
	io = 1;	
	add_info(type, "for", arr, role, stmt, io);

	print_tab(tab);
	fprintf(ast, "for ( ");
	if(forStmt->init != NULL && forStmt->cond != NULL && forStmt->incr != NULL) {
		Expr(forStmt->init);
		fprintf(ast, "; ");
		Expr(forStmt->cond);
		fprintf(ast, "; ");
		Expr(forStmt->incr);
		fprintf(ast, ") ");
	}
	if(forStmt->body != NULL)
		Stmt(forStmt->body);
	
	type = -1;
	arr = -1;
	role = -1;
	stmt = 4;
	io = 2;	
	add_info(type, "for", arr, role, stmt, io);	
	return;
}

void IfStmt(struct IfStmt *ifStmt) {
	type = -1;
	arr = -1;
	role = -1;
	stmt = 5;
	io = 1;	
	add_info(type, "if", arr, role, stmt, io);

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

	type = -1;
	arr = -1;
	role = -1;
	stmt = 5;
	io = 2;	
	add_info(type, "for", arr, role, stmt, io);
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
