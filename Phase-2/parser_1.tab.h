
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ADD = 258,
     SUBTRACT = 259,
     MULTIPLY = 260,
     DIVIDE = 261,
     ASSIGN = 262,
     ADD_ASSIGN = 263,
     SUB_ASSIGN = 264,
     MUL_ASSIGN = 265,
     DIV_ASSIGN = 266,
     MOD_ASSIGN = 267,
     MOD = 268,
     GREATER_THAN = 269,
     LESSER_THAN = 270,
     LESS_EQ = 271,
     GREATER_EQ = 272,
     NOT_EQ = 273,
     EQUAL = 274,
     VOID = 275,
     IF = 276,
     ELSE = 277,
     FOR = 278,
     DO = 279,
     WHILE = 280,
     GOTO = 281,
     BREAK = 282,
     CONTINUE = 283,
     RETURN = 284,
     SWITCH = 285,
     CASE = 286,
     DEFAULT = 287,
     MAIN = 288,
     INT = 289,
     SHORT = 290,
     LONG = 291,
     CHAR = 292,
     SIGNED = 293,
     UNSIGNED = 294,
     LG_OR = 295,
     LG_AND = 296,
     NOT = 297,
     DECREMENT = 298,
     INCREMENT = 299,
     HEX_CONSTANT = 300,
     DEC_CONSTANT = 301,
     INT_CONSTANT = 302,
     STRING = 303,
     IDENTIFIER = 304,
     IFX = 305
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 19 "parser_1.y"

    int ival;
    char *str;
    entry *tbEntry;
    double dval;



/* Line 1676 of yacc.c  */
#line 111 "parser_1.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


