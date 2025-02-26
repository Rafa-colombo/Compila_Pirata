/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_BISON_TAB_H_INCLUDED
# define YY_YY_PARSER_BISON_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    ATRIB = 259,                   /* ATRIB  */
    PEV = 260,                     /* PEV  */
    VETOR = 261,                   /* VETOR  */
    FOR = 262,                     /* FOR  */
    WHILE = 263,                   /* WHILE  */
    IF = 264,                      /* IF  */
    ELSE = 265,                    /* ELSE  */
    INT = 266,                     /* INT  */
    PRINTF = 267,                  /* PRINTF  */
    STRING = 268,                  /* STRING  */
    SCANF = 269,                   /* SCANF  */
    COMENT = 270,                  /* COMENT  */
    ERRO = 271,                    /* ERRO  */
    COMENTARIO = 272,              /* COMENTARIO  */
    NUM = 273,                     /* NUM  */
    MAISMAIS = 274,                /* MAISMAIS  */
    MENOR = 275,                   /* MENOR  */
    IGUAL = 276,                   /* IGUAL  */
    MAIOR = 277,                   /* MAIOR  */
    DIFERENTE = 278,               /* DIFERENTE  */
    MAIORIGUAL = 279,              /* MAIORIGUAL  */
    MENORIGUAL = 280,              /* MENORIGUAL  */
    MENOSMENOS = 281,              /* MENOSMENOS  */
    LPAR = 282,                    /* LPAR  */
    RPAR = 283,                    /* RPAR  */
    LCHAVES = 284,                 /* LCHAVES  */
    RCHAVES = 285,                 /* RCHAVES  */
    LCOL = 286,                    /* LCOL  */
    RCOL = 287,                    /* RCOL  */
    MAIS = 288,                    /* MAIS  */
    MENOS = 289,                   /* MENOS  */
    MULT = 290,                    /* MULT  */
    DIVINT = 291,                  /* DIVINT  */
    MOD = 292,                     /* MOD  */
    DIV = 293,                     /* DIV  */
    APOST = 294,                   /* APOST  */
    AND = 295,                     /* AND  */
    OR = 296,                      /* OR  */
    BREAK = 297                    /* BREAK  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 115 "parser-bison.y"

    char *str_val;
    int int_val;    

#line 111 "parser-bison.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_BISON_TAB_H_INCLUDED  */
