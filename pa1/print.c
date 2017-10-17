#include <stdio.h>
#include "expr.h"
#include "print.h"

FILE *fp;

int main () {
	fp = fopen ("sample.out", "w");

	if (!yyparse ())
		dfs ();
	
	fprintf (fp, "\n");
	fclose (fp);

	return 0;
}

void dfs () {
	if (head == NULL) {
		fprintf (stderr, "expression does not exist.\n");
		return;
	}
	
	Addi (head->addi);
}

void Addi (struct ADDITIVE *addi) {
	if (addi == NULL) {
		fprintf (stderr, "additive operand does not exist.\n");
		return;
	}

	if (!addi->multi) {
		Addi (addi->lhs);
		if (addi->type == ePlus)
			fprintf (fp, " + ");
		else
			fprintf (fp, " - ");
		Addi (addi->rhs);
	}
	else
		Multi (addi->multi);
}

void Multi (struct MULTIPLICATIVE *multi) {
	if (multi == NULL) {
		fprintf (stderr, "multiplicative operand does not exist.\n");
		return;
	}
	if (multi->numType == eInt)
		fprintf (fp, "%d", multi->num.intnum);
	else if (multi->numType == eFloat)
		fprintf (fp, "%.3f", multi->num.floatnum);
	else {
		Multi (multi->lhs);
		if (multi->type == eMult)
			fprintf (fp, " * ");
		else
			fprintf (fp, " / ");
		Multi (multi->rhs);
	}
}
