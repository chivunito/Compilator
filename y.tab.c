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
#define Body 286
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    3,    2,    6,    7,    2,    4,    4,    9,
   10,   10,    5,   14,    8,   15,   13,   12,   12,   18,
   17,   20,   21,   19,   22,   24,   22,   25,   26,   27,
   26,   11,   11,   11,   28,   28,   16,   16,   16,   16,
   16,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,   23,   23,   30,   30,   29,
};
static const YYINT yylen[] = {                            2,
    0,    2,    0,    7,    0,    0,    8,    0,    2,    2,
    0,    3,    5,    0,    6,    0,    4,    0,    2,    0,
    6,    0,    0,    7,    4,    0,    5,    3,    1,    0,
    4,    0,    3,    3,    1,    3,    1,    1,    1,    2,
    2,    1,    1,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    1,    0,    2,    0,    3,    9,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    3,    5,    2,    0,    0,    0,    0,
    0,    0,    0,    6,   10,    0,    0,    9,    0,    0,
    4,    0,    0,    0,    0,    0,   12,   14,    7,    0,
    0,    0,    0,    0,    0,   22,    0,    0,    0,    0,
   37,   38,    0,    0,   39,    0,    0,    0,   34,   33,
    0,    0,    0,   26,    0,    0,    0,    0,   19,   40,
   41,    0,    0,   36,    0,   42,    0,    0,   54,    0,
    0,    0,    0,    0,    0,   13,    0,    0,    0,    0,
    0,    0,   20,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   25,    0,    0,   53,    0,    0,    0,
    0,    0,    0,   47,   46,    0,    0,    0,   23,    0,
   56,   27,   17,   15,   21,    0,    0,    0,    0,   24,
   58,    0,   59,
};
static const YYINT yydgoto[] = {                          2,
   68,    3,    7,   12,   21,    8,   19,   29,   13,   18,
   26,   39,   58,   46,   95,   40,   41,  101,   42,   53,
  117,   69,   93,   72,   44,   31,   47,   32,   45,  111,
};
static const YYINT yysindex[] = {                      -247,
 -256,    0, -247,    0,    0,    0, -253, -251, -246, -246,
 -252, -223, -227,    0,    0, -213, -246,    0, -217, -249,
    0, -227, -201, -219, -219, -240,    0,    0,    0,    0,
 -203, -198, -194, -183, -172,    0, -266, -166, -200, -240,
    0,    0, -175, -169,    0, -249, -165, -219,    0,    0,
 -184, -219, -154,    0, -184, -167, -184, -152,    0,    0,
    0, -240, -184,    0, -184,    0, -150, -189,    0, -146,
 -184, -184,  -83, -125,  -83,    0, -200,  -83, -171, -184,
 -184, -184,    0, -184, -184, -184, -184, -184, -184, -184,
 -153, -145, -123,    0, -138, -120,    0,  -21, -135, -135,
 -134, -255, -255,    0,    0,  -28,  -28, -127,    0, -184,
    0,    0,    0,    0,    0, -240, -128, -145, -110,    0,
    0, -124,    0,
};
static const YYINT yyrindex[] = {                       161,
    0,    0,  161,    0,    0,    0,    0,    0, -105, -105,
    0,    0,  -95,    0,    0,    0,    0,    0,    0, -230,
    0,  -95,    0,    0,    0, -104,    0,    0,    0, -191,
  -86,    0,    0,    0,    0,    0,    0,    0,    0, -104,
    0,    0,    0,    0,    0, -230,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -104,    0,    0,    0,    0, -208,    0,    0,    0,
    0,  -92,  -85,    0,  -84,    0,    0, -268,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  -80,    0,    0,    0,    0,    0,  -39,  -65,  -52,
    0, -109,  -96,    0,    0, -221,  -11,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -80,    0,    0,
    0,    0,    0,
};
static const YYINT yygindex[] = {                       187,
  -47,    0,    0,  181,    0,    0,    0,    0,  179,  180,
  157,  -35,  128,    0,    0,   90,    0,    0,    0,    0,
    0,  -26,    0,    0,    0,  156,    0,  -22,    0,   92,
};
#define YYTABLESIZE 270
static const YYINT yytable[] = {                         43,
    4,   54,   33,   31,   59,   31,   55,   73,   24,   75,
    1,   11,   25,   43,    9,   78,   10,   79,   34,   35,
   36,   86,   87,   91,   92,   64,   77,    5,   32,   32,
   32,   15,   98,   99,  100,   43,  102,  103,  104,  105,
  106,  107,  108,   37,   38,   16,   17,   51,   32,   20,
   51,   23,   51,   32,   32,   43,   43,   43,   51,   51,
   43,   28,  118,   43,   30,   43,   43,   43,   43,   43,
   48,   43,   43,   49,   80,   81,   82,   50,   57,   83,
   29,   30,   29,   65,   51,   84,   85,   86,   87,   43,
   88,   89,   80,   81,   82,   52,   60,   97,   66,   67,
   38,   56,   61,   84,   85,   86,   87,   63,   88,   89,
   80,   81,   82,   71,   76,  109,   74,   54,   80,   81,
   82,   84,   85,   86,   87,   90,   88,   89,  110,   84,
   85,   86,   87,  113,   88,   89,   80,   81,   82,   84,
   85,   86,   87,   94,  116,  112,  114,   84,   85,   86,
   87,  115,   88,   89,   44,   44,   44,  120,  122,   44,
    1,  123,   44,    8,   44,   44,   44,   45,   45,   45,
   44,   44,   45,   11,   18,   45,   55,   45,   45,   45,
   80,   81,   82,   45,   45,   35,   28,   16,   57,    6,
   14,   84,   85,   86,   87,   22,   88,   89,   49,   49,
   49,   27,   62,   49,   96,  119,   49,   70,   49,  121,
    0,   50,   50,   50,   49,   49,   50,    0,    0,   50,
    0,   50,    0,    0,   48,    0,    0,   50,   50,   48,
    0,    0,   48,    0,   48,   80,   81,   82,    0,    0,
   48,   48,    0,   81,   82,    0,   84,   85,   86,   87,
    0,    0,    0,   84,   85,   86,   87,   52,    0,    0,
   52,    0,   52,    0,    0,    0,    0,    0,   52,   52,
};
static const YYINT yycheck[] = {                         26,
  257,  268,   25,  272,   40,  274,  273,   55,  258,   57,
  258,  258,  262,   40,  268,   63,  268,   65,  259,  260,
  261,  277,  278,   71,   72,   48,   62,  284,  259,  260,
  261,  284,   80,   81,   82,   62,   84,   85,   86,   87,
   88,   89,   90,  284,  285,  269,  274,  269,  279,  263,
  272,  269,  274,  284,  285,  264,  265,  266,  280,  281,
  269,  263,  110,  272,  284,  274,  275,  276,  277,  278,
  274,  280,  281,  272,  264,  265,  266,  272,  279,  269,
  272,  273,  274,  268,  268,  275,  276,  277,  278,  116,
  280,  281,  264,  265,  266,  268,  272,  269,  283,  284,
  285,  268,  272,  275,  276,  277,  278,  273,  280,  281,
  264,  265,  266,  268,  267,  269,  284,  268,  264,  265,
  266,  275,  276,  277,  278,  272,  280,  281,  274,  275,
  276,  277,  278,  272,  280,  281,  264,  265,  266,  275,
  276,  277,  278,  269,  272,  269,  267,  275,  276,  277,
  278,  286,  280,  281,  264,  265,  266,  286,  269,  269,
    0,  286,  272,  269,  274,  275,  276,  264,  265,  266,
  280,  281,  269,  269,  279,  272,  269,  274,  275,  276,
  264,  265,  266,  280,  281,  272,  272,  272,  269,    3,
   10,  275,  276,  277,  278,   17,  280,  281,  264,  265,
  266,   22,   46,  269,   77,  116,  272,   52,  274,  118,
   -1,  264,  265,  266,  280,  281,  269,   -1,   -1,  272,
   -1,  274,   -1,   -1,  264,   -1,   -1,  280,  281,  269,
   -1,   -1,  272,   -1,  274,  264,  265,  266,   -1,   -1,
  280,  281,   -1,  265,  266,   -1,  275,  276,  277,  278,
   -1,   -1,   -1,  275,  276,  277,  278,  269,   -1,   -1,
  272,   -1,  274,   -1,   -1,   -1,   -1,   -1,  280,  281,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 286
#define YYUNDFTOKEN 319
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
"Tinclude","Tnumber","Tid","Tprint","Body",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
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
"Return : Treturn E $$5 Tpv",
"Instrs :",
"Instrs : Instr Instrs",
"$$6 :",
"If : Tif TPo E TPf $$6 Body",
"$$7 :",
"$$8 :",
"While : Twhile $$7 TPo E TPf $$8 Body",
"Invoc : Tprint TPo Tid TPf",
"$$9 :",
"Invoc : Tid TPo $$9 Params TPf",
"Aff : Tid Tegal E",
"Decl1 : Tid",
"$$10 :",
"Decl1 : Tid $$10 Tegal E",
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
"For : Tfor TPo Decl1 Tpv E Tpv Instr TPf Body",

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
#line 91 "source.yacc"
	{instruction(LOAD,r5,yystack.l_mark[0].nb,0); printf("ICIIIIIIIIIIII");}
break;
case 20:
#line 97 "source.yacc"
	{
				printf("> IF : \n" ); yystack.l_mark[-3].nb=jump_if(yystack.l_mark[-1].nb); pull_symbol(); increase_depth();
			}
break;
case 21:
#line 101 "source.yacc"
	{
				maj_if_jmpc(yystack.l_mark[-5].nb);
			}
break;
case 22:
#line 106 "source.yacc"
	{
					yystack.l_mark[0].nb = get_sommet_instr();
				}
break;
case 23:
#line 110 "source.yacc"
	{
					yystack.l_mark[-2].nb=jump_if(yystack.l_mark[-1].nb);
					pull_symbol();
					increase_depth();
				}
break;
case 24:
#line 116 "source.yacc"
	{
					maj_while_jmpc(yystack.l_mark[-4].nb,yystack.l_mark[-6].nb);
				}
break;
case 26:
#line 122 "source.yacc"
	{
					yystack.l_mark[0].nb=get_tabsymbol_size(); /* Sommet de la table des symboles avant d'y ajouter les variables temporaires associées au paramètres de la fonction invoqué */
				}
break;
case 27:
#line 126 "source.yacc"
	{
					function_call(yystack.l_mark[-4].str,yystack.l_mark[-3].nb);
				}
break;
case 28:
#line 132 "source.yacc"
	{ 
				affectation(yystack.l_mark[-2].str,yystack.l_mark[0].nb); 
			}
break;
case 29:
#line 138 "source.yacc"
	{ 
				add_symbol(yystack.l_mark[0].str,1);
			}
break;
case 30:
#line 142 "source.yacc"
	{
				add_symbol(yystack.l_mark[0].str,1);
			}
break;
case 31:
#line 146 "source.yacc"
	{
				affectation(yystack.l_mark[-3].str,yystack.l_mark[0].nb);
			}
break;
case 42:
#line 165 "source.yacc"
	{ /*Tnumber => VarTemp*/
			instruction(AFC,r0,yystack.l_mark[0].nb,-1);
			yyval.nb=add_var_temp(1);
			instruction(STORE,yyval.nb,r0,-1);
		}
break;
case 43:
#line 171 "source.yacc"
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
case 44:
#line 183 "source.yacc"
	{
			add(yystack.l_mark[-2].nb,yystack.l_mark[0].nb);
			pull_symbol();  
			yyval.nb=yystack.l_mark[-2].nb; 
		}
break;
case 45:
#line 189 "source.yacc"
	{
			sou(yystack.l_mark[-2].nb,yystack.l_mark[0].nb);
			pull_symbol();  
			yyval.nb=yystack.l_mark[-2].nb; 
		}
break;
case 46:
#line 195 "source.yacc"
	{
			mul(yystack.l_mark[-2].nb,yystack.l_mark[0].nb);
			pull_symbol();  
			yyval.nb=yystack.l_mark[-2].nb; 
		}
break;
case 47:
#line 201 "source.yacc"
	{
			div(yystack.l_mark[-2].nb,yystack.l_mark[0].nb);
			pull_symbol();  
			yyval.nb=yystack.l_mark[-2].nb; 
		}
break;
case 48:
#line 207 "source.yacc"
	{
			equ(yystack.l_mark[-2].nb,yystack.l_mark[0].nb);
			pull_symbol();  
			yyval.nb=yystack.l_mark[-2].nb; 
		}
break;
case 54:
#line 217 "source.yacc"
	{
		yyval.nb=add_var_temp(1);
		instruction(STORE,yyval.nb,r5,-1);
	}
break;
#line 763 "y.tab.c"
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
