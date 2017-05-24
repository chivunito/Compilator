/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 1 "source.yacc"
 
#include <stdio.h>
#include <string.h>
#include "tabsymbol.h"
#include "tabinstructions.h"
#include "tab_function.h"

int bp=0;

void yyerror(const char *str)
{
        fprintf(stderr,"error: %s\n",str);
}

int yywrap()
{
        return 1;
} 
  
int main()
{
        yyparse();
        printf("Fin de parse\n");
        print_table_function();
        print_table_symbol();
        print_table_instruction();
} 

#line 31 "source.yacc"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{int nb; char str[16];} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 59 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define Tmain 257
#define Tint 258
#define Tif 259
#define Tfor 260
#define Twhile 261
#define Tconst 262
#define TAo 263
#define Tcmp 264
#define Tinf 265
#define Tsup 266
#define TAf 267
#define TPo 268
#define TPf 269
#define TCo 270
#define TCf 271
#define Tpv 272
#define Tegal 273
#define Tvir 274
#define Tplus 275
#define Tless 276
#define Tdiv 277
#define Tfois 278
#define Treturn 279
#define Tand 280
#define Tor 281
#define Tinclude 282
#define Tnumber 283
#define Tid 284
#define Tprint 285
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    3,    0,    4,    2,    7,    8,    2,    5,    5,
   10,   11,   11,    6,   15,    9,   17,   16,   18,   14,
   13,   13,   21,   20,   23,   24,   22,   25,   27,   25,
   28,   29,   30,   29,   12,   12,   12,   31,   31,   19,
   19,   19,   19,   19,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,   26,   26,   33,
   33,   32,
};
static const YYINT yylen[] = {                            2,
    0,    0,    3,    0,    7,    0,    0,    8,    0,    2,
    2,    0,    3,    5,    0,    6,    0,    5,    0,    4,
    0,    2,    0,    6,    0,    0,    7,    4,    0,    5,
    3,    1,    0,    4,    0,    3,    3,    1,    3,    1,
    1,    1,    2,    2,    1,    1,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    1,    0,    2,    0,
    3,    9,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    0,    4,    6,    3,    0,    0,    0,
    0,    0,    0,    0,    7,   11,    0,    0,   10,    0,
    0,    5,    0,    0,    0,    0,    0,   13,   15,    8,
    0,    0,    0,    0,    0,    0,   25,    0,    0,    0,
    0,   40,   41,    0,    0,   42,    0,    0,    0,   37,
   36,    0,    0,    0,   29,    0,    0,    0,    0,   22,
   43,   44,    0,    0,   39,    0,   45,    0,    0,   57,
    0,    0,    0,    0,    0,    0,   14,    0,    0,    0,
    0,    0,    0,   23,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   28,    0,    0,   56,    0,    0,
    0,    0,    0,    0,   50,   49,    0,    0,    0,   26,
    0,   59,   30,   20,   16,   17,   24,    0,    0,    0,
    0,    0,   27,   61,    0,    0,    0,   62,   18,
};
static const YYINT yydgoto[] = {                          1,
   69,    4,    2,    8,   13,   22,    9,   20,   30,   14,
   19,   27,   40,   59,   47,  117,  121,   96,   41,   42,
  102,   43,   54,  119,   70,   94,   73,   45,   32,   48,
   33,   46,  112,
};
static const YYINT yysindex[] = {                         0,
    0, -215, -251,    0,    0,    0,    0, -188, -187, -199,
 -199, -221, -194, -185,    0,    0, -173, -199,    0, -174,
 -240,    0, -185, -167, -183, -183, -233,    0,    0,    0,
    0, -175, -165, -158, -155, -148,    0, -260, -143, -147,
 -233,    0,    0, -141, -138,    0, -240, -137, -183,    0,
    0, -264, -183, -133,    0, -264, -264, -264, -130,    0,
    0,    0, -233, -264,    0, -264,    0, -125, -193,    0,
 -134, -264, -264,  -48, -154,  -48,    0, -147,  -48, -136,
 -264, -264, -264,    0, -264, -264, -264, -264, -264, -264,
 -264, -118, -110, -120,    0, -122, -115,    0, -209, -159,
 -159, -102, -213, -213,    0,    0,    7,    7,  -92,    0,
 -264,    0,    0,    0,    0,    0,    0, -233, -102, -110,
 -240, -116,    0,    0, -233, -102,  -98,    0,    0,
};
static const YYINT yyrindex[] = {                         1,
    0,    0,    0,    1,    0,    0,    0,    0,    0,  -94,
  -94,    0,    0,  -93,    0,    0,    0,    0,    0,    0,
 -250,    0,  -93,    0,    0,    0, -101,    0,    0,    0,
 -235,  -95,    0,    0,    0,    0,    0,    0,    0,    0,
 -205,    0,    0,    0,    0,    0, -250,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -101,    0,    0,    0,    0, -172,    0,    0,
    0,    0,  -90,  -91,    0,  -85,    0,    0, -214,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -87,    0,    0,    0,    0,    0,   -4,  -30,
  -17,    0,  -74,  -61,    0,    0,    6,   19,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -87,
 -206,    0,    0,    0,  -73,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                       189,
  -41,    0,    0,    0,  185,    0,    0,    0,    0,  179,
  176,  -44,  -39,  131,    0, -114,    0,    0,   92,    0,
    0,    0,    0,    0,  -27,    0,    0,    0,  159,    0,
  -19,    0,  101,
};
#define YYTABLESIZE 300
static const YYINT yytable[] = {                         44,
    1,   60,   63,   66,  123,    5,   34,   55,   35,   35,
   35,  128,   56,   44,   74,   75,   76,   25,   67,   68,
   39,   26,   79,   78,   80,   35,   36,   37,   35,   65,
   92,   93,    6,   35,   35,   44,   32,   33,   32,   99,
  100,  101,    3,  103,  104,  105,  106,  107,  108,  109,
   38,   39,   35,   35,   35,   82,   83,   34,   12,   34,
   35,   21,   16,   87,   88,   85,   86,   87,   88,  120,
   81,   82,   83,   21,   17,   84,  125,   35,   35,   10,
   11,   85,   86,   87,   88,  127,   89,   90,   18,   21,
   44,   46,   46,   46,   24,   29,   46,   44,   49,   46,
   31,   46,   46,   46,   46,   46,   50,   46,   46,   81,
   82,   83,   52,   51,   95,   85,   86,   87,   88,   53,
   85,   86,   87,   88,   57,   89,   90,   81,   82,   83,
   61,   58,   98,   62,   72,   64,   77,   91,   85,   86,
   87,   88,   55,   89,   90,   81,   82,   83,  113,  114,
  110,  115,  126,   81,   82,   83,   85,   86,   87,   88,
  116,   89,   90,  111,   85,   86,   87,   88,  129,   89,
   90,   81,   82,   83,    9,   12,   38,   21,   58,  118,
   31,   60,   85,   86,   87,   88,   19,   89,   90,   47,
   47,   47,    7,   21,   47,   15,   23,   47,   28,   47,
   47,   47,   48,   48,   48,   47,   47,   48,   97,  122,
   48,   71,   48,   48,   48,   81,   82,   83,   48,   48,
  124,    0,    0,    0,    0,    0,   85,   86,   87,   88,
    0,   89,   90,   52,   52,   52,    0,    0,   52,    0,
    0,   52,    0,   52,    0,    0,   53,   53,   53,   52,
   52,   53,    0,    0,   53,    0,   53,    0,    2,   51,
    0,    0,   53,   53,   51,    0,    0,   51,    0,   51,
   81,   82,   83,    0,   54,   51,   51,   54,    0,   54,
    0,   85,   86,   87,   88,   54,   54,   55,    0,    0,
   55,    0,   55,    0,    0,    0,    0,    0,   55,   55,
};
static const YYINT yycheck[] = {                         27,
    0,   41,   47,  268,  119,  257,   26,  268,  259,  260,
  261,  126,  273,   41,   56,   57,   58,  258,  283,  284,
  285,  262,   64,   63,   66,  259,  260,  261,  279,   49,
   72,   73,  284,  284,  285,   63,  272,  273,  274,   81,
   82,   83,  258,   85,   86,   87,   88,   89,   90,   91,
  284,  285,  259,  260,  261,  265,  266,  272,  258,  274,
  267,  267,  284,  277,  278,  275,  276,  277,  278,  111,
  264,  265,  266,  279,  269,  269,  121,  284,  285,  268,
  268,  275,  276,  277,  278,  125,  280,  281,  274,  263,
  118,  264,  265,  266,  269,  263,  269,  125,  274,  272,
  284,  274,  275,  276,  277,  278,  272,  280,  281,  264,
  265,  266,  268,  272,  269,  275,  276,  277,  278,  268,
  275,  276,  277,  278,  268,  280,  281,  264,  265,  266,
  272,  279,  269,  272,  268,  273,  267,  272,  275,  276,
  277,  278,  268,  280,  281,  264,  265,  266,  269,  272,
  269,  267,  269,  264,  265,  266,  275,  276,  277,  278,
  263,  280,  281,  274,  275,  276,  277,  278,  267,  280,
  281,  264,  265,  266,  269,  269,  272,  279,  269,  272,
  272,  269,  275,  276,  277,  278,  272,  280,  281,  264,
  265,  266,    4,  267,  269,   11,   18,  272,   23,  274,
  275,  276,  264,  265,  266,  280,  281,  269,   78,  118,
  272,   53,  274,  275,  276,  264,  265,  266,  280,  281,
  120,   -1,   -1,   -1,   -1,   -1,  275,  276,  277,  278,
   -1,  280,  281,  264,  265,  266,   -1,   -1,  269,   -1,
   -1,  272,   -1,  274,   -1,   -1,  264,  265,  266,  280,
  281,  269,   -1,   -1,  272,   -1,  274,   -1,  258,  264,
   -1,   -1,  280,  281,  269,   -1,   -1,  272,   -1,  274,
  264,  265,  266,   -1,  269,  280,  281,  272,   -1,  274,
   -1,  275,  276,  277,  278,  280,  281,  269,   -1,   -1,
  272,   -1,  274,   -1,   -1,   -1,   -1,   -1,  280,  281,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 285
#define YYUNDFTOKEN 321
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"Tmain","Tint","Tif","Tfor",
"Twhile","Tconst","TAo","Tcmp","Tinf","Tsup","TAf","TPo","TPf","TCo","TCf",
"Tpv","Tegal","Tvir","Tplus","Tless","Tdiv","Tfois","Treturn","Tand","Tor",
"Tinclude","Tnumber","Tid","Tprint",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : Prg",
"Prg :",
"$$1 :",
"Prg : $$1 Fct Prg",
"$$2 :",
"Fct : Tint Tmain $$2 TPo Args TPf BodyMain",
"$$3 :",
"$$4 :",
"Fct : Tint Tid $$3 TPo Args $$4 TPf BodyFct",
"Args :",
"Args : Arg ListeArgs",
"Arg : Tint Tid",
"ListeArgs :",
"ListeArgs : Tvir Arg ListeArgs",
"BodyMain : TAo Decls Instrs Return TAf",
"$$5 :",
"BodyFct : TAo $$5 Decls Instrs Return TAf",
"$$6 :",
"BodyBoucle : TAo $$6 Decls Instrs TAf",
"$$7 :",
"Return : Treturn E $$7 Tpv",
"Instrs :",
"Instrs : Instr Instrs",
"$$8 :",
"If : Tif TPo E TPf $$8 BodyBoucle",
"$$9 :",
"$$10 :",
"While : Twhile $$9 TPo E TPf $$10 BodyBoucle",
"Invoc : Tprint TPo E TPf",
"$$11 :",
"Invoc : Tid TPo $$11 Params TPf",
"Aff : Tid Tegal E",
"Decl1 : Tid",
"$$12 :",
"Decl1 : Tid $$12 Tegal E",
"Decls :",
"Decls : Tconst DeclList Tpv",
"Decls : Tint DeclList Tpv",
"DeclList : Decl1",
"DeclList : Decl1 Tvir DeclList",
"Instr : If",
"Instr : While",
"Instr : For",
"Instr : Invoc Tpv",
"Instr : Aff Tpv",
"E : Tnumber",
"E : Tid",
"E : E Tplus E",
"E : E Tless E",
"E : E Tfois E",
"E : E Tdiv E",
"E : E Tcmp E",
"E : E Tinf E",
"E : E Tsup E",
"E : E Tand E",
"E : E Tor E",
"E : TPo E TPf",
"E : Invoc",
"Params :",
"Params : E ParamNext",
"ParamNext :",
"ParamNext : Tvir E ParamNext",
"For : Tfor TPo Decl1 Tpv E Tpv Instr TPf BodyBoucle",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 2:
#line 52 "source.yacc"
	{instruction(AFC,r0,255,0);instruction(JMPR,r0,0,0);}
break;
case 4:
#line 54 "source.yacc"
	{set_PC();}
break;
case 6:
#line 56 "source.yacc"
	{
			int adr = get_sommet_instr();
			add_function(yystack.l_mark[0].str,adr);
		}
break;
case 7:
#line 61 "source.yacc"
	{
			add_symbol("ret",1);/*Laisser de la place pour l'adresse de retour*/
		}
break;
case 8:
#line 65 "source.yacc"
	{
			jump_fin_fct(get_nb_params());/*instruction(JMP,FFF,-1,-1);*/
			flush_tab_symbol();  /*Une fois parsée, on peut flush la tab des symboles */ 
		}
break;
case 11:
#line 74 "source.yacc"
	{
			add_arg(yystack.l_mark[0].str,1);
			increase_nbParam();
		}
break;
case 14:
#line 82 "source.yacc"
	{
				jump_fin_main();
			}
break;
case 15:
#line 86 "source.yacc"
	{increase_depth();}
break;
case 16:
#line 86 "source.yacc"
	{destroy_context() ;decrease_depth();}
break;
case 17:
#line 88 "source.yacc"
	{increase_depth();}
break;
case 18:
#line 88 "source.yacc"
	{destroy_context() ;decrease_depth();}
break;
case 19:
#line 91 "source.yacc"
	{instruction(LOAD,r5,yystack.l_mark[0].nb,0);}
break;
case 23:
#line 97 "source.yacc"
	{
				yystack.l_mark[-3].nb=jump_if(yystack.l_mark[-1].nb); pull_symbol();
			}
break;
case 24:
#line 101 "source.yacc"
	{
				maj_if_jmpc(yystack.l_mark[-5].nb);
			}
break;
case 25:
#line 106 "source.yacc"
	{
					yystack.l_mark[0].nb = get_sommet_instr();
				}
break;
case 26:
#line 110 "source.yacc"
	{
					yystack.l_mark[-2].nb=jump_if(yystack.l_mark[-1].nb);
					pull_symbol();
				}
break;
case 27:
#line 115 "source.yacc"
	{
					maj_while_jmpc(yystack.l_mark[-4].nb,yystack.l_mark[-6].nb);
				}
break;
case 29:
#line 121 "source.yacc"
	{
					yystack.l_mark[0].nb=get_tabsymbol_size(); /* Sommet de la table des symboles avant d'y ajouter les variables temporaires associées au paramètres de la fonction invoqué */
				}
break;
case 30:
#line 125 "source.yacc"
	{
					function_call(yystack.l_mark[-4].str,yystack.l_mark[-3].nb);
					pull_args(get_params(yystack.l_mark[-4].str));
				}
break;
case 31:
#line 132 "source.yacc"
	{ 
			
				affectation(yystack.l_mark[-2].str,yystack.l_mark[0].nb); 

			}
break;
case 32:
#line 140 "source.yacc"
	{ 
				add_symbol(yystack.l_mark[0].str,1);
			}
break;
case 33:
#line 144 "source.yacc"
	{
				add_symbol(yystack.l_mark[0].str,1);
			}
break;
case 34:
#line 148 "source.yacc"
	{
				affectationDeclaration(yystack.l_mark[-3].str,yystack.l_mark[0].nb);
			}
break;
case 45:
#line 167 "source.yacc"
	{ /*Tnumber => VarTemp*/
			instruction(AFC,r0,yystack.l_mark[0].nb,-1);
			yyval.nb=add_var_temp(1);
			instruction(STORE,yyval.nb,r0,-1);
		}
break;
case 46:
#line 173 "source.yacc"
	{ /* Tid => VarTemp : il faut check qu'elle soit initialized*/
			if (initialized(yystack.l_mark[0].str)!=-1) {
			 printf(" E : Tid : Addresse du symbole = %d \n" ,get_symbol_address(yystack.l_mark[0].str));
			instruction(LOAD,r0,get_symbol_address(yystack.l_mark[0].str),0);
			yyval.nb=add_var_temp(1);
			instruction(STORE,yyval.nb,r0,-1); 
			}
			else{
				printf("Variable %s is not initialized \n", yystack.l_mark[0].str);
			}
		}
break;
case 47:
#line 185 "source.yacc"
	{
			add(yystack.l_mark[-2].nb,yystack.l_mark[0].nb);
			pull_symbol();  
			yyval.nb=yystack.l_mark[-2].nb; 
		}
break;
case 48:
#line 191 "source.yacc"
	{
			sou(yystack.l_mark[-2].nb,yystack.l_mark[0].nb);
			pull_symbol();  
			yyval.nb=yystack.l_mark[-2].nb; 
		}
break;
case 49:
#line 197 "source.yacc"
	{
			mul(yystack.l_mark[-2].nb,yystack.l_mark[0].nb);
			pull_symbol();  
			yyval.nb=yystack.l_mark[-2].nb; 
		}
break;
case 50:
#line 203 "source.yacc"
	{
			div(yystack.l_mark[-2].nb,yystack.l_mark[0].nb);
			pull_symbol();  
			yyval.nb=yystack.l_mark[-2].nb; 
		}
break;
case 51:
#line 209 "source.yacc"
	{
			equ(yystack.l_mark[-2].nb,yystack.l_mark[0].nb);
			pull_symbol();  
			yyval.nb=yystack.l_mark[-2].nb; 
		}
break;
case 52:
#line 215 "source.yacc"
	{
			inf(yystack.l_mark[-2].nb,yystack.l_mark[0].nb);
			pull_symbol();  
			yyval.nb=yystack.l_mark[-2].nb; 
		}
break;
case 53:
#line 221 "source.yacc"
	{
			sup(yystack.l_mark[-2].nb,yystack.l_mark[0].nb);
			pull_symbol();  
			yyval.nb=yystack.l_mark[-2].nb; 
		}
break;
case 57:
#line 229 "source.yacc"
	{
		yyval.nb=add_var_temp(1);
		instruction(STORE,yyval.nb,r5,-1);
	}
break;
#line 803 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
