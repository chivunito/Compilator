%{
#include <stdio.h>
#include "y.tab.h"


%}

%%
main	return Tmain;
int		return Tint;
if		return Tif;
while	return Twhile;
for		return Tfor;
const		return Tconst;
printf		return Tprint;
"{"		return TAo;
"}"	return TAf; 
"("	return TPo;
")"	return TPf;
"["	return TCo;
"]"	return TCf;
";"		return Tpv;
"="		return Tegal;
","		return Tvir;
"+"		return Tplus;
"-"		return Tless;
"/"		return Tdiv;
"*"		return Tfois;
return		return Treturn;
"=="		return Tcmp;
"<"	return Tinf;
">"		return Tsup;
"&&"		return Tand;
"||"		return Tor;
#include		return Tinclude;
[0-9]+		{yylval.nb= atoi(yytext);return Tnumber;}
[a-zA-Z][a-zA-Z0-9_]*    {strcpy(yylval.str, yytext);return Tid;}
[ \t]+                  ;
[ \n]+                  ;
%%
