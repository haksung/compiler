%{
#include <stdlib.h>
#include <string.h>

#include "expr.tab.h"
%}

intnum [0-9]+
floatnum [0-9]+.[0-9]+
special [\*\/\-\+]
space [ \t\r\n]

%%

{space} {
	break;
}

{intnum} {
	yylval.intnum = atoi (yytext);
	return INTNUM;
}

{floatnum} {
	yylval.floatnum = atoi (yytext);
	return FLOATNUM;
}

{special} {
	return yytext[0];
}
