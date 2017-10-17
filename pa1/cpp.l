%{
#include <stdlib.h>
#include <string.h>

#include "cpp.tab.h"
%}

intnum		[0-9]+
floatnum	[0-9]+.[0-9]+
special		[\*\/\-\+]
space		[ \t\r\n]
id		[A-Za-z_][A-Za-z0-9_]*

%%

">"		{ return yytext[0]; }
"<"		{ return yytext[0]; }
">="		{ return *yytext; }
"<="		{ return *yytext; }
"=="		{ return *yytext; }
"!="		{ return *yytext; }
"="		{ return yytext[0]; }
"("		{ return yytext[0]; }
")"		{ return yytext[0]; }


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

{id} {
	yylval.id = atoi (yytext):
	return ID;
}

{special} {
	return yytext[0];
}
