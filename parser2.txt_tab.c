
/*  A Bison parser, made from parser2.txt with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	ASSIGNMENT_SIGN	258
#define	LEFT_PAR_SYM	259
#define	RIGHT_PAR_SYM	260
#define	Realnum	261
#define	Intnum	262
#define	identifier	263
#define	bool_OR_KW	264
#define	bool_AND_KW	265
#define	EQUAL_SIGN	266
#define	NOTEQUAL_SIGN	267
#define	eq_prec	268
#define	LOWER_SIGN	269
#define	GRATER_SIGN	270
#define	gl_prec	271
#define	LOWERandEQUAL_SIGN	272
#define	GRATERandEQUAL_SIGN	273
#define	gle_prec	274
#define	PLUS_SIGN	275
#define	MINUS_SIGN	276
#define	pm_prec	277
#define	MULT_SIGN	278
#define	SLASH_SIGN	279
#define	md_prec	280
#define	MOD_KW	281
#define	DRV_KW	282
#define	mds_prec	283
#define	bool_NOT_KW	284
#define	unit_prec	285

#line 1 "parser2.txt"

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "lex.yy.c"
#include "three.h"
# define MAX(a,b)( ((a)>(b)) ? a : b )
extern FILE* yyin;
extern char* yytext;

void yyerror(char *);
int defindedId(int i);
void outToC();
void printCode(int i);

int reserved;
int lastTemp = 0;


#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		44
#define	YYFLAG		-32768
#define	YYNTBASE	31

#define YYTRANSLATE(x) ((unsigned)(x) <= 285 ? yytranslate[x] : 40)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     4,     5,     9,    13,    17,    21,    25,    29,    32,
    36,    40,    44,    46,    48,    50,    52,    54,    56,    58,
    60,    62,    64,    66,    68,    70,    72,    74,    76
};

static const short yyrhs[] = {     8,
     3,    32,     0,     0,    32,    33,    32,     0,    32,    39,
    32,     0,    32,    34,    32,     0,    32,    35,    32,     0,
    32,    36,    32,     0,    32,    37,    32,     0,    38,    32,
     0,    32,    10,    32,     0,    32,     9,    32,     0,     4,
    32,     5,     0,     6,     0,     7,     0,     8,     0,    23,
     0,    24,     0,    20,     0,    21,     0,    14,     0,    15,
     0,    17,     0,    18,     0,    11,     0,    12,     0,    29,
     0,    21,     0,    27,     0,    26,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    32,    33,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    52,    53,    57,    58,    61,
    62,    65,    66,    70,    71,    74,    75,    77,    78
};

static const char * const yytname[] = {   "$","error","$undefined.","ASSIGNMENT_SIGN",
"LEFT_PAR_SYM","RIGHT_PAR_SYM","Realnum","Intnum","identifier","bool_OR_KW",
"bool_AND_KW","EQUAL_SIGN","NOTEQUAL_SIGN","eq_prec","LOWER_SIGN","GRATER_SIGN",
"gl_prec","LOWERandEQUAL_SIGN","GRATERandEQUAL_SIGN","gle_prec","PLUS_SIGN",
"MINUS_SIGN","pm_prec","MULT_SIGN","SLASH_SIGN","md_prec","MOD_KW","DRV_KW",
"mds_prec","bool_NOT_KW","unit_prec","stmt","exp","MDop","PMop","GLop","GLEop",
"EQop","UNIop","MDSop",""
};
#endif

static const short yyr1[] = {     0,
    31,    31,    32,    32,    32,    32,    32,    32,    32,    32,
    32,    32,    32,    32,    32,    33,    33,    34,    34,    35,
    35,    36,    36,    37,    37,    38,    38,    39,    39
};

static const short yyr2[] = {     0,
     3,     0,     3,     3,     3,     3,     3,     3,     2,     3,
     3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1
};

static const short yydefact[] = {     2,
     0,     0,     0,    13,    14,    15,    27,    26,     1,     0,
     0,     0,     0,    24,    25,    20,    21,    22,    23,    18,
    19,    16,    17,    29,    28,     0,     0,     0,     0,     0,
     0,     9,    12,    11,    10,     3,     5,     6,     7,     8,
     4,     0,     0,     0
};

static const short yydefgoto[] = {    42,
     9,    26,    27,    28,    29,    30,    10,    31
};

static const short yypact[] = {    -5,
     3,     8,     8,-32768,-32768,-32768,-32768,-32768,    48,     8,
    29,     8,     8,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,     8,     8,     8,     8,     8,
     8,-32768,-32768,    66,    83,    -9,   -22,   108,   116,    97,
-32768,    11,    13,-32768
};

static const short yypgoto[] = {-32768,
    -3,-32768,-32768,-32768,-32768,-32768,-32768,-32768
};


#define	YYLAST		143


static const short yytable[] = {    11,
    22,    23,     1,    24,    25,     2,    32,     0,    34,    35,
    43,     3,    44,     4,     5,     6,    24,    25,     0,     0,
     0,     0,    36,    37,    38,    39,    40,    41,     7,     0,
     0,     0,     0,    33,     0,     0,     8,    12,    13,    14,
    15,     0,    16,    17,     0,    18,    19,     0,    20,    21,
     0,    22,    23,     0,    24,    25,    12,    13,    14,    15,
     0,    16,    17,     0,    18,    19,     0,    20,    21,     0,
    22,    23,     0,    24,    25,    13,    14,    15,     0,    16,
    17,     0,    18,    19,     0,    20,    21,     0,    22,    23,
     0,    24,    25,    14,    15,     0,    16,    17,     0,    18,
    19,     0,    20,    21,     0,    22,    23,     0,    24,    25,
    16,    17,     0,    18,    19,     0,    20,    21,     0,    22,
    23,     0,    24,    25,    18,    19,     0,    20,    21,     0,
    22,    23,     0,    24,    25,    20,    21,     0,    22,    23,
     0,    24,    25
};

static const short yycheck[] = {     3,
    23,    24,     8,    26,    27,     3,    10,    -1,    12,    13,
     0,     4,     0,     6,     7,     8,    26,    27,    -1,    -1,
    -1,    -1,    26,    27,    28,    29,    30,    31,    21,    -1,
    -1,    -1,    -1,     5,    -1,    -1,    29,     9,    10,    11,
    12,    -1,    14,    15,    -1,    17,    18,    -1,    20,    21,
    -1,    23,    24,    -1,    26,    27,     9,    10,    11,    12,
    -1,    14,    15,    -1,    17,    18,    -1,    20,    21,    -1,
    23,    24,    -1,    26,    27,    10,    11,    12,    -1,    14,
    15,    -1,    17,    18,    -1,    20,    21,    -1,    23,    24,
    -1,    26,    27,    11,    12,    -1,    14,    15,    -1,    17,
    18,    -1,    20,    21,    -1,    23,    24,    -1,    26,    27,
    14,    15,    -1,    17,    18,    -1,    20,    21,    -1,    23,
    24,    -1,    26,    27,    17,    18,    -1,    20,    21,    -1,
    23,    24,    -1,    26,    27,    20,    21,    -1,    23,    24,
    -1,    26,    27
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

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
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 192 "bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#else
#define YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#endif

int
yyparse(YYPARSE_PARAM)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 32 "parser2.txt"
{setValueType(yyvsp[-2],getValueType(yyvsp[0])); generate(-1,yyvsp[-2],yyvsp[0],-1) ;;
    break;}
case 2:
#line 33 "parser2.txt"
{printf("syntax error: %s\n",yyval);;
    break;}
case 3:
#line 36 "parser2.txt"
{yyval = newTemp(MAX(getValueType(yyvsp[-2]),getValueType(yyvsp[0]))); generate(yyvsp[-1],yyval,yyvsp[-2],yyvsp[0]); ;
    break;}
case 4:
#line 37 "parser2.txt"
{yyval = newTemp(MAX(getValueType(yyvsp[-2]),getValueType(yyvsp[0]))); generate(yyvsp[-1],yyval,yyvsp[-2],yyvsp[0]); ;
    break;}
case 5:
#line 38 "parser2.txt"
{yyval = newTemp(MAX(getValueType(yyvsp[-2]),getValueType(yyvsp[0]))); generate(yyvsp[-1],yyval,yyvsp[-2],yyvsp[0]); ;
    break;}
case 6:
#line 39 "parser2.txt"
{yyval = newTemp(MAX(getValueType(yyvsp[-2]),getValueType(yyvsp[0]))); generate(yyvsp[-1],yyval,yyvsp[-2],yyvsp[0]); ;
    break;}
case 7:
#line 40 "parser2.txt"
{yyval = newTemp(MAX(getValueType(yyvsp[-2]),getValueType(yyvsp[0]))); generate(yyvsp[-1],yyval,yyvsp[-2],yyvsp[0]); ;
    break;}
case 8:
#line 41 "parser2.txt"
{yyval = newTemp(MAX(getValueType(yyvsp[-1]),getValueType(yyvsp[0]))); generate(yyvsp[-1],yyval,yyvsp[-2],yyvsp[0]); ;
    break;}
case 9:
#line 42 "parser2.txt"
{yyval = newTemp(getValueType(yyvsp[0])); generate(yyvsp[-1],yyval,yyvsp[0],-1); ;
    break;}
case 10:
#line 43 "parser2.txt"
{yyval = newTemp(MAX(getValueType(yyvsp[-2]),getValueType(yyvsp[0]))); generate(AND,yyval,yyvsp[-2],yyvsp[0]); ;
    break;}
case 11:
#line 44 "parser2.txt"
{yyval = newTemp(MAX(getValueType(yyvsp[-2]),getValueType(yyvsp[0]))); generate(OR,yyval,yyvsp[-2],yyvsp[0]); ;
    break;}
case 12:
#line 45 "parser2.txt"
{yyval = yyvsp[-1];;
    break;}
case 13:
#line 46 "parser2.txt"
{yyval = yyvsp[0];;
    break;}
case 14:
#line 47 "parser2.txt"
{yyval = yyvsp[0];;
    break;}
case 15:
#line 48 "parser2.txt"
{yyval = defindedId(yyvsp[0]);yyval = yyvsp[0];;
    break;}
case 16:
#line 52 "parser2.txt"
{ yyval = MUL; ;
    break;}
case 17:
#line 53 "parser2.txt"
{ yyval = DIV; ;
    break;}
case 18:
#line 57 "parser2.txt"
{ yyval = ADD; ;
    break;}
case 19:
#line 58 "parser2.txt"
{ yyval = SUB; ;
    break;}
case 20:
#line 61 "parser2.txt"
{ yyval = LES; ;
    break;}
case 21:
#line 62 "parser2.txt"
{ yyval = GR; ;
    break;}
case 22:
#line 65 "parser2.txt"
{ yyval = LSE; ;
    break;}
case 23:
#line 66 "parser2.txt"
{ yyval = GRE; ;
    break;}
case 24:
#line 70 "parser2.txt"
{ yyval = EQ; ;
    break;}
case 25:
#line 71 "parser2.txt"
{ yyval = NEQ; ;
    break;}
case 26:
#line 74 "parser2.txt"
{ yyval = NOT; ;
    break;}
case 27:
#line 75 "parser2.txt"
{ yyval = SUB; ;
    break;}
case 28:
#line 77 "parser2.txt"
{ yyval = DIV; ;
    break;}
case 29:
#line 78 "parser2.txt"
{ yyval = DIV; ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 487 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 82 "parser2.txt"


main()
{
	yyin = fopen("fn.txt", "r");
	yyparse();
	printSymTable();
	
	outToC();
	getch();
	return 0;
}

void yyerror(char *sl)
{
	printf("%s\n" , sl);
	return;
}

int defindedId(int i)
{
int j;
j = getValueType(i);
if(j==0)yyerror("Undifined Symbol");
return j;
}

void outToC()
{
int i;
yyout = fopen("out.txt","w");
//printIDs();
for(i = 0; i<lastIndex;i++)
	printCode(i);
fclose(yyout); 
}

void printCode(int i)
{

switch(codeTable[i].operand)
{
case(-1) : fprintf(yyout,"%s=%s;\n",getSymbol(codeTable[i].result), getSymbol(codeTable[i].op1)); break;
case(ADD) : fprintf(yyout,"%s=%s+%s;\n",getSymbol(codeTable[i].result), getSymbol(codeTable[i].op1),getSymbol(codeTable[i].op2)); break;
case(AND) :fprintf(yyout,"%s=%s&&%s;\n",getSymbol(codeTable[i].result), getSymbol(codeTable[i].op1),getSymbol(codeTable[i].op2)); break;
case(SUB) : if(getSymbol(codeTable[i].op2)) fprintf(yyout,"%s=%s-%s;\n",getSymbol(codeTable[i].result), getSymbol(codeTable[i].op1),getSymbol(codeTable[i].op2)); 
		else fprintf(yyout,"%s=-%s;\n",getSymbol(codeTable[i].result), getSymbol(codeTable[i].op1)); break;
case(MUL): fprintf(yyout,"%s=%s*%s;\n",getSymbol(codeTable[i].result), getSymbol(codeTable[i].op1),getSymbol(codeTable[i].op2)); break;
case(DIV): fprintf(yyout,"%s=%s/%s;\n",getSymbol(codeTable[i].result), getSymbol(codeTable[i].op1),getSymbol(codeTable[i].op2)); break;
case(OR) : fprintf(yyout,"%s=%s||%s;\n",getSymbol(codeTable[i].result), getSymbol(codeTable[i].op1),getSymbol(codeTable[i].op2)); break;
case(EQ) : fprintf(yyout,"%s=%s=%s;\n",getSymbol(codeTable[i].result), getSymbol(codeTable[i].op1),getSymbol(codeTable[i].op2)); break;
case(GR) :fprintf(yyout,"%s=%s>%s;\n",getSymbol(codeTable[i].result), getSymbol(codeTable[i].op1),getSymbol(codeTable[i].op2)); break;
case(LES) : fprintf(yyout,"%s=%s<%s;\n",getSymbol(codeTable[i].result), getSymbol(codeTable[i].op1),getSymbol(codeTable[i].op2)); break;
case(LSE) : fprintf(yyout,"%s=%s<=%s;\n",getSymbol(codeTable[i].result), getSymbol(codeTable[i].op1),getSymbol(codeTable[i].op2)); break;
case(GRE) : fprintf(yyout,"%s=%s>=%s;\n",getSymbol(codeTable[i].result), getSymbol(codeTable[i].op1),getSymbol(codeTable[i].op2)); break;
case(NEQ) : fprintf(yyout,"%s=%s!=%s;\n",getSymbol(codeTable[i].result), getSymbol(codeTable[i].op1),getSymbol(codeTable[i].op2)); break;
case(NOT) : fprintf(yyout,"%s=!%s;\n",getSymbol(codeTable[i].result), getSymbol(codeTable[i].op1)); break;


}
}
