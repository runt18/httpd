/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
     T_TRUE = 258,
     T_FALSE = 259,
     T_EXPR_BOOL = 260,
     T_EXPR_STRING = 261,
     T_ERROR = 262,
     T_DIGIT = 263,
     T_ID = 264,
     T_STRING = 265,
     T_REGEX = 266,
     T_REGEX_I = 267,
     T_REGEX_BACKREF = 268,
     T_OP_UNARY = 269,
     T_OP_BINARY = 270,
     T_STR_BEGIN = 271,
     T_STR_END = 272,
     T_VAR_BEGIN = 273,
     T_VAR_END = 274,
     T_OP_EQ = 275,
     T_OP_NE = 276,
     T_OP_LT = 277,
     T_OP_LE = 278,
     T_OP_GT = 279,
     T_OP_GE = 280,
     T_OP_REG = 281,
     T_OP_NRE = 282,
     T_OP_IN = 283,
     T_OP_STR_EQ = 284,
     T_OP_STR_NE = 285,
     T_OP_STR_LT = 286,
     T_OP_STR_LE = 287,
     T_OP_STR_GT = 288,
     T_OP_STR_GE = 289,
     T_OP_CONCAT = 290,
     T_OP_OR = 291,
     T_OP_AND = 292,
     T_OP_NOT = 293
   };
#endif
/* Tokens.  */
#define T_TRUE 258
#define T_FALSE 259
#define T_EXPR_BOOL 260
#define T_EXPR_STRING 261
#define T_ERROR 262
#define T_DIGIT 263
#define T_ID 264
#define T_STRING 265
#define T_REGEX 266
#define T_REGEX_I 267
#define T_REGEX_BACKREF 268
#define T_OP_UNARY 269
#define T_OP_BINARY 270
#define T_STR_BEGIN 271
#define T_STR_END 272
#define T_VAR_BEGIN 273
#define T_VAR_END 274
#define T_OP_EQ 275
#define T_OP_NE 276
#define T_OP_LT 277
#define T_OP_LE 278
#define T_OP_GT 279
#define T_OP_GE 280
#define T_OP_REG 281
#define T_OP_NRE 282
#define T_OP_IN 283
#define T_OP_STR_EQ 284
#define T_OP_STR_NE 285
#define T_OP_STR_LT 286
#define T_OP_STR_LE 287
#define T_OP_STR_GT 288
#define T_OP_STR_GE 289
#define T_OP_CONCAT 290
#define T_OP_OR 291
#define T_OP_AND 292
#define T_OP_NOT 293




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 35 "util_expr_parse.y"
{
    char      *cpVal;
    ap_expr_t *exVal;
    int        num;
}
/* Line 1529 of yacc.c.  */
#line 131 "util_expr_parse.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



