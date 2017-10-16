%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "expr.h"
#include "print.h"
%}

%union {
	struct EXPR *ptr_expr;
	struct ADDITIVE *ptr_addi;
	struct MULTIPLICATIVE *ptr_multi;
	int intnum;
	float floatnum;
}

%token <intnum>INTNUM <floatnum>FLOATNUM
%left '*' '/'
%left '+' '-'

%type <ptr_expr> Expr;
%type <ptr_addi> Addi;
%type <ptr_multi> Multi;

%%
Expr : Addi {
	struct EXPR *expr = (struct EXPR *) malloc (sizeof (struct EXPR));
	expr->addi = $1;
	head = expr;
	$$ = expr;
}
     ;

Addi : Addi '+' Addi {
	struct ADDITIVE *addi = (struct ADDITIVE *) malloc (sizeof (struct ADDITIVE));
	addi->lhs = $1;
	addi->type = ePlus;
	addi->rhs = $3;
	$$ = addi;
}
     | Addi '-' Addi {
	struct ADDITIVE *addi = (struct ADDITIVE *) malloc (sizeof (struct ADDITIVE));
	addi->lhs = $1;
	addi->type = eMinus;
	addi->rhs = $3;
	$$ = addi;
}
     | Multi {
	struct ADDITIVE *addi = (struct ADDITIVE *) malloc (sizeof (struct ADDITIVE));
	addi->multi = $1;
	$$ = addi;
}
     ;

Multi : Multi '*' Multi {
	struct MULTIPLICATIVE *multi = (struct MULTIPLICATIVE *) malloc (sizeof (struct MULTIPLICATIVE));
	multi->lhs = $1;
	multi->type = eMult;
	multi->rhs = $3;
	multi->numType = eNone;
	$$ = multi;
}
      | Multi '/' Multi {
	struct MULTIPLICATIVE *multi = (struct MULTIPLICATIVE *) malloc (sizeof (struct MULTIPLICATIVE));
	multi->lhs = $1;
	multi->type = eDiv;
	multi->rhs = $3;
	multi->numType = eNone;
	$$ = multi;
}
      | INTNUM {
	struct MULTIPLICATIVE *multi = (struct MULTIPLICATIVE *) malloc (sizeof (struct MULTIPLICATIVE));
	multi->num.intnum = $1;
	multi->numType = eInt;
	$$ = multi;
}
      | FLOATNUM {
	struct MULTIPLICATIVE *multi = (struct MULTIPLICATIVE *) malloc (sizeof (struct MULTIPLICATIVE));
	multi->num.floatnum = $1;
	multi->numType = eFloat;
	$$ = multi;
}
      ;
%%

int yyerror (char *s) {
	return fprintf (stderr, "%s\n", s);
}
