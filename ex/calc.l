%{
#include <stdlib.h>
#include "calc.tab.h"
%}

NUMBER [0-9]+

%%
{NUMBER}	{ yylval = atoi(yytext);	return NUMBER;}
"+"		{ return PLUS; }
"*"		{ return MULT; }
"\n"		{ return EOL; }
%%

