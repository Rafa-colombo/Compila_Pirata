%{
#include <stdio.h>              
#include "parser-bison.tab.h"            
%}

%option noyywrap

%%

 // esses tokens são referentes à linguagem

"abrirmapa" {return LPAR;}
"fecharmapa" {return RPAR;}
"->" {return ATRIB;}
"Remar" {return WHILE;}
"Navegar" {return FOR;}
"Vendaval" {return IF;}
"Ouro" {return INT;}
"Calmaria" {return ELSE;}
"GritarProMar" {return PRINTF;}
"Espia" {return SCANF; } 
"," {return COMENT;}
"PularDoNavio"   {return BREAK;}
"E" {return AND;}
"OU" {return OR;}


";" {return PEV;} 
"}" {return RCHAVES;} 
"{" {return LCHAVES;} 
"'" {return APOST;} 
"[" {return LCOL; }
"]" {return RCOL; }
 
"\""[^"]*"\""    {yylval.str_val = strdup(yytext);return STRING;}  

"++" {return MAISMAIS;} 
"--" {return MENOSMENOS; }

"+" {return MAIS;}
"-" {return MENOS;}
"*" {return MULT;}  
"//" {return DIVINT;}
"/" {return DIV;}  
"%" {return MOD;}

"!=" {return DIFERENTE;}
"==" {return IGUAL;}
"<" {return MENOR;} 
">" {return MAIOR;}
"<=" {return MENORIGUAL;}
">=" {return MAIORIGUAL;}

[0-9]+ { 
	yylval.int_val = atoi(yytext);
	return NUM;
}

[a-zA-Z][a-zA-Z0-9_]* {
	yylval.str_val = strdup(yytext); 
   	return ID;
}

\$.* { /*comentário */ }

" " {}
"\n" {}
"\r" {}
. {printf("ERRO LEXICO : CARACTER ' %s ' INVÁLIDO \n",yytext); return ERRO ;}
%%


