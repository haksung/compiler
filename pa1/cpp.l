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
"class"		{ return *yytext; }
"private"	{ return *yytext; }
"public"	{ return *yytext; }
"{"		{ return yytext[0]; }
":"		{ return yytext[0]; }
"}"		{ return yytext[0]; }
";"		{ return yytext[0]; }
"::"		{ return *yytext; }
"int"		{ return *yytext; }
"main"		{ return *yytext; }
","		{ return yytext[0]; }
"["		{ return yytext[0]; }
"]"		{ return yytext[0]; }
"return"	{ return *yytext; }
"do"		{ return *yytext; }
"while"		{ return *yytext; }
"for"		{ return *yytext; }
"if"		{ return *yytext; }
"else"		{ return *yytext; }
"."		{ return yytext[0]; }

{space} {
	break;
}

{intnum} {
	yylval.intnum = atoi(yytext);
	return INTNUM;
}

{floatnum} {
	yylval.floatnum = atof(yytext);
	return FLOATNUM;
}

{id} {
	yylval.id = strdup(yytext):
	return ID;
}

{special} {
	return yytext[0];
}

.		{ yyerror("Unexpected char"); }
