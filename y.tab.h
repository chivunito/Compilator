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
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{int nb; char str[16];} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
