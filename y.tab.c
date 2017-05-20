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

#line 32 "source.yacc"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{int nb; char str[16];} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 60 "y.tab.c"

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
#define Bodyboucle 286
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    3,    2,    6,    7,    2,    4,    4,    9,
   10,   10,    5,   14,    8,   16,   15,   17,   13,   12,
   12,   20,   19,   22,   23,   21,   24,   26,   24,   27,
   28,   29,   28,   11,   11,   11,   30,   30,   18,   18,
   18,   18,   18,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,   25,   25,   32,   32,
   31,
};
static const YYINT yylen[] = {                            2,
    0,    2,    0,    7,    0,    0,    8,    0,    2,    2,
    0,    3,    5,    0,    6,    0,    5,    0,    4,    0,
    2,    0,    6,    0,    0,    7,    4,    0,    5,    3,
    1,    0,    4,    0,    3,    3,    1,    3,    1,    1,
    1,    2,    2,    1,    1,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    1,    0,    2,    0,    3,
    9,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    3,    5,    2,    0,    0,    0,    0,
    0,    0,    0,    6,   10,    0,    0,    9,    0,    0,
    4,    0,    0,    0,    0,    0,   12,   14,    7,    0,
    0,    0,    0,    0,    0,   24,    0,    0,    0,    0,
   39,   40,    0,    0,   41,    0,    0,    0,   36,   35,
    0,    0,    0,   28,    0,    0,    0,    0,   21,   42,
   43,    0,    0,   38,    0,   44,    0,    0,   56,    0,
    0,    0,    0,    0,    0,   13,    0,    0,    0,    0,
    0,    0,   22,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   27,    0,    0,   55,    0,    0,    0,
    0,    0,    0,   49,   48,    0,    0,    0,   25,    0,
   58,   29,   19,   15,   16,   23,    0,    0,    0,    0,
    0,   26,   60,    0,    0,    0,   61,   17,
};
static const YYINT yydgoto[] = {                          2,
   68,    3,    7,   12,   21,    8,   19,   29,   13,   18,
   26,   39,   58,   46,  116,  120,   95,   40,   41,  101,
   42,   53,  118,   69,   93,   72,   44,   31,   47,   32,
   45,  111,
};
static const YYINT yysindex[] = {                      -236,
 -254,    0, -236,    0,    0,    0, -256, -218, -204, -204,
 -227, -207, -205,    0,    0, -193, -204,    0, -195, -251,
    0, -205, -188, -203, -203, -240,    0,    0,    0,    0,
 -186, -182, -173, -161, -155,    0, -264, -149, -165, -240,
    0,    0, -152, -147,    0, -251, -187, -203,    0,    0,
 -167, -203, -137,    0, -167, -150, -167, -135,    0,    0,
    0, -240, -167,    0, -167,    0, -133, -198,    0, -129,
 -167, -167,  -66, -108,  -66,    0, -165,  -66, -154, -167,
 -167, -167,    0, -167, -167, -167, -167, -167, -167, -167,
 -136, -128, -106,    0, -121, -103,    0,   -5, -118, -118,
  -94, -246, -246,    0,    0,  -11,  -11, -110,    0, -167,
    0,    0,    0,    0,    0,    0, -240,  -94, -128, -251,
  -93,    0,    0, -240, -111,  -89,    0,    0,
};
static const YYINT yyrindex[] = {                       179,
    0,    0,  179,    0,    0,    0,    0,    0,  -88,  -88,
    0,    0,  -78,    0,    0,    0,    0,    0,    0, -233,
    0,  -78,    0,    0,    0,  -87,    0,    0,    0, -213,
  -69,    0,    0,    0,    0,    0,    0,    0,    0, -262,
    0,    0,    0,    0,    0, -233,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  -87,    0,    0,    0,    0, -172,    0,    0,    0,
    0,  -75,  -68,    0,  -67,    0,    0, -259,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  -63,    0,    0,    0,    0,    0,  -22,  -48,  -35,
    0,  -92,  -79,    0,    0, -216, -185,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -63, -212,
    0,    0,    0,  -60,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                       205,
  -47,    0,    0,  203,    0,    0,    0,    0,  202,  198,
  -44,  -39,  145,    0,  105,    0,    0,  108,    0,    0,
    0,    0,    0,  -26,    0,    0,    0,  175,    0,  -19,
    0,  109,
};
#define YYTABLESIZE 273
static const YYINT yytable[] = {                         43,
   59,   62,    4,   54,   20,   33,   24,   73,   55,   75,
   25,    9,   33,   43,   33,   78,   20,   79,   34,   35,
   36,    1,   77,   91,   92,   34,   34,   34,   64,    5,
   86,   87,   98,   99,  100,   43,  102,  103,  104,  105,
  106,  107,  108,   37,   38,   34,   34,   34,   34,   10,
   34,   34,   53,   11,   34,   53,   15,   53,   31,   32,
   31,   16,  119,   53,   53,   80,   81,   82,   17,   20,
   83,   34,   34,   23,   28,  124,   84,   85,   86,   87,
   30,   88,   89,   54,  126,   63,   54,   48,   54,   49,
   43,   45,   45,   45,   54,   54,   45,   43,   50,   45,
   65,   45,   45,   45,   45,   45,   51,   45,   45,   80,
   81,   82,   52,   57,   97,   66,   67,   38,   56,   60,
   84,   85,   86,   87,   61,   88,   89,   80,   81,   82,
   71,   76,  109,   74,   54,   80,   81,   82,   84,   85,
   86,   87,   90,   88,   89,  110,   84,   85,   86,   87,
  113,   88,   89,   80,   81,   82,   84,   85,   86,   87,
   94,  117,  112,  114,   84,   85,   86,   87,  115,   88,
   89,   46,   46,   46,  127,  125,   46,  128,    1,   46,
    8,   46,   46,   46,   47,   47,   47,   46,   46,   47,
   11,   20,   47,   57,   47,   47,   47,   80,   81,   82,
   47,   47,   37,   30,   18,   59,   20,    6,   84,   85,
   86,   87,   14,   88,   89,   51,   51,   51,   22,   27,
   51,   96,  122,   51,  121,   51,   70,  123,   52,   52,
   52,   51,   51,   52,    0,    0,   52,    0,   52,    0,
    0,   50,    0,    0,   52,   52,   50,    0,    0,   50,
    0,   50,   80,   81,   82,    0,    0,   50,   50,   81,
   82,    0,    0,   84,   85,   86,   87,    0,    0,   84,
   85,   86,   87,
};
static const YYINT yycheck[] = {                         26,
   40,   46,  257,  268,  267,   25,  258,   55,  273,   57,
  262,  268,  272,   40,  274,   63,  279,   65,  259,  260,
  261,  258,   62,   71,   72,  259,  260,  261,   48,  284,
  277,  278,   80,   81,   82,   62,   84,   85,   86,   87,
   88,   89,   90,  284,  285,  279,  259,  260,  261,  268,
  284,  285,  269,  258,  267,  272,  284,  274,  272,  273,
  274,  269,  110,  280,  281,  264,  265,  266,  274,  263,
  269,  284,  285,  269,  263,  120,  275,  276,  277,  278,
  284,  280,  281,  269,  124,  273,  272,  274,  274,  272,
  117,  264,  265,  266,  280,  281,  269,  124,  272,  272,
  268,  274,  275,  276,  277,  278,  268,  280,  281,  264,
  265,  266,  268,  279,  269,  283,  284,  285,  268,  272,
  275,  276,  277,  278,  272,  280,  281,  264,  265,  266,
  268,  267,  269,  284,  268,  264,  265,  266,  275,  276,
  277,  278,  272,  280,  281,  274,  275,  276,  277,  278,
  272,  280,  281,  264,  265,  266,  275,  276,  277,  278,
  269,  272,  269,  267,  275,  276,  277,  278,  263,  280,
  281,  264,  265,  266,  286,  269,  269,  267,    0,  272,
  269,  274,  275,  276,  264,  265,  266,  280,  281,  269,
  269,  279,  272,  269,  274,  275,  276,  264,  265,  266,
  280,  281,  272,  272,  272,  269,  267,    3,  275,  276,
  277,  278,   10,  280,  281,  264,  265,  266,   17,   22,
  269,   77,  118,  272,  117,  274,   52,  119,  264,  265,
  266,  280,  281,  269,   -1,   -1,  272,   -1,  274,   -1,
   -1,  264,   -1,   -1,  280,  281,  269,   -1,   -1,  272,
   -1,  274,  264,  265,  266,   -1,   -1,  280,  281,  265,
  266,   -1,   -1,  275,  276,  277,  278,   -1,   -1,  275,
  276,  277,  278,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 286
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
"Tinclude","Tnumber","Tid","Tprint","Bodyboucle",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : Prg",
"Prg :",
"Prg : Fct Prg",
"$$1 :",
"Fct : Tint Tmain $$1 TPo Args TPf BodyMain",
"$$2 :",
"$$3 :",
"Fct : Tint Tid $$2 TPo Args $$3 TPf BodyFct",
"Args :",
"Args : Arg ListeArgs",
"Arg : Tint Tid",
"ListeArgs :",
"ListeArgs : Tvir Arg ListeArgs",
"BodyMain : TAo Decls Instrs Return TAf",
"$$4 :",
"BodyFct : TAo $$4 Decls Instrs Return TAf",
"$$5 :",
"BodyBoucle : TAo $$5 Decls Instrs TAf",
"$$6 :",
"Return : Treturn E $$6 Tpv",
"Instrs :",
"Instrs : Instr Instrs",
"$$7 :",
"If : Tif TPo E TPf $$7 BodyBoucle",
"$$8 :",
"$$9 :",
"While : Twhile $$8 TPo E TPf $$9 BodyBoucle",
"Invoc : Tprint TPo Tid TPf",
"$$10 :",
"Invoc : Tid TPo $$10 Params TPf",
"Aff : Tid Tegal E",
"Decl1 : Tid",
"$$11 :",
"Decl1 : Tid $$11 Tegal E",
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
"For : Tfor TPo Decl1 Tpv E Tpv Instr TPf Bodyboucle",

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
case 3:
#line 55 "source.yacc"
	{set_PC();}
break;
case 5:
#line 57 "source.yacc"
	{
			int adr = get_sommet_instr();
			add_function(yystack.l_mark[0].str,adr);
		}
break;
case 6:
#line 62 "source.yacc"
	{
			add_symbol("ret",1);/*Laisser de la place pour l'adresse de retour*/
		}
break;
case 7:
#line 66 "source.yacc"
	{
			decrease_depth();
			jump_fin_fct(get_nb_params());/*instruction(JMP,FFF,-1,-1);*/
			flush_tab_symbol();  /*Une fois parsée, on peut flush la tab des symboles */ 
		}
break;
case 10:
#line 76 "source.yacc"
	{
			add_arg(yystack.l_mark[0].str,1);
			increase_nbParam();
		}
break;
case 13:
#line 84 "source.yacc"
	{
				jump_fin_main();
			}
break;
case 14:
#line 88 "source.yacc"
	{increase_depth();}
break;
case 15:
#line 88 "source.yacc"
	{decrease_depth();}
break;
case 16:
#line 90 "source.yacc"
	{increase_depth();}
break;
case 17:
#line 90 "source.yacc"
	{decrease_depth();}
break;
case 18:
#line 93 "source.yacc"
	{instruction(LOAD,r5,yystack.l_mark[0].nb,0);}
break;
case 22:
#line 99 "source.yacc"
	{
				printf("> IF : \n" ); yystack.l_mark[-3].nb=jump_if(yystack.l_mark[-1].nb); pull_symbol(); increase_depth();
			}
break;
case 23:
#line 103 "source.yacc"
	{
				maj_if_jmpc(yystack.l_mark[-5].nb);
			}
break;
case 24:
#line 108 "source.yacc"
	{
					yystack.l_mark[0].nb = get_sommet_instr();
				}
break;
case 25:
#line 112 "source.yacc"
	{
					yystack.l_mark[-2].nb=jump_if(yystack.l_mark[-1].nb);
					pull_symbol();
					increase_depth();
				}
break;
case 26:
#line 118 "source.yacc"
	{
					maj_while_jmpc(yystack.l_mark[-4].nb,yystack.l_mark[-6].nb);
				}
break;
case 28:
#line 124 "source.yacc"
	{
					yystack.l_mark[0].nb=get_tabsymbol_size(); /* Sommet de la table des symboles avant d'y ajouter les variables temporaires associées au paramètres de la fonction invoqué */
				}
break;
case 29:
#line 128 "source.yacc"
	{
					function_call(yystack.l_mark[-4].str,yystack.l_mark[-3].nb);
				}
break;
case 30:
#line 134 "source.yacc"
	{ 
				affectation(yystack.l_mark[-2].str,yystack.l_mark[0].nb); 
			}
break;
case 31:
#line 140 "source.yacc"
	{ 
				add_symbol(yystack.l_mark[0].str,1);
			}
break;
case 32:
#line 144 "source.yacc"
	{
				add_symbol(yystack.l_mark[0].str,1);
			}
break;
case 33:
#line 148 "source.yacc"
	{
				affectation(yystack.l_mark[-3].str,yystack.l_mark[0].nb);
			}
break;
case 44:
#line 167 "source.yacc"
	{ /*Tnumber => VarTemp*/
			instruction(AFC,r0,yystack.l_mark[0].nb,-1);
			yyval.nb=add_var_temp(1);
			instruction(STORE,yyval.nb,r0,-1);
		}
break;
case 45:
#line 173 "source.yacc"
	{ /* Tid => VarTemp : il faut check qu'elle soit initialized*/
			if (initialized(yystack.l_mark[0].str)==1) {
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
case 46:
#line 185 "source.yacc"
	{
			add(yystack.l_mark[-2].nb,yystack.l_mark[0].nb);
			pull_symbol();  
			yyval.nb=yystack.l_mark[-2].nb; 
		}
break;
case 47:
#line 191 "source.yacc"
	{
			sou(yystack.l_mark[-2].nb,yystack.l_mark[0].nb);
			pull_symbol();  
			yyval.nb=yystack.l_mark[-2].nb; 
		}
break;
case 48:
#line 197 "source.yacc"
	{
			mul(yystack.l_mark[-2].nb,yystack.l_mark[0].nb);
			pull_symbol();  
			yyval.nb=yystack.l_mark[-2].nb; 
		}
break;
case 49:
#line 203 "source.yacc"
	{
			div(yystack.l_mark[-2].nb,yystack.l_mark[0].nb);
			pull_symbol();  
			yyval.nb=yystack.l_mark[-2].nb; 
		}
break;
case 50:
#line 209 "source.yacc"
	{
			equ(yystack.l_mark[-2].nb,yystack.l_mark[0].nb);
			pull_symbol();  
			yyval.nb=yystack.l_mark[-2].nb; 
		}
break;
case 56:
#line 219 "source.yacc"
	{
		yyval.nb=add_var_temp(1);
		instruction(STORE,yyval.nb,r5,-1);
	}
break;
#line 779 "y.tab.c"
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
