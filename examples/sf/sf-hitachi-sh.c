/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 38 "sf-hitachi-sh.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <signal.h>
#include <math.h>
#include "endian-hitachi-sh.h"
#include "sf.h"
#include "mextern.h"

#line 78 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_BATTALERTFRAC = 258,
    T_BATTLEAK = 259,
    T_BATTCF = 260,
    T_BATTILEAK = 261,
    T_BATTETALUT = 262,
    T_BATTETALUTNENTRIES = 263,
    T_BATTINOMINAL = 264,
    T_BATTNODEATTACH = 265,
    T_BATTRF = 266,
    T_BATTSTATS = 267,
    T_BATTVBATTLUT = 268,
    T_BATTVBATTLUTNENTRIES = 269,
    T_BATTVLOSTLUT = 270,
    T_BATTVLOSTLUTNENTRIES = 271,
    T_PCBT = 272,
    T_CACHEINIT = 273,
    T_CACHEOFF = 274,
    T_CACHESTATS = 275,
    T_CD = 276,
    T_CLOCKINTR = 277,
    T_COMMENT = 278,
    T_CONT = 279,
    T_DISABLEPIPELINE = 280,
    T_DUMPALL = 281,
    T_DUMPMEM = 282,
    T_DUMPPIPE = 283,
    T_DUMPDISTRIBUTION = 284,
    T_DUMPPWR = 285,
    T_DUMPREGS = 286,
    T_DUMPSYSREGS = 287,
    T_DUMPTIME = 288,
    T_DUMPTLB = 289,
    T_DYNINSTR = 290,
    T_EBATTINTR = 291,
    T_EFAULTS = 292,
    T_ENABLEPIPELINE = 293,
    T_FILE2NETSEG = 294,
    T_FLTTHRESH = 295,
    T_FORCEAVGPWR = 296,
    T_HELP = 297,
    T_IGNORENODEDEATHS = 298,
    T_INITSEESTATE = 299,
    T_HWSEEREG = 300,
    T_REGISTERRVAR = 301,
    T_INITRANDTABLE = 302,
    T_DEFNDIST = 303,
    T_RANDPRINT = 304,
    T_LOAD = 305,
    T_LOCSTATS = 306,
    T_LISTRVARS = 307,
    T_MALLOCDEBUG = 308,
    T_MMAP = 309,
    T_MODECA = 310,
    T_MODEFF = 311,
    T_NETCORREL = 312,
    T_NETDEBUG = 313,
    T_NETNEWSEG = 314,
    T_NETNODENEWIFC = 315,
    T_NETSEG2FILE = 316,
    T_NETSEGDELETE = 317,
    T_NETSEGFAILDURMAX = 318,
    T_NETSEGFAILPROB = 319,
    T_NETSEGFAILPROBFN = 320,
    T_NETSEGNICATTACH = 321,
    T_NETSEGPROPMODEL = 322,
    T_NEWBATT = 323,
    T_NEWNODE = 324,
    T_NODEFAILDURMAX = 325,
    T_NODEFAILPROB = 326,
    T_NODEFAILPROBFN = 327,
    T_NODETACH = 328,
    T_NUMAREGION = 329,
    T_NUMASTATS = 330,
    T_NUMASTATSALL = 331,
    T_NUMASETMAPID = 332,
    T_ADDVALUETRACE = 333,
    T_DELVALUETRACE = 334,
    T_REGISTERSTABS = 335,
    T_VALUESTATS = 336,
    T_OFF = 337,
    T_ON = 338,
    T_PAUINFO = 339,
    T_NANOPAUSE = 340,
    T_PAUSE = 341,
    T_PFUN = 342,
    T_PIPEFLUSH = 343,
    T_POWERSTATS = 344,
    T_POWERTOTAL = 345,
    T_PWD = 346,
    T_PARSEOBJDUMP = 347,
    T_QUIT = 348,
    T_GETRANDOMSEED = 349,
    T_SETRANDOMSEED = 350,
    T_RATIO = 351,
    T_RENUMBERNODES = 352,
    T_RESETNODECTRS = 353,
    T_RESETALLCTRS = 354,
    T_RESETCPU = 355,
    T_RETRYALG = 356,
    T_RUN = 357,
    T_SAVE = 358,
    T_SENSORSDEBUG = 359,
    T_SETBASENODEID = 360,
    T_SETBATT = 361,
    T_SETBATTFEEDPERIOD = 362,
    T_SETDUMPPWRPERIOD = 363,
    T_SETNETPERIOD = 364,
    T_SETFAULTPERIOD = 365,
    T_SETFREQ = 366,
    T_SETIFCOUI = 367,
    T_SETMEMBASE = 368,
    T_SETNODE = 369,
    T_SETPC = 370,
    T_SETPHYSICSPERIOD = 371,
    T_SETQUANTUM = 372,
    T_SETSCALEALPHA = 373,
    T_SETSCALEK = 374,
    T_SETSCALEVT = 375,
    T_SETSCHEDRANDOM = 376,
    T_SETSCHEDROUNDROBIN = 377,
    T_SETTAG = 378,
    T_SETTIMERDELAY = 379,
    T_SETVDD = 380,
    T_SETMEMRLATENCY = 381,
    T_SETMEMWLATENCY = 382,
    T_SETFLASHRLATENCY = 383,
    T_SETFLASHWLATENCY = 384,
    T_SETNODEMASS = 385,
    T_SETPROPULSIONCOEFFS = 386,
    T_SHAREBUS = 387,
    T_SHOWCLK = 388,
    T_SHOWMEMBASE = 389,
    T_SHOWPIPE = 390,
    T_SHOWTAGS = 391,
    T_SIGNALSRC = 392,
    T_SIGNALSUBSCRIBE = 393,
    T_SIZEMEM = 394,
    T_SIZEPAU = 395,
    T_SPLIT = 396,
    T_SRECL = 397,
    T_STEP = 398,
    T_STOP = 399,
    T_SFATAL = 400,
    T_TRACE = 401,
    T_THROTTLE = 402,
    T_THROTTLEWIN = 403,
    T_VERBOSE = 404,
    T_VERSION = 405,
    T_SETLOC = 406,
    T_BPT = 407,
    T_BPTLS = 408,
    T_BPTDEL = 409,
    T_GLOBALTIME = 410,
    T_CYCLES = 411,
    T_INSTRS = 412,
    T_SENSORREADING = 413,
    T_DOTALIGN = 414,
    T_DOTORG = 415,
    T_DOTDATA = 416,
    T_DOTTEXT = 417,
    T_DOTGLOBAL = 418,
    T_DOTFILE = 419,
    T_DOTLONG = 420,
    T_DOTCOMM = 421,
    T_R0 = 422,
    T_R1 = 423,
    T_R2 = 424,
    T_R3 = 425,
    T_R4 = 426,
    T_R5 = 427,
    T_R6 = 428,
    T_R7 = 429,
    T_R8 = 430,
    T_R9 = 431,
    T_R10 = 432,
    T_R11 = 433,
    T_R12 = 434,
    T_R13 = 435,
    T_R14 = 436,
    T_R15 = 437,
    T_GBR = 438,
    T_VBR = 439,
    T_MACH = 440,
    T_MACL = 441,
    T_PC = 442,
    T_PR = 443,
    T_TRA = 444,
    T_SPC = 445,
    T_SR = 446,
    T_SSR = 447,
    T_LABELDEFN = 448,
    T_ADD = 449,
    T_ADDC = 450,
    T_ADDV = 451,
    T_AND = 452,
    T_ANDB = 453,
    T_BF = 454,
    T_BFS = 455,
    T_BRA = 456,
    T_BRAF = 457,
    T_BSR = 458,
    T_BSRF = 459,
    T_BT = 460,
    T_BTS = 461,
    T_CLRMAC = 462,
    T_CLRS = 463,
    T_CLRT = 464,
    T_CMPEQ = 465,
    T_CMPGE = 466,
    T_CMPGT = 467,
    T_CMPHI = 468,
    T_CMPHS = 469,
    T_CMPPL = 470,
    T_CMPPZ = 471,
    T_CMPSTR = 472,
    T_DIV0S = 473,
    T_DIV0U = 474,
    T_DIV1 = 475,
    T_DMULSL = 476,
    T_DMULUL = 477,
    T_DT = 478,
    T_EXTSB = 479,
    T_EXTSW = 480,
    T_EXTUB = 481,
    T_EXTUW = 482,
    T_JMP = 483,
    T_JSR = 484,
    T_LDC = 485,
    T_LDCL = 486,
    T_LDS = 487,
    T_LDSL = 488,
    T_LDTLB = 489,
    T_MACW = 490,
    T_MOV = 491,
    T_MOVB = 492,
    T_MOVL = 493,
    T_MOVW = 494,
    T_MOVA = 495,
    T_MOVT = 496,
    T_MULL = 497,
    T_MULS = 498,
    T_MULSW = 499,
    T_MULU = 500,
    T_MULUW = 501,
    T_NEG = 502,
    T_NEGC = 503,
    T_NOP = 504,
    T_NOT = 505,
    T_OR = 506,
    T_ORB = 507,
    T_PREF = 508,
    T_RFG = 509,
    T_ROTCL = 510,
    T_ROTCR = 511,
    T_ROTL = 512,
    T_ROTR = 513,
    T_RTE = 514,
    T_RTS = 515,
    T_SETS = 516,
    T_SETT = 517,
    T_SHAD = 518,
    T_SHAL = 519,
    T_SHAR = 520,
    T_SHLD = 521,
    T_SHLL = 522,
    T_SHLL2 = 523,
    T_SHLL8 = 524,
    T_SHLL16 = 525,
    T_SHLR = 526,
    T_SHLR2 = 527,
    T_SHLR8 = 528,
    T_SHLR16 = 529,
    T_SLEEP = 530,
    T_STC = 531,
    T_STCL = 532,
    T_STS = 533,
    T_STSL = 534,
    T_SUB = 535,
    T_SUBC = 536,
    T_SUBV = 537,
    T_SWAPB = 538,
    T_SWAPW = 539,
    T_TASB = 540,
    T_TRAPA = 541,
    T_TST = 542,
    T_TSTB = 543,
    T_XOR = 544,
    T_XORB = 545,
    T_XTRCT = 546,
    T_LABEL = 547,
    T_STRING = 548,
    T_MAN = 549
  };
#endif
/* Tokens.  */
#define T_BATTALERTFRAC 258
#define T_BATTLEAK 259
#define T_BATTCF 260
#define T_BATTILEAK 261
#define T_BATTETALUT 262
#define T_BATTETALUTNENTRIES 263
#define T_BATTINOMINAL 264
#define T_BATTNODEATTACH 265
#define T_BATTRF 266
#define T_BATTSTATS 267
#define T_BATTVBATTLUT 268
#define T_BATTVBATTLUTNENTRIES 269
#define T_BATTVLOSTLUT 270
#define T_BATTVLOSTLUTNENTRIES 271
#define T_PCBT 272
#define T_CACHEINIT 273
#define T_CACHEOFF 274
#define T_CACHESTATS 275
#define T_CD 276
#define T_CLOCKINTR 277
#define T_COMMENT 278
#define T_CONT 279
#define T_DISABLEPIPELINE 280
#define T_DUMPALL 281
#define T_DUMPMEM 282
#define T_DUMPPIPE 283
#define T_DUMPDISTRIBUTION 284
#define T_DUMPPWR 285
#define T_DUMPREGS 286
#define T_DUMPSYSREGS 287
#define T_DUMPTIME 288
#define T_DUMPTLB 289
#define T_DYNINSTR 290
#define T_EBATTINTR 291
#define T_EFAULTS 292
#define T_ENABLEPIPELINE 293
#define T_FILE2NETSEG 294
#define T_FLTTHRESH 295
#define T_FORCEAVGPWR 296
#define T_HELP 297
#define T_IGNORENODEDEATHS 298
#define T_INITSEESTATE 299
#define T_HWSEEREG 300
#define T_REGISTERRVAR 301
#define T_INITRANDTABLE 302
#define T_DEFNDIST 303
#define T_RANDPRINT 304
#define T_LOAD 305
#define T_LOCSTATS 306
#define T_LISTRVARS 307
#define T_MALLOCDEBUG 308
#define T_MMAP 309
#define T_MODECA 310
#define T_MODEFF 311
#define T_NETCORREL 312
#define T_NETDEBUG 313
#define T_NETNEWSEG 314
#define T_NETNODENEWIFC 315
#define T_NETSEG2FILE 316
#define T_NETSEGDELETE 317
#define T_NETSEGFAILDURMAX 318
#define T_NETSEGFAILPROB 319
#define T_NETSEGFAILPROBFN 320
#define T_NETSEGNICATTACH 321
#define T_NETSEGPROPMODEL 322
#define T_NEWBATT 323
#define T_NEWNODE 324
#define T_NODEFAILDURMAX 325
#define T_NODEFAILPROB 326
#define T_NODEFAILPROBFN 327
#define T_NODETACH 328
#define T_NUMAREGION 329
#define T_NUMASTATS 330
#define T_NUMASTATSALL 331
#define T_NUMASETMAPID 332
#define T_ADDVALUETRACE 333
#define T_DELVALUETRACE 334
#define T_REGISTERSTABS 335
#define T_VALUESTATS 336
#define T_OFF 337
#define T_ON 338
#define T_PAUINFO 339
#define T_NANOPAUSE 340
#define T_PAUSE 341
#define T_PFUN 342
#define T_PIPEFLUSH 343
#define T_POWERSTATS 344
#define T_POWERTOTAL 345
#define T_PWD 346
#define T_PARSEOBJDUMP 347
#define T_QUIT 348
#define T_GETRANDOMSEED 349
#define T_SETRANDOMSEED 350
#define T_RATIO 351
#define T_RENUMBERNODES 352
#define T_RESETNODECTRS 353
#define T_RESETALLCTRS 354
#define T_RESETCPU 355
#define T_RETRYALG 356
#define T_RUN 357
#define T_SAVE 358
#define T_SENSORSDEBUG 359
#define T_SETBASENODEID 360
#define T_SETBATT 361
#define T_SETBATTFEEDPERIOD 362
#define T_SETDUMPPWRPERIOD 363
#define T_SETNETPERIOD 364
#define T_SETFAULTPERIOD 365
#define T_SETFREQ 366
#define T_SETIFCOUI 367
#define T_SETMEMBASE 368
#define T_SETNODE 369
#define T_SETPC 370
#define T_SETPHYSICSPERIOD 371
#define T_SETQUANTUM 372
#define T_SETSCALEALPHA 373
#define T_SETSCALEK 374
#define T_SETSCALEVT 375
#define T_SETSCHEDRANDOM 376
#define T_SETSCHEDROUNDROBIN 377
#define T_SETTAG 378
#define T_SETTIMERDELAY 379
#define T_SETVDD 380
#define T_SETMEMRLATENCY 381
#define T_SETMEMWLATENCY 382
#define T_SETFLASHRLATENCY 383
#define T_SETFLASHWLATENCY 384
#define T_SETNODEMASS 385
#define T_SETPROPULSIONCOEFFS 386
#define T_SHAREBUS 387
#define T_SHOWCLK 388
#define T_SHOWMEMBASE 389
#define T_SHOWPIPE 390
#define T_SHOWTAGS 391
#define T_SIGNALSRC 392
#define T_SIGNALSUBSCRIBE 393
#define T_SIZEMEM 394
#define T_SIZEPAU 395
#define T_SPLIT 396
#define T_SRECL 397
#define T_STEP 398
#define T_STOP 399
#define T_SFATAL 400
#define T_TRACE 401
#define T_THROTTLE 402
#define T_THROTTLEWIN 403
#define T_VERBOSE 404
#define T_VERSION 405
#define T_SETLOC 406
#define T_BPT 407
#define T_BPTLS 408
#define T_BPTDEL 409
#define T_GLOBALTIME 410
#define T_CYCLES 411
#define T_INSTRS 412
#define T_SENSORREADING 413
#define T_DOTALIGN 414
#define T_DOTORG 415
#define T_DOTDATA 416
#define T_DOTTEXT 417
#define T_DOTGLOBAL 418
#define T_DOTFILE 419
#define T_DOTLONG 420
#define T_DOTCOMM 421
#define T_R0 422
#define T_R1 423
#define T_R2 424
#define T_R3 425
#define T_R4 426
#define T_R5 427
#define T_R6 428
#define T_R7 429
#define T_R8 430
#define T_R9 431
#define T_R10 432
#define T_R11 433
#define T_R12 434
#define T_R13 435
#define T_R14 436
#define T_R15 437
#define T_GBR 438
#define T_VBR 439
#define T_MACH 440
#define T_MACL 441
#define T_PC 442
#define T_PR 443
#define T_TRA 444
#define T_SPC 445
#define T_SR 446
#define T_SSR 447
#define T_LABELDEFN 448
#define T_ADD 449
#define T_ADDC 450
#define T_ADDV 451
#define T_AND 452
#define T_ANDB 453
#define T_BF 454
#define T_BFS 455
#define T_BRA 456
#define T_BRAF 457
#define T_BSR 458
#define T_BSRF 459
#define T_BT 460
#define T_BTS 461
#define T_CLRMAC 462
#define T_CLRS 463
#define T_CLRT 464
#define T_CMPEQ 465
#define T_CMPGE 466
#define T_CMPGT 467
#define T_CMPHI 468
#define T_CMPHS 469
#define T_CMPPL 470
#define T_CMPPZ 471
#define T_CMPSTR 472
#define T_DIV0S 473
#define T_DIV0U 474
#define T_DIV1 475
#define T_DMULSL 476
#define T_DMULUL 477
#define T_DT 478
#define T_EXTSB 479
#define T_EXTSW 480
#define T_EXTUB 481
#define T_EXTUW 482
#define T_JMP 483
#define T_JSR 484
#define T_LDC 485
#define T_LDCL 486
#define T_LDS 487
#define T_LDSL 488
#define T_LDTLB 489
#define T_MACW 490
#define T_MOV 491
#define T_MOVB 492
#define T_MOVL 493
#define T_MOVW 494
#define T_MOVA 495
#define T_MOVT 496
#define T_MULL 497
#define T_MULS 498
#define T_MULSW 499
#define T_MULU 500
#define T_MULUW 501
#define T_NEG 502
#define T_NEGC 503
#define T_NOP 504
#define T_NOT 505
#define T_OR 506
#define T_ORB 507
#define T_PREF 508
#define T_RFG 509
#define T_ROTCL 510
#define T_ROTCR 511
#define T_ROTL 512
#define T_ROTR 513
#define T_RTE 514
#define T_RTS 515
#define T_SETS 516
#define T_SETT 517
#define T_SHAD 518
#define T_SHAL 519
#define T_SHAR 520
#define T_SHLD 521
#define T_SHLL 522
#define T_SHLL2 523
#define T_SHLL8 524
#define T_SHLL16 525
#define T_SHLR 526
#define T_SHLR2 527
#define T_SHLR8 528
#define T_SHLR16 529
#define T_SLEEP 530
#define T_STC 531
#define T_STCL 532
#define T_STS 533
#define T_STSL 534
#define T_SUB 535
#define T_SUBC 536
#define T_SUBV 537
#define T_SWAPB 538
#define T_SWAPW 539
#define T_TASB 540
#define T_TRAPA 541
#define T_TST 542
#define T_TSTB 543
#define T_XOR 544
#define T_XORB 545
#define T_XTRCT 546
#define T_LABEL 547
#define T_STRING 548
#define T_MAN 549

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 66 "sf-hitachi-sh.y" /* yacc.c:355  */

	double		dval;
	ulong		uval;
	long		sval;
	char		*str;
	Rval		*rval;
	DoubleList	*dlist;

#line 712 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 729 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2905

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  308
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  188
/* YYNRULES -- Number of rules.  */
#define YYNRULES  543
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1415

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   550

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     295,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,   299,     2,     2,     2,     2,
     301,   302,     2,   303,   297,   304,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     305,     2,   307,     2,   300,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   296,     2,   298,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     306
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   446,   446,   447,   450,   451,   452,   453,   454,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,   561,   562,   563,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,   587,   588,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   607,   608,   609,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,   627,   628,   629,
     630,   634,   646,   656,   666,   694,   701,   708,   715,   725,
     735,   745,   755,   769,   787,   801,   819,   833,   851,   865,
     872,   879,   886,   893,   900,   907,   914,   921,   928,   935,
     943,   950,   958,   976,   994,  1001,  1008,  1015,  1022,  1029,
    1036,  1043,  1050,  1057,  1065,  1078,  1085,  1092,  1104,  1111,
    1118,  1125,  1132,  1140,  1148,  1155,  1162,  1169,  1177,  1184,
    1198,  1206,  1213,  1220,  1234,  1250,  1257,  1264,  1271,  1278,
    1285,  1292,  1299,  1306,  1313,  1320,  1329,  1336,  1343,  1350,
    1357,  1364,  1371,  1378,  1385,  1392,  1399,  1415,  1423,  1432,
    1439,  1446,  1453,  1460,  1474,  1483,  1497,  1504,  1522,  1530,
    1537,  1544,  1551,  1558,  1565,  1572,  1579,  1586,  1593,  1600,
    1607,  1614,  1621,  1631,  1638,  1645,  1652,  1659,  1667,  1674,
    1681,  1688,  1695,  1703,  1711,  1722,  1726,  1730,  1737,  1744,
    1751,  1758,  1765,  1772,  1779,  1786,  1796,  1803,  1810,  1818,
    1825,  1832,  1839,  1848,  1855,  1862,  1869,  1876,  1883,  1898,
    1905,  1912,  1923,  1934,  1941,  1955,  1982,  1988,  1994,  2000,
    2005,  2010,  2035,  2058,  2099,  2139,  2179,  2219,  2259,  2297,
    2335,  2370,  2405,  2440,  2471,  2501,  2532,  2567,  2602,  2631,
    2660,  2689,  2721,  2753,  2785,  2817,  2849,  2879,  2910,  2942,
    2972,  3004,  3036,  3068,  3100,  3131,  3163,  3195,  3227,  3259,
    3300,  3331,  3362,  3393,  3424,  3455,  3486,  3519,  3550,  3576,
    3607,  3638,  3669,  3702,  3733,  3764,  3795,  3821,  3852,  3883,
    3912,  3944,  3976,  4008,  4040,  4072,  4104,  4136,  4168,  4200,
    4232,  4264,  4296,  4328,  4360,  4392,  4424,  4456,  4488,  4520,
    4553,  4585,  4616,  4654,  4689,  4725,  4760,  4795,  4830,  4865,
    4900,  4935,  4971,  5007,  5044,  5080,  5116,  5153,  5188,  5219,
    5251,  5283,  5315,  5347,  5379,  5411,  5443,  5472,  5504,  5536,
    5566,  5596,  5627,  5656,  5687,  5718,  5749,  5780,  5809,  5838,
    5867,  5896,  5928,  5959,  5990,  6022,  6053,  6084,  6115,  6146,
    6177,  6208,  6239,  6270,  6299,  6330,  6361,  6392,  6423,  6454,
    6487,  6518,  6549,  6580,  6611,  6642,  6675,  6706,  6737,  6768,
    6799,  6830,  6861,  6893,  6925,  6957,  6989,  7021,  7052,  7082,
    7114,  7144,  7174,  7206,  7236,  7266,  7298,  7298,  7315,  7324,
    7919,  7933,  7945,  7957,  7971,  7983,  7995,  8009,  8019,  8057,
    8063,  8084,  8102,  8123,  8136,  8149,  8165,  8174,  8181,  8182,
    8183,  8184,  8185,  8186,  8187,  8188,  8189,  8190,  8191,  8192,
    8193,  8194,  8195,  8196
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_BATTALERTFRAC", "T_BATTLEAK",
  "T_BATTCF", "T_BATTILEAK", "T_BATTETALUT", "T_BATTETALUTNENTRIES",
  "T_BATTINOMINAL", "T_BATTNODEATTACH", "T_BATTRF", "T_BATTSTATS",
  "T_BATTVBATTLUT", "T_BATTVBATTLUTNENTRIES", "T_BATTVLOSTLUT",
  "T_BATTVLOSTLUTNENTRIES", "T_PCBT", "T_CACHEINIT", "T_CACHEOFF",
  "T_CACHESTATS", "T_CD", "T_CLOCKINTR", "T_COMMENT", "T_CONT",
  "T_DISABLEPIPELINE", "T_DUMPALL", "T_DUMPMEM", "T_DUMPPIPE",
  "T_DUMPDISTRIBUTION", "T_DUMPPWR", "T_DUMPREGS", "T_DUMPSYSREGS",
  "T_DUMPTIME", "T_DUMPTLB", "T_DYNINSTR", "T_EBATTINTR", "T_EFAULTS",
  "T_ENABLEPIPELINE", "T_FILE2NETSEG", "T_FLTTHRESH", "T_FORCEAVGPWR",
  "T_HELP", "T_IGNORENODEDEATHS", "T_INITSEESTATE", "T_HWSEEREG",
  "T_REGISTERRVAR", "T_INITRANDTABLE", "T_DEFNDIST", "T_RANDPRINT",
  "T_LOAD", "T_LOCSTATS", "T_LISTRVARS", "T_MALLOCDEBUG", "T_MMAP",
  "T_MODECA", "T_MODEFF", "T_NETCORREL", "T_NETDEBUG", "T_NETNEWSEG",
  "T_NETNODENEWIFC", "T_NETSEG2FILE", "T_NETSEGDELETE",
  "T_NETSEGFAILDURMAX", "T_NETSEGFAILPROB", "T_NETSEGFAILPROBFN",
  "T_NETSEGNICATTACH", "T_NETSEGPROPMODEL", "T_NEWBATT", "T_NEWNODE",
  "T_NODEFAILDURMAX", "T_NODEFAILPROB", "T_NODEFAILPROBFN", "T_NODETACH",
  "T_NUMAREGION", "T_NUMASTATS", "T_NUMASTATSALL", "T_NUMASETMAPID",
  "T_ADDVALUETRACE", "T_DELVALUETRACE", "T_REGISTERSTABS", "T_VALUESTATS",
  "T_OFF", "T_ON", "T_PAUINFO", "T_NANOPAUSE", "T_PAUSE", "T_PFUN",
  "T_PIPEFLUSH", "T_POWERSTATS", "T_POWERTOTAL", "T_PWD", "T_PARSEOBJDUMP",
  "T_QUIT", "T_GETRANDOMSEED", "T_SETRANDOMSEED", "T_RATIO",
  "T_RENUMBERNODES", "T_RESETNODECTRS", "T_RESETALLCTRS", "T_RESETCPU",
  "T_RETRYALG", "T_RUN", "T_SAVE", "T_SENSORSDEBUG", "T_SETBASENODEID",
  "T_SETBATT", "T_SETBATTFEEDPERIOD", "T_SETDUMPPWRPERIOD",
  "T_SETNETPERIOD", "T_SETFAULTPERIOD", "T_SETFREQ", "T_SETIFCOUI",
  "T_SETMEMBASE", "T_SETNODE", "T_SETPC", "T_SETPHYSICSPERIOD",
  "T_SETQUANTUM", "T_SETSCALEALPHA", "T_SETSCALEK", "T_SETSCALEVT",
  "T_SETSCHEDRANDOM", "T_SETSCHEDROUNDROBIN", "T_SETTAG",
  "T_SETTIMERDELAY", "T_SETVDD", "T_SETMEMRLATENCY", "T_SETMEMWLATENCY",
  "T_SETFLASHRLATENCY", "T_SETFLASHWLATENCY", "T_SETNODEMASS",
  "T_SETPROPULSIONCOEFFS", "T_SHAREBUS", "T_SHOWCLK", "T_SHOWMEMBASE",
  "T_SHOWPIPE", "T_SHOWTAGS", "T_SIGNALSRC", "T_SIGNALSUBSCRIBE",
  "T_SIZEMEM", "T_SIZEPAU", "T_SPLIT", "T_SRECL", "T_STEP", "T_STOP",
  "T_SFATAL", "T_TRACE", "T_THROTTLE", "T_THROTTLEWIN", "T_VERBOSE",
  "T_VERSION", "T_SETLOC", "T_BPT", "T_BPTLS", "T_BPTDEL", "T_GLOBALTIME",
  "T_CYCLES", "T_INSTRS", "T_SENSORREADING", "T_DOTALIGN", "T_DOTORG",
  "T_DOTDATA", "T_DOTTEXT", "T_DOTGLOBAL", "T_DOTFILE", "T_DOTLONG",
  "T_DOTCOMM", "T_R0", "T_R1", "T_R2", "T_R3", "T_R4", "T_R5", "T_R6",
  "T_R7", "T_R8", "T_R9", "T_R10", "T_R11", "T_R12", "T_R13", "T_R14",
  "T_R15", "T_GBR", "T_VBR", "T_MACH", "T_MACL", "T_PC", "T_PR", "T_TRA",
  "T_SPC", "T_SR", "T_SSR", "T_LABELDEFN", "T_ADD", "T_ADDC", "T_ADDV",
  "T_AND", "T_ANDB", "T_BF", "T_BFS", "T_BRA", "T_BRAF", "T_BSR", "T_BSRF",
  "T_BT", "T_BTS", "T_CLRMAC", "T_CLRS", "T_CLRT", "T_CMPEQ", "T_CMPGE",
  "T_CMPGT", "T_CMPHI", "T_CMPHS", "T_CMPPL", "T_CMPPZ", "T_CMPSTR",
  "T_DIV0S", "T_DIV0U", "T_DIV1", "T_DMULSL", "T_DMULUL", "T_DT",
  "T_EXTSB", "T_EXTSW", "T_EXTUB", "T_EXTUW", "T_JMP", "T_JSR", "T_LDC",
  "T_LDCL", "T_LDS", "T_LDSL", "T_LDTLB", "T_MACW", "T_MOV", "T_MOVB",
  "T_MOVL", "T_MOVW", "T_MOVA", "T_MOVT", "T_MULL", "T_MULS", "T_MULSW",
  "T_MULU", "T_MULUW", "T_NEG", "T_NEGC", "T_NOP", "T_NOT", "T_OR",
  "T_ORB", "T_PREF", "T_RFG", "T_ROTCL", "T_ROTCR", "T_ROTL", "T_ROTR",
  "T_RTE", "T_RTS", "T_SETS", "T_SETT", "T_SHAD", "T_SHAL", "T_SHAR",
  "T_SHLD", "T_SHLL", "T_SHLL2", "T_SHLL8", "T_SHLL16", "T_SHLR",
  "T_SHLR2", "T_SHLR8", "T_SHLR16", "T_SLEEP", "T_STC", "T_STCL", "T_STS",
  "T_STSL", "T_SUB", "T_SUBC", "T_SUBV", "T_SWAPB", "T_SWAPW", "T_TASB",
  "T_TRAPA", "T_TST", "T_TSTB", "T_XOR", "T_XORB", "T_XTRCT", "T_LABEL",
  "T_STRING", "T_MAN", "'\\n'", "'{'", "','", "'}'", "'#'", "'@'", "'('",
  "')'", "'+'", "'-'", "'<'", "\"rnd\"", "'>'", "$accept", "input", "line",
  "asm_ctl", "expr", "sf_cmd", "dotalign", "dotdata", "dottext",
  "dotglobal", "dotfile", "dotorg", "dotlong", "dotcomm", "add_instr",
  "addi_instr", "addc_instr", "addv_instr", "and_instr", "andi_instr",
  "andm_instr", "bf_instr", "bfs_instr", "bra_instr", "braf_instr",
  "bsr_instr", "bsrf_instr", "bt_instr", "bts_instr", "clrmac_instr",
  "clrs_instr", "clrt_instr", "cmpeq_instr", "cmpge_instr", "cmpgt_instr",
  "cmphi_instr", "cmphs_instr", "cmppl_instr", "cmppz_instr",
  "cmpstr_instr", "cmpim_instr", "div0s_instr", "div1_instr",
  "dmuls_instr", "dmulu_instr", "dt_instr", "extsb_instr", "extsw_instr",
  "extub_instr", "extuw_instr", "jmp_instr", "jsr_instr", "ldcsr_instr",
  "ldcgbr_instr", "ldcvbr_instr", "ldcssr_instr", "ldcspc_instr",
  "ldcr_bank_instr", "ldcmsr_instr", "ldcmgbr_instr", "ldcmvbr_instr",
  "ldcmssr_instr", "ldcmspc_instr", "ldcmr_bank_instr", "ldsmach_instr",
  "ldsmacl_instr", "ldspr_instr", "ldsmmach_instr", "ldsmmacl_instr",
  "ldsmpr_instr", "ldtlb_instr", "macl_instr", "macw_instr", "mov_instr",
  "movbs_instr", "movws_instr", "movls_instr", "movbl_instr",
  "movwl_instr", "movll_instr", "movbm_instr", "movwm_instr",
  "movlm_instr", "movbp_instr", "movwp_instr", "movlp_instr",
  "movbs0_instr", "movws0_instr", "movls0_instr", "movbl0_instr",
  "movwl0_instr", "movll0_instr", "movi_instr", "movwi_instr",
  "movli_instr", "movblg_instr", "movwlg_instr", "movllg_instr",
  "movbsg_instr", "movwsg_instr", "movlsg_instr", "movbs4_instr",
  "movws4_instr", "movls4_instr", "movbl4_instr", "movwl4_instr",
  "movll4_instr", "mova_instr", "movt_instr", "mull_instr", "muls_instr",
  "mulsw_instr", "mulu_instr", "muluw_instr", "neg_instr", "negc_instr",
  "nop_instr", "not_instr", "or_instr", "ori_instr", "orm_instr",
  "pref_instr", "rfg_instr", "rotcl_instr", "rotcr_instr", "rotl_instr",
  "rotr_instr", "rte_instr", "rts_instr", "sets_instr", "sett_instr",
  "shad_instr", "shal_instr", "shar_instr", "shld_instr", "shll_instr",
  "shll2_instr", "shll8_instr", "shll16_instr", "shlr_instr",
  "shlr2_instr", "shlr8_instr", "shlr16_instr", "sleep_instr",
  "stcsr_instr", "stcgbr_instr", "stcvbr_instr", "stcssr_instr",
  "stcspc_instr", "stcr_bank_instr", "stcmsr_instr", "stcmgbr_instr",
  "stcmvbr_instr", "stcmssr_instr", "stcmspc_instr", "stcmr_bank_instr",
  "stsmach_instr", "stsmacl_instr", "stspr_instr", "stsmmach_instr",
  "stsmmacl_instr", "stsmpr_instr", "sub_instr", "subc_instr",
  "subv_instr", "swapb_instr", "swapw_instr", "tas_instr", "trapa_instr",
  "tst_instr", "tsti_instr", "tstb_instr", "xor_instr", "xori_instr",
  "xorm_instr", "xtrct_instr", "rnd", "rnd_const", "rnd_var", "uimm",
  "simm", "dimm", "rdimm", "dimmlist", "dimmlistbody", "disp", "optstring",
  "reg", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,    10,   123,    44,   125,    35,
      64,    40,    41,    43,    45,    60,   550,    62
};
# endif

#define YYPACT_NINF -775

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-775)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -775,  2610,  -775,  -284,  -284,  -284,  -282,  -282,  -284,  -282,
    -284,  -282,  -282,  -282,  -282,  -282,  -268,  -282,  -261,  -239,
    -225,  -282,  -223,  -282,  -215,  -188,  -282,  -189,  -187,  -185,
    -180,  -177,  -176,  -282,  -282,  -175,  -186,  -282,  -284,  -174,
    -282,  -167,  -164,  -162,  -161,  -160,  -159,  -158,  -157,  -156,
    -155,  -282,  -154,  -120,  -282,  -118,  -282,  -282,  -282,  -282,
    -282,  -282,  -117,  -282,  -282,  -282,  -114,  -282,  -284,  -113,
    -282,  -112,   -84,   -79,  -282,  -110,   -88,   -87,   -57,   -54,
     -52,   -51,  -282,  -282,   -48,   -49,   -47,   -46,   -23,   -22,
     -21,  -282,   -20,   -19,   -18,   -17,   -14,  -282,  -114,  -282,
    -775,  -282,  -282,  -284,  -284,  -284,  -284,  -284,  -282,  -282,
    -282,  -282,  -284,  -282,  -284,  -284,  -284,   -13,   -12,  -284,
    -284,  -282,  -282,  -282,  -282,  -284,  -284,  -282,   -11,  -775,
     -10,  -282,  -282,  -282,  -282,  -282,    -7,  -271,    -6,    -5,
    -282,  -282,  -282,    -4,  -775,  -284,  -105,    -1,  -282,  -282,
    -282,  -775,  -775,  -249,     2,  -249,  -249,  -163,  1817,   220,
    1034,  1034,   236,  -121,  -249,  -249,   -24,  -249,  1034,  -249,
    -249,  -775,  -775,  -775,   334,  1034,  1034,  1034,  1034,  1034,
    1034,  1034,  1034,  1034,  1034,  1034,  1034,  1034,  1034,  1034,
    1034,   -58,   -29,  1034,   -28,  1034,    13,  -775,    14,   515,
     173,   -83,   200,    15,  1034,  1034,  1034,  1034,  1034,  1034,
    1034,  1034,  -775,  1034,   531,    -9,    16,    19,  1034,  1034,
    1034,  1034,  -775,  -775,  -775,  -775,  1034,  1034,  1034,  1034,
    1034,  1034,  1034,  1034,  1034,  1034,  1034,  1034,  -775,   618,
     664,  -125,  -119,  1034,  1034,  1034,  1034,  1034,    17,    21,
     566,    22,   602,    40,  1034,    62,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,    65,    67,    66,    68,    69,  -775,  -284,    71,
      88,    89,    90,   124,  -284,   125,  -284,   126,  -775,  -282,
    -775,  -775,   127,   128,  -775,   129,  -775,   132,  -282,  -775,
    -775,  -775,  -775,  -775,  -775,   131,   133,  -775,  -282,   134,
    -284,  -775,   135,  -284,  -282,  -282,   139,   137,  -284,   141,
    -775,  -775,  -775,  -282,  -775,  -775,  -282,  -775,  -282,  -284,
     144,   143,  -282,  -284,   145,  -282,  -282,  -284,  -775,  -267,
     147,   149,   150,   151,  -282,  -775,  -775,  -282,  -282,  -282,
     152,  -775,  -775,  -775,  -775,   153,   154,   155,  -775,  -775,
    -775,   157,  -775,  -775,   158,  -775,  -775,  -775,  -775,  -775,
     146,   159,  -282,   160,   161,  -775,  -775,  -775,  -775,   163,
     166,  -775,   165,   167,  -775,   168,   169,   170,   171,  -775,
    -775,  -775,   174,   176,   179,   181,   182,   183,  -284,   184,
    -775,  -775,  -114,  -282,   185,   186,  -282,   187,  -775,   188,
    -775,   189,   190,   192,   193,  -775,  -284,  -282,  -282,  -282,
    -282,  -775,   194,  -775,  -775,  -775,  -775,   175,   198,  -775,
    -775,  -775,   -50,  1034,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -245,   164,   195,   196,  -245,   199,  -245,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -245,   201,   221,   223,
     224,   225,  -775,  -775,   226,   227,   228,   229,   230,  -775,
     231,   232,   233,   234,  1034,  1034,   235,  1034,   237,  1034,
    1034,  -245,   239,   241,    85,   243,   249,   130,   251,   252,
     253,   156,   255,  -165,  -775,   257,   260,   261,   262,   263,
     264,   265,   268,  -245,   269,  -245,  1034,  -245,  -775,  -775,
    -775,  -775,   271,  -775,  -775,   272,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,   275,   277,   278,   279,   280,   281,
     282,   283,   285,   286,   288,   295,   299,   301,   302,   304,
     305,   306,   308,   309,   310,   311,   312,  1034,  -245,  -245,
     313,  -245,  -245,   314,  -245,   317,  -775,  -775,  -775,  -775,
    -775,  -775,   202,  -775,  -775,  -775,  -775,  -775,   222,  -775,
     238,  -775,  -282,  -775,  -775,  -775,   322,   321,  -775,  -775,
     323,  -775,  -775,  -775,  -284,  -282,   324,  -284,   138,  -284,
    -775,   325,  -284,  -282,  -284,   327,  -775,   328,   329,  -775,
     330,  -284,   331,  -775,  -124,    56,  -775,  -775,  -775,  -775,
    -263,  -775,  -775,  -775,  -775,  -282,   333,  -282,  -282,  -775,
    -775,  -775,  -775,  -775,  -775,   335,  -775,   326,  -775,  -775,
    -775,   339,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -284,  -775,  -284,  -775,  -775,  -775,
    -282,  -775,  -775,  -775,  -775,  -775,  -775,  -284,   340,   341,
     347,  -284,  -775,  -775,  -775,   351,   -16,  -775,   352,   353,
     350,  1034,  1034,  1034,   358,  1034,   359,   361,  1034,  1034,
    1034,  1034,  1034,  1034,  1034,  1034,  1034,  1034,  1034,  1034,
    1034,  1034,  -775,  -775,   699,   148,  -115,   345,   346,   362,
    1034,   360,   -91,  -287,   366,   368,   -89,  -272,  1034,   369,
     373,   -85,  -258,   374,  -249,  1034,  1034,  1034,  1034,  1034,
    1034,  1034,  1034,   378,  1034,   379,  -775,  -775,  1034,  1034,
    1034,  1034,  1034,  1034,  1034,  1034,   377,   381,   414,   415,
     416,   417,  1034,  1034,  1034,   418,   419,   421,  1034,  1034,
    1034,  1034,  1034,  -775,  -775,   425,  1034,   426,   428,  1034,
     429,  1034,  -775,  -775,  -775,   355,   432,  -775,  -775,  -284,
    -282,  -284,  -284,  -284,   431,  -284,  -775,   435,  -282,  -284,
    -775,  -775,  -775,  -775,  -775,  -775,   438,   456,  -263,  -245,
    -775,  -282,  -282,  -775,   455,  -775,  -284,  -284,   459,   458,
    -775,  -775,  -775,   460,  -775,   461,  -775,  -775,  1034,  -775,
    -775,  -775,   590,  -775,   462,   593,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,   466,  -775,  -775,  -775,
     467,   468,  1034,  -775,   465,   470,   506,  1034,   507,    -8,
     504,   509,   510,  1034,   518,  -775,    18,   511,   519,   520,
    1034,   521,    55,   522,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,   653,  -775,   523,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,   123,   191,   517,   525,   545,   546,  -775,
    -775,  -775,   547,   548,   549,  -775,  -775,  -775,  -775,  -775,
     655,  -775,   526,   658,  -775,   527,  -775,  -775,  -775,  -284,
     562,  -284,  -284,  -775,  -251,   138,  -284,  -775,  -282,  -284,
    -284,  -284,  -231,  -245,  -282,  -282,  -775,  -284,  -284,   563,
    -775,  -775,   559,  -775,  -775,   560,  -775,   735,  -111,   564,
    -775,  -249,  1034,   965,  -775,  1034,   693,  1034,  -775,  -249,
    1034,   873,  -775,  1034,   -53,  1034,  -775,  -249,  1034,   944,
    -775,  1034,   695,  1034,  -775,   105,  -775,   583,  1034,  1034,
    1034,  1034,  1034,  1034,  1034,  1034,  1034,  -775,   584,  -775,
     585,   570,  -775,  -284,  -284,  -284,  -775,   589,  -284,  -282,
    -282,  -284,  -284,  -282,  -775,  -245,  -282,  -282,  -284,  -284,
    -775,  1034,   721,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  1034,   595,   591,   592,   594,  -775,   598,  -775,
     600,   596,   597,   619,   620,  -775,   603,   623,  -775,   626,
     622,   627,   628,   629,  -775,   631,  -775,   630,   766,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,   767,   768,
    -284,  -284,  -284,  -775,  -775,  -284,  -284,  -284,  -284,  -284,
    -282,  -245,  -282,  -282,  -284,  -284,   634,   644,   640,  1000,
     647,   648,   650,  1034,   765,   652,   654,   656,   657,  1034,
    1034,  1017,   659,   660,   661,   663,  1034,   665,   668,   669,
     671,  -284,   662,  -284,   666,  -284,  -284,  -284,  -284,   674,
    -282,   675,   676,  -284,  -284,  -775,   769,  -775,   672,   678,
    1034,   783,   806,   679,   680,  1034,   809,  1034,  1034,   681,
     682,   683,   684,  1034,   810,  1034,   811,   685,   822,   807,
     808,   812,  -284,  -284,  -284,  -775,  -284,  -284,   694,   686,
    -775,  -282,  -775,  -775,  -284,  -284,   692,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,   697,   698,
     700,  -284,  -284,   701,  -282,  -282,  -775,  -775,  -282,  -284,
    -284,  -775,  -775,  -775,  -775,   704,  -284,  -775,  -284,  -282,
     706,  -284,  -284,  -284,  -284,  -284,   708,  -775,  -284,  -284,
    -284,   713,  -284,  -775,  -284,  -284,  -284,   712,   714,  -284,
    -284,  -284,  -775,  -775,  -284,  -284,   715,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,  -775,  -284,  -284,  -284,
    -775,  -284,  -284,  -114,  -282,  -284,  -284,  -284,  -282,  -114,
    -282,  -284,  -282,   716,  -775
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   526,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   526,     0,
     237,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   306,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   236,     0,     0,     0,     0,     0,
       0,   336,   337,     0,     0,     0,     0,     0,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   358,   359,   360,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   399,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   446,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   457,   458,   459,   460,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   473,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   334,     3,     7,     6,
       8,     9,    10,    11,    14,    12,    13,    15,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    58,    59,    60,
      61,    62,    57,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   150,
     151,   152,   153,   154,   149,   156,   157,   158,   159,   160,
     155,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   514,     0,     0,     0,     0,     0,   510,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   199,     0,
     248,   249,     0,     0,   333,     0,   286,     0,     0,   252,
     253,   250,   251,   265,   255,     0,     0,   287,     0,     0,
       0,   307,     0,     0,     0,     0,     0,     0,     0,     0,
     317,   318,   329,     0,   245,   246,     0,   321,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   527,     0,
       0,     0,     0,     0,     0,   262,   263,     0,     0,     0,
       0,   260,   320,   319,   330,     0,     0,     0,   309,   316,
     240,     0,   181,   267,     0,   266,   222,   223,   224,   254,
       0,     0,     0,     0,     0,   230,   235,   231,   232,     0,
       0,   305,     0,     0,   229,     0,     0,     0,     0,   218,
     219,   228,     0,     0,     0,     0,     0,     0,     0,     0,
     315,   310,   526,     0,     0,     0,     0,     0,   293,     0,
     289,     0,     0,     0,     0,   291,     0,     0,     0,     0,
       0,   204,     0,   335,   340,   522,   523,     0,     0,   338,
     339,   341,     0,     0,     5,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,     0,     0,     0,     0,     0,     0,     0,   350,   351,
     352,   353,   354,   355,   356,   357,     0,     0,     0,     0,
       0,     0,   366,   367,     0,     0,     0,     0,     0,   374,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   438,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   453,   454,
     455,   456,     0,   462,   463,     0,   465,   466,   467,   468,
     469,   470,   471,   472,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   308,   516,   515,   270,
     189,   188,     0,   193,   190,   185,   191,   186,     0,   195,
       0,   197,     0,   227,   288,   313,     0,     0,   269,   326,
       0,   325,   233,   214,     0,     0,     0,     0,     0,     0,
     295,     0,     0,     0,     0,     0,   279,     0,     0,   281,
       0,     0,     0,   182,     0,     0,   518,   506,   507,   517,
       0,   272,   271,   280,   256,     0,     0,     0,     0,   259,
     331,   332,   327,   241,   268,     0,   292,     0,   221,   198,
     302,     0,   243,   296,   220,   215,   216,   217,   297,   298,
     299,   300,   301,   303,     0,   314,     0,   238,   282,   283,
       0,   312,   294,   290,   322,   323,   324,     0,     0,     0,
       0,     0,   205,   524,   525,     0,     0,   511,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   379,   380,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   451,   452,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   497,   498,     0,     0,     0,     0,     0,
       0,     0,   192,   194,   196,     0,     0,   285,   226,     0,
       0,     0,     0,     0,     0,     0,   244,     0,     0,     0,
     225,   273,   275,   276,   234,   187,     0,     0,     0,     0,
     264,     0,     0,   207,     0,   328,     0,     0,     0,     0,
     200,   201,   202,     0,   342,     0,   513,   512,     0,   343,
     345,   346,     0,   347,     0,     0,   361,   362,   363,   364,
     365,   368,   370,   371,   372,   373,   375,   376,   377,   378,
     382,   383,   385,   381,   384,   386,     0,   393,   394,   395,
       0,     0,     0,   402,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   424,     0,     0,     0,     0,
       0,     0,     0,     0,   439,   440,   441,   442,   443,   444,
     445,   447,     0,   448,     0,   461,   464,   475,   476,   478,
     474,   477,   479,     0,     0,     0,     0,     0,     0,   486,
     487,   488,     0,     0,     0,   492,   493,   494,   495,   496,
       0,   499,     0,     0,   502,     0,   505,   247,   242,     0,
       0,     0,     0,   520,     0,     0,     0,   277,     0,     0,
       0,     0,     0,     0,     0,     0,   311,     0,     0,     0,
     206,   203,     0,   344,   348,     0,   369,     0,     0,     0,
     421,     0,     0,     0,   406,     0,     0,     0,   403,     0,
       0,     0,   408,     0,     0,     0,   405,     0,     0,     0,
     407,     0,     0,     0,   404,     0,   449,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   500,     0,   503,
       0,     0,   212,     0,     0,     0,   519,     0,     0,     0,
       0,     0,     0,     0,   183,     0,     0,     0,     0,     0,
     284,     0,     0,   388,   389,   391,   387,   390,   392,   396,
     397,   398,     0,     0,     0,     0,     0,   412,     0,   409,
       0,     0,     0,     0,     0,   414,     0,     0,   411,     0,
       0,     0,     0,     0,   413,     0,   410,     0,     0,   481,
     482,   484,   480,   483,   485,   489,   490,   491,     0,     0,
       0,     0,     0,   521,   211,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   400,     0,   401,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   208,     0,     0,     0,     0,
     184,     0,   257,   258,     0,     0,     0,   428,   431,   418,
     425,   434,   415,   430,   420,   427,   423,   436,   417,   433,
     429,   432,   419,   426,   422,   435,   416,   437,     0,     0,
       0,     0,     0,     0,     0,     0,   509,   508,     0,     0,
       0,   349,   450,   501,   504,     0,     0,   210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   261,     0,     0,
       0,     0,     0,   278,     0,     0,     0,     0,     0,     0,
       0,     0,   209,   274,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   304,     0,     0,     0,
     213,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   239
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -775,  -775,  -775,  -775,   852,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,
    -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,  -775,   530,
    -594,    -3,  -774,   -73,  -775,  -152,   -90,  1319
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   776,   777,   778,   438,
     840,   779,   780,   944,  1084,   589,   499,   612
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     434,   435,   436,   591,   592,   440,   958,   442,   531,   431,
    1017,   437,   618,   619,   620,   622,  1018,   624,   625,   432,
     433,   844,   437,   846,   568,  1023,   431,   448,   773,   774,
     431,  1024,   847,   774,   450,   470,   432,   433,   775,  1030,
     432,   433,   775,   585,   586,  1031,  1155,  1156,   837,   658,
     577,   578,   579,   580,   587,   588,   451,   869,   838,   839,
     706,   707,  1163,   708,  1164,   501,   709,   710,   452,   711,
    1007,  1008,   454,  1009,  1179,  1180,  1015,  1181,  1021,   893,
     456,   895,  1028,   897,   656,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
     535,   536,   537,   538,   539,   457,   459,   468,   460,   544,
     461,   546,   547,   548,  1196,   462,   551,   552,   463,   464,
     467,   471,   557,   558,   924,   925,   473,   927,   928,   474,
     930,   475,   476,   477,   478,   479,   884,   593,   480,   481,
     482,   484,   576,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   607,   608,   609,   610,   485,   494,   487,   617,   498,
     502,   504,   956,   508,  1092,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   607,   608,   609,
     610,   585,   586,   585,   586,   509,   510,   585,   586,   585,
     586,   505,   587,   588,   587,   588,   506,   657,   587,   588,
     587,   588,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,   511,   585,
     586,   512,   644,   513,   514,   517,   518,   835,   519,   520,
     587,   588,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,   585,   586,
     521,   645,   647,   522,   523,   525,   526,   527,   528,   587,
     588,   529,   549,   550,   560,   561,   567,   975,   571,   570,
     675,   575,  1207,  1116,   581,   590,  1117,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   610,   649,   650,   663,   676,   717,   677,  1124,
     718,   721,  1125,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,   724,
     653,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,  1132,   726,   727,  1133,
     728,   729,   957,   730,   731,  1093,   733,   660,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   610,   734,   735,   736,   872,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   610,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,   737,
     739,   741,   743,   744,   745,   746,   748,  1138,   749,   751,
     753,   876,   757,   758,   943,   732,   760,   765,   766,   795,
     769,   738,   781,   740,   782,   783,   784,   789,   790,   791,
     792,  1006,   793,   794,   796,   798,   799,   881,   800,   801,
     802,   841,   803,   804,   805,   806,   807,   752,   833,   808,
     754,   809,   816,   654,   810,   759,   811,   812,   813,   815,
     818,   819,   821,   822,   823,   824,   764,   825,   826,   832,
     768,   834,   842,   843,   772,  1139,   845,   932,   848,  1165,
     661,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,   933,   849,   611,
     850,   851,   852,   853,   854,   855,   856,   857,   858,   859,
     860,   861,   864,   934,   866,   615,   870,   439,   871,   441,
     874,   443,   444,   445,   446,   447,   875,   449,   878,   879,
     880,   453,   883,   455,   885,   814,   458,   886,   887,   888,
     889,   890,   891,   465,   466,   892,   894,   469,   898,   899,
     472,  1231,   900,   827,   901,   902,   903,   904,   905,   906,
     907,   483,   908,   909,   486,   910,   488,   489,   490,   491,
     492,   493,   911,   495,   496,   497,   912,   500,   913,   914,
     503,   915,   916,   917,   507,   918,   919,   920,   921,   922,
     926,   929,   515,   516,   931,   936,   937,   941,   938,   964,
     946,   524,   950,   951,   952,   953,   955,   530,   960,   532,
     963,   533,   534,   626,   965,   970,   971,  1270,   540,   541,
     542,   543,   972,   545,   974,   976,   977,   978,  1010,  1011,
    1077,   553,   554,   555,   556,   982,   984,   559,   985,  1012,
    1014,   562,   563,   564,   565,   566,  1019,   569,  1020,  1026,
     572,   573,   574,  1027,  1032,  1042,  1044,  1053,   582,   583,
     584,  1054,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,  1055,  1056,  1057,  1058,  1062,  1063,
    1016,  1064,  1070,  1072,  1022,  1073,  1075,  1078,  1085,  1029,
    1087,  1090,  1033,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,  1091,
    1096,   939,  1099,  1100,   942,  1101,   945,  1104,  1102,   947,
    1106,   949,  1105,  1107,  1108,  1109,  1111,  1112,   954,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   607,   608,   609,   610,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   607,   608,   609,
     610,   694,   695,  1113,  1115,  1119,  1120,  1121,   696,   697,
     698,   966,  1127,   967,   651,  1123,  1128,  1129,  1131,  1135,
    1136,  1140,  1147,  1137,   969,  1149,  1148,  1150,   973,  1141,
     673,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,   700,   701,  1142,
    1143,  1144,  1145,  1146,   702,   703,   704,  1152,  1170,  1171,
    1188,  1172,  1205,  1220,  1182,   719,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,  1000,  1001,  1208,  1218,  1219,  1224,  1237,  1002,
    1003,  1004,  1239,  1240,  1241,  1243,  1242,  1244,  1245,  1246,
    1249,   722,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,  1173,  1174,
    1250,  1247,  1248,  1251,  1252,  1175,  1176,  1177,  1256,  1253,
    1254,  1255,  1257,  1258,  1259,  1260,  1079,  1275,  1081,  1082,
    1083,  1276,  1086,  1277,  1280,  1281,  1089,  1282,  1284,  1285,
    1320,  1286,  1316,  1287,  1288,  1303,  1293,  1294,  1295,  1183,
    1296,  1305,  1298,  1097,  1098,  1299,  1300,  1190,  1301,  1310,
    1312,  1313,  1197,  1321,  1317,  1199,  1325,  1333,  1335,   742,
    1318,  1322,  1323,  1328,  1329,  1330,  1331,  1336,   747,  1337,
    1338,  1339,  1346,  1347,  1351,  1340,  1357,  1363,   750,  1352,
    1353,  1367,  1354,  1373,   755,   756,  1377,  1382,  1389,  1383,
     594,  1414,  1157,   761,     0,     0,   762,     0,   763,     0,
       0,     0,   767,     0,     0,   770,   771,     0,     0,     0,
       0,     0,     0,     0,   785,     0,     0,   786,   787,   788,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,  1192,     0,     0,     0,
    1193,     0,   797,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1151,     0,  1153,  1154,
       0,     0,     0,  1158,     0,     0,  1160,  1161,  1162,     0,
       0,     0,     0,   817,  1168,  1169,   820,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   828,   829,   830,
     831,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,  1201,     0,     0,
       0,  1202,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,  1185,     0,
    1221,  1222,  1223,     0,     0,  1225,     0,     0,  1228,  1229,
       0,     0,     0,     0,     0,  1234,  1235,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   610,  1278,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
    1291,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,  1261,  1262,  1263,
       0,     0,  1264,  1265,  1266,  1267,  1268,     0,     0,     0,
       0,  1273,  1274,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1302,     0,
    1304,     0,  1306,  1307,  1308,  1309,     0,     0,     0,     0,
    1314,  1315,   935,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   940,     0,     0,     0,     0,
       0,     0,     0,   948,     0,     0,     0,     0,     0,  1341,
    1342,  1343,     0,  1344,  1345,     0,     0,     0,     0,     0,
       0,  1349,  1350,  1404,     0,   959,     0,   961,   962,  1410,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1355,  1356,
       0,     0,     0,     0,     0,     0,  1361,  1362,     0,     0,
     968,     0,     0,  1364,     0,  1365,     0,     0,  1368,  1369,
    1370,  1371,  1372,     0,     0,  1374,  1375,  1376,     0,  1378,
       0,  1379,  1380,  1381,     0,     0,  1384,  1385,  1386,     0,
       0,  1387,  1388,     0,  1390,  1391,  1392,  1393,  1394,  1395,
    1396,  1397,  1398,     0,  1399,  1400,  1401,     0,  1402,  1403,
       0,     0,  1406,  1407,  1408,     0,     0,     0,  1412,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1080,     0,     0,     0,     0,     0,     0,     0,  1088,   613,
     614,   616,     0,     0,     0,   621,     0,   623,     0,     0,
       0,  1094,  1095,   627,   628,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
       0,     0,   646,     0,   648,     0,     0,     0,   652,   655,
     659,   662,     0,   664,   665,   666,   667,   668,   669,   670,
     671,     0,   672,   674,     0,     0,     0,   678,   679,   680,
     681,     0,     0,     0,     0,   682,   683,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,     0,   699,   705,
       0,     0,   712,   713,   714,   715,   716,     0,     0,   720,
       0,   723,     0,   725,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1159,     0,
       0,     0,     0,     0,  1166,  1167,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1226,
    1227,     0,     0,  1230,     0,     0,  1232,  1233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1269,     0,  1271,  1272,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1311,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1348,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1358,  1359,     0,     0,  1360,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1366,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   836,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1405,     0,     0,     0,  1409,     0,
    1411,     0,  1413,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   862,   863,     0,   865,     0,   867,   868,
       0,     0,     0,   873,     0,     0,   877,     0,     0,     0,
     882,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   896,     0,     0,     0,     0,
       0,     0,     0,   157,     0,     0,     0,     0,     0,     0,
       0,   159,   160,   161,   162,   163,   164,   165,   166,     0,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   923,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     979,   980,   981,     0,   983,     0,     0,   986,   987,   988,
     989,   990,   991,   992,   993,   994,   995,   996,   997,   998,
     999,     0,     0,  1005,     0,     0,     0,     0,     0,  1013,
       0,     0,     0,     0,     0,     0,     0,  1025,     0,     0,
       0,     0,     0,     0,  1034,  1035,  1036,  1037,  1038,  1039,
    1040,  1041,     0,  1043,     0,     0,     0,  1045,  1046,  1047,
    1048,  1049,  1050,  1051,  1052,     0,     0,     0,     0,     0,
       0,  1059,  1060,  1061,     0,     0,     0,  1065,  1066,  1067,
    1068,  1069,     0,     0,     0,  1071,     0,     0,  1074,     0,
    1076,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1103,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1110,     0,     0,     0,     0,  1114,     0,  1118,     0,
       0,     0,  1122,     0,     0,  1126,     0,     0,     0,  1130,
       0,  1134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1178,     0,     0,     0,
       0,  1184,  1186,     0,  1187,     0,  1189,     0,     0,  1191,
    1194,     0,  1195,     0,  1198,     0,     0,  1200,  1203,     0,
    1204,     0,  1206,     0,     0,     0,     0,  1209,  1210,  1211,
    1212,  1213,  1214,  1215,  1216,  1217,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1238,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1279,     0,
       0,     0,  1283,     0,     0,     0,     0,     0,  1289,  1290,
    1292,     0,     0,     0,     0,  1297,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1319,
       0,     0,     0,     0,  1324,     0,  1326,  1327,     0,     0,
       2,     0,  1332,     3,  1334,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,    29,    30,     0,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
       0,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,     0,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,     0,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,     0,     0,   149,
     150,   151,   152,   153,   154,   155,   156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   157,     0,     0,     0,
       0,     0,     0,   158,   159,   160,   161,   162,   163,   164,
     165,   166,     0,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,     0,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,     0,     0,   255,   256
};

static const yytype_int16 yycheck[] =
{
       3,     4,     5,   155,   156,     8,   780,    10,    98,   293,
     297,   293,   164,   165,   166,   167,   303,   169,   170,   303,
     304,   615,   293,   617,   295,   297,   293,   295,   295,   296,
     293,   303,   626,   296,   295,    38,   303,   304,   305,   297,
     303,   304,   305,   292,   293,   303,   297,   298,   293,   201,
     155,   156,   157,   158,   303,   304,   295,   651,   303,   304,
     185,   186,   293,   188,   295,    68,   185,   186,   293,   188,
     185,   186,   295,   188,   185,   186,   167,   188,   167,   673,
     295,   675,   167,   677,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     103,   104,   105,   106,   107,   293,   295,   293,   295,   112,
     295,   114,   115,   116,   167,   295,   119,   120,   295,   295,
     295,   295,   125,   126,   718,   719,   293,   721,   722,   293,
     724,   293,   293,   293,   293,   293,   301,   300,   295,   295,
     295,   295,   145,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   295,   293,   295,   299,   293,
     293,   293,   306,   293,   958,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   292,   293,   292,   293,   293,   293,   292,   293,   292,
     293,   295,   303,   304,   303,   304,   295,   300,   303,   304,
     303,   304,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   295,   292,
     293,   295,   300,   295,   295,   293,   295,   297,   295,   295,
     303,   304,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   292,   293,
     293,   300,   300,   295,   295,   295,   295,   295,   295,   303,
     304,   295,   295,   295,   295,   295,   293,   303,   293,   295,
     299,   295,   187,   301,   295,   293,   304,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   300,   300,   300,   300,   300,   299,   301,
     299,   299,   304,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   299,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   301,   295,   293,   304,
     293,   295,   306,   295,   295,   959,   295,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   295,   295,   295,   301,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   295,
     295,   295,   295,   295,   295,   293,   295,   304,   295,   295,
     295,   301,   293,   296,   296,   438,   295,   293,   295,   293,
     295,   444,   295,   446,   295,   295,   295,   295,   295,   295,
     295,   303,   295,   295,   295,   295,   295,   301,   295,   293,
     295,   297,   295,   295,   295,   295,   295,   470,   293,   295,
     473,   295,   562,   300,   295,   478,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   489,   295,   295,   295,
     493,   293,   297,   297,   497,   304,   297,   295,   297,  1093,
     300,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   295,   297,   299,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   295,   297,   299,   297,     7,   297,     9,
     297,    11,    12,    13,    14,    15,   297,    17,   297,   297,
     297,    21,   297,    23,   297,   558,    26,   297,   297,   297,
     297,   297,   297,    33,    34,   297,   297,    37,   297,   297,
      40,  1165,   297,   576,   297,   297,   297,   297,   297,   297,
     297,    51,   297,   297,    54,   297,    56,    57,    58,    59,
      60,    61,   297,    63,    64,    65,   297,    67,   297,   297,
      70,   297,   297,   297,    74,   297,   297,   297,   297,   297,
     297,   297,    82,    83,   297,   293,   295,   293,   295,   293,
     295,    91,   295,   295,   295,   295,   295,    97,   295,    99,
     295,   101,   102,   299,   295,   295,   295,  1231,   108,   109,
     110,   111,   295,   113,   293,   293,   293,   297,   303,   303,
     295,   121,   122,   123,   124,   297,   297,   127,   297,   297,
     300,   131,   132,   133,   134,   135,   300,   137,   300,   300,
     140,   141,   142,   300,   300,   297,   297,   300,   148,   149,
     150,   300,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   300,   300,   300,   300,   300,   300,
     872,   300,   297,   297,   876,   297,   297,   295,   297,   881,
     295,   293,   884,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   293,
     295,   754,   293,   295,   757,   295,   759,   167,   297,   762,
     167,   764,   300,   297,   297,   297,   301,   297,   771,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   297,   297,   301,   297,   297,   190,   191,
     192,   814,   301,   816,   299,   297,   297,   297,   297,   297,
     167,   304,   167,   300,   827,   167,   300,   300,   831,   304,
     299,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   304,
     304,   304,   304,   304,   190,   191,   192,   295,   295,   300,
     167,   301,   167,   293,   300,   299,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   301,   301,   301,   298,   167,   190,
     191,   192,   297,   302,   302,   297,   302,   297,   302,   302,
     297,   299,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     297,   302,   302,   297,   302,   190,   191,   192,   297,   302,
     302,   302,   302,   167,   167,   167,   939,   303,   941,   942,
     943,   297,   945,   303,   297,   297,   949,   297,   183,   297,
     167,   297,   183,   297,   297,   293,   297,   297,   297,  1111,
     297,   295,   297,   966,   967,   297,   297,  1119,   297,   295,
     295,   295,  1124,   167,   302,  1127,   167,   167,   167,   449,
     302,   302,   302,   302,   302,   302,   302,   302,   458,   167,
     183,   183,   298,   307,   302,   183,   295,   293,   468,   302,
     302,   295,   302,   295,   474,   475,   293,   295,   293,   295,
     158,   295,  1085,   483,    -1,    -1,   486,    -1,   488,    -1,
      -1,    -1,   492,    -1,    -1,   495,   496,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   504,    -1,    -1,   507,   508,   509,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,    -1,    -1,    -1,
     187,    -1,   532,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1079,    -1,  1081,  1082,
      -1,    -1,    -1,  1086,    -1,    -1,  1089,  1090,  1091,    -1,
      -1,    -1,    -1,   563,  1097,  1098,   566,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   577,   578,   579,
     580,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,    -1,    -1,
      -1,   187,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
    1153,  1154,  1155,    -1,    -1,  1158,    -1,    -1,  1161,  1162,
      -1,    -1,    -1,    -1,    -1,  1168,  1169,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,  1220,  1221,  1222,
      -1,    -1,  1225,  1226,  1227,  1228,  1229,    -1,    -1,    -1,
      -1,  1234,  1235,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1261,    -1,
    1263,    -1,  1265,  1266,  1267,  1268,    -1,    -1,    -1,    -1,
    1273,  1274,   742,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   755,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   763,    -1,    -1,    -1,    -1,    -1,  1302,
    1303,  1304,    -1,  1306,  1307,    -1,    -1,    -1,    -1,    -1,
      -1,  1314,  1315,  1403,    -1,   785,    -1,   787,   788,  1409,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1341,  1342,
      -1,    -1,    -1,    -1,    -1,    -1,  1349,  1350,    -1,    -1,
     820,    -1,    -1,  1356,    -1,  1358,    -1,    -1,  1361,  1362,
    1363,  1364,  1365,    -1,    -1,  1368,  1369,  1370,    -1,  1372,
      -1,  1374,  1375,  1376,    -1,    -1,  1379,  1380,  1381,    -1,
      -1,  1384,  1385,    -1,  1387,  1388,  1389,  1390,  1391,  1392,
    1393,  1394,  1395,    -1,  1397,  1398,  1399,    -1,  1401,  1402,
      -1,    -1,  1405,  1406,  1407,    -1,    -1,    -1,  1411,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     940,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   948,   160,
     161,   162,    -1,    -1,    -1,   166,    -1,   168,    -1,    -1,
      -1,   961,   962,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
      -1,    -1,   193,    -1,   195,    -1,    -1,    -1,   199,   200,
     201,   202,    -1,   204,   205,   206,   207,   208,   209,   210,
     211,    -1,   213,   214,    -1,    -1,    -1,   218,   219,   220,
     221,    -1,    -1,    -1,    -1,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,    -1,   239,   240,
      -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,   250,
      -1,   252,    -1,   254,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1088,    -1,
      -1,    -1,    -1,    -1,  1094,  1095,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1159,
    1160,    -1,    -1,  1163,    -1,    -1,  1166,  1167,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1230,    -1,  1232,  1233,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1270,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1344,  1345,    -1,    -1,  1348,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1359,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   593,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1404,    -1,    -1,    -1,  1408,    -1,
    1410,    -1,  1412,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   644,   645,    -1,   647,    -1,   649,   650,
      -1,    -1,    -1,   654,    -1,    -1,   657,    -1,    -1,    -1,
     661,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   676,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   194,   195,   196,   197,   198,   199,   200,   201,    -1,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   717,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     841,   842,   843,    -1,   845,    -1,    -1,   848,   849,   850,
     851,   852,   853,   854,   855,   856,   857,   858,   859,   860,
     861,    -1,    -1,   864,    -1,    -1,    -1,    -1,    -1,   870,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   878,    -1,    -1,
      -1,    -1,    -1,    -1,   885,   886,   887,   888,   889,   890,
     891,   892,    -1,   894,    -1,    -1,    -1,   898,   899,   900,
     901,   902,   903,   904,   905,    -1,    -1,    -1,    -1,    -1,
      -1,   912,   913,   914,    -1,    -1,    -1,   918,   919,   920,
     921,   922,    -1,    -1,    -1,   926,    -1,    -1,   929,    -1,
     931,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   978,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1012,    -1,    -1,    -1,    -1,  1017,    -1,  1019,    -1,
      -1,    -1,  1023,    -1,    -1,  1026,    -1,    -1,    -1,  1030,
      -1,  1032,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1107,    -1,    -1,    -1,
      -1,  1112,  1113,    -1,  1115,    -1,  1117,    -1,    -1,  1120,
    1121,    -1,  1123,    -1,  1125,    -1,    -1,  1128,  1129,    -1,
    1131,    -1,  1133,    -1,    -1,    -1,    -1,  1138,  1139,  1140,
    1141,  1142,  1143,  1144,  1145,  1146,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1239,    -1,
      -1,    -1,  1243,    -1,    -1,    -1,    -1,    -1,  1249,  1250,
    1251,    -1,    -1,    -1,    -1,  1256,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1280,
      -1,    -1,    -1,    -1,  1285,    -1,  1287,  1288,    -1,    -1,
       0,    -1,  1293,     3,  1295,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,    -1,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,    -1,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,    -1,    -1,    -1,    -1,   159,
     160,   161,   162,   163,   164,   165,   166,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,
      -1,    -1,    -1,   193,   194,   195,   196,   197,   198,   199,
     200,   201,    -1,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,    -1,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,    -1,    -1,   294,   295
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   309,     0,     3,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    31,
      32,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   159,
     160,   161,   162,   163,   164,   165,   166,   186,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   294,   295,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   293,   303,   304,   489,   489,   489,   293,   487,   487,
     489,   487,   489,   487,   487,   487,   487,   487,   295,   487,
     295,   295,   293,   487,   295,   487,   295,   293,   487,   295,
     295,   295,   295,   295,   295,   487,   487,   295,   293,   487,
     489,   295,   487,   293,   293,   293,   293,   293,   293,   293,
     295,   295,   295,   487,   295,   295,   487,   295,   487,   487,
     487,   487,   487,   487,   293,   487,   487,   487,   293,   494,
     487,   489,   293,   487,   293,   295,   295,   487,   293,   293,
     293,   295,   295,   295,   295,   487,   487,   293,   295,   295,
     295,   293,   295,   295,   487,   295,   295,   295,   295,   295,
     487,   494,   487,   487,   487,   489,   489,   489,   489,   489,
     487,   487,   487,   487,   489,   487,   489,   489,   489,   295,
     295,   489,   489,   487,   487,   487,   487,   489,   489,   487,
     295,   295,   487,   487,   487,   487,   487,   293,   295,   487,
     295,   293,   487,   487,   487,   295,   489,   155,   156,   157,
     158,   295,   487,   487,   487,   292,   293,   303,   304,   493,
     293,   493,   493,   300,   312,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   299,   495,   495,   495,   299,   495,   299,   493,   493,
     493,   495,   493,   495,   493,   493,   299,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   300,   300,   495,   300,   495,   300,
     300,   299,   495,   167,   300,   495,   167,   300,   493,   495,
     167,   300,   495,   300,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   299,   495,   299,   300,   299,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   183,   184,   190,   191,   192,   495,
     183,   184,   190,   191,   192,   495,   185,   186,   188,   185,
     186,   188,   495,   495,   495,   495,   495,   300,   299,   299,
     495,   299,   299,   495,   299,   495,   295,   293,   293,   295,
     295,   295,   489,   295,   295,   295,   295,   295,   489,   295,
     489,   295,   487,   295,   295,   295,   293,   487,   295,   295,
     487,   295,   489,   295,   489,   487,   487,   293,   296,   489,
     295,   487,   487,   487,   489,   293,   295,   487,   489,   295,
     487,   487,   489,   295,   296,   305,   484,   485,   486,   489,
     490,   295,   295,   295,   295,   487,   487,   487,   487,   295,
     295,   295,   295,   295,   295,   293,   295,   487,   295,   295,
     295,   293,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   489,   295,   494,   487,   295,   295,
     487,   295,   295,   295,   295,   295,   295,   489,   487,   487,
     487,   487,   295,   293,   293,   297,   495,   293,   303,   304,
     488,   297,   297,   297,   488,   297,   488,   488,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   495,   495,   297,   495,   297,   495,   495,   488,
     297,   297,   301,   495,   297,   297,   301,   495,   297,   297,
     297,   301,   495,   297,   301,   297,   297,   297,   297,   297,
     297,   297,   297,   488,   297,   488,   495,   488,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   495,   488,   488,   297,   488,   488,   297,
     488,   297,   295,   295,   295,   487,   293,   295,   295,   489,
     487,   293,   489,   296,   491,   489,   295,   489,   487,   489,
     295,   295,   295,   295,   489,   295,   306,   306,   490,   487,
     295,   487,   487,   295,   293,   295,   489,   489,   487,   489,
     295,   295,   295,   489,   293,   303,   293,   293,   297,   495,
     495,   495,   297,   495,   297,   297,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     183,   184,   190,   191,   192,   495,   303,   185,   186,   188,
     303,   303,   297,   495,   300,   167,   493,   297,   303,   300,
     300,   167,   493,   297,   303,   495,   300,   300,   167,   493,
     297,   303,   300,   493,   495,   495,   495,   495,   495,   495,
     495,   495,   297,   495,   297,   495,   495,   495,   495,   495,
     495,   495,   495,   300,   300,   300,   300,   300,   300,   495,
     495,   495,   300,   300,   300,   495,   495,   495,   495,   495,
     297,   495,   297,   297,   495,   297,   495,   295,   295,   489,
     487,   489,   489,   489,   492,   297,   489,   295,   487,   489,
     293,   293,   490,   488,   487,   487,   295,   489,   489,   293,
     295,   295,   297,   495,   167,   300,   167,   297,   297,   297,
     495,   301,   297,   297,   495,   297,   301,   304,   495,   301,
     297,   297,   495,   297,   301,   304,   495,   301,   297,   297,
     495,   297,   301,   304,   495,   297,   167,   300,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   167,   300,   167,
     300,   489,   295,   489,   489,   297,   298,   491,   489,   487,
     489,   489,   489,   293,   295,   488,   487,   487,   489,   489,
     295,   300,   301,   183,   184,   190,   191,   192,   495,   185,
     186,   188,   300,   493,   495,   183,   495,   495,   167,   495,
     493,   495,   183,   187,   495,   495,   167,   493,   495,   493,
     495,   183,   187,   495,   495,   167,   495,   187,   301,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   301,   301,
     293,   489,   489,   489,   298,   489,   487,   487,   489,   489,
     487,   488,   487,   487,   489,   489,   495,   167,   495,   297,
     302,   302,   302,   297,   297,   302,   302,   302,   302,   297,
     297,   297,   302,   302,   302,   302,   297,   302,   167,   167,
     167,   489,   489,   489,   489,   489,   489,   489,   489,   487,
     488,   487,   487,   489,   489,   303,   297,   303,   183,   495,
     297,   297,   297,   495,   183,   297,   297,   297,   297,   495,
     495,   183,   495,   297,   297,   297,   297,   495,   297,   297,
     297,   297,   489,   293,   489,   295,   489,   489,   489,   489,
     295,   487,   295,   295,   489,   489,   183,   302,   302,   495,
     167,   167,   302,   302,   495,   167,   495,   495,   302,   302,
     302,   302,   495,   167,   495,   167,   302,   167,   183,   183,
     183,   489,   489,   489,   489,   489,   298,   307,   487,   489,
     489,   302,   302,   302,   302,   489,   489,   295,   487,   487,
     487,   489,   489,   293,   489,   489,   487,   295,   489,   489,
     489,   489,   489,   295,   489,   489,   489,   293,   489,   489,
     489,   489,   295,   295,   489,   489,   489,   489,   489,   293,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   494,   487,   489,   489,   489,   487,
     494,   487,   489,   487,   295
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   308,   309,   309,   310,   310,   310,   310,   310,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   484,   485,   486,
     487,   488,   488,   488,   489,   489,   489,   490,   490,   491,
     492,   492,   493,   493,   493,   493,   494,   494,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     6,     9,     3,     3,     4,     3,     3,
       3,     3,     4,     3,     4,     3,     4,     3,     3,     2,
       4,     4,     4,     5,     2,     3,     5,     4,     9,    15,
      11,     7,     6,    21,     3,     3,     3,     3,     2,     2,
       3,     3,     2,     2,     2,     4,     4,     3,     2,     2,
       2,     2,     2,     3,     4,     2,     1,     1,     3,    34,
       2,     3,     5,     3,     4,     2,     2,     5,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     9,     9,     3,
       2,    12,     2,     2,     4,     2,     2,     2,     3,     3,
       3,     3,     3,     4,    15,     4,     4,     5,    13,     3,
       3,     3,     3,     3,     6,     4,     2,     2,     3,     2,
       3,     2,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,    19,     2,     1,     2,     2,     2,
       2,     5,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     4,     2,
       2,     3,     3,     2,     1,     2,     1,     1,     2,     2,
       2,     2,     4,     4,     5,     4,     4,     4,     5,    10,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       1,     4,     4,     4,     4,     4,     2,     2,     4,     5,
       4,     4,     4,     4,     2,     4,     4,     4,     4,     3,
       3,     4,     4,     4,     4,     4,     4,     6,     6,     6,
       6,     6,     6,     4,     4,     4,     6,     6,     6,     1,
       8,     8,     4,     5,     5,     5,     5,     5,     5,     6,
       6,     6,     6,     6,     6,     9,     9,     9,     9,     9,
       9,     5,     9,     9,     4,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,     9,     2,     4,
       4,     4,     4,     4,     4,     4,     1,     4,     4,     5,
      10,     3,     3,     2,     2,     2,     2,     1,     1,     1,
       1,     4,     2,     2,     4,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     4,     4,     4,     4,     4,     4,
       6,     6,     6,     6,     6,     6,     4,     4,     4,     6,
       6,     6,     4,     4,     4,     4,     4,     3,     3,     4,
       5,    10,     4,     5,    10,     4,     1,     1,     8,     8,
       1,     1,     2,     2,     1,     2,     2,     1,     1,     3,
       1,     3,     1,     1,     2,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 181:
#line 635 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				mexit(yyengine, "Exiting as per user's request.", 0);
			}
		}
#line 3158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 647 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			/*
			 *	Only give the architecture type:
			 */
			if (!yyengine->scanning)
			{
				m_newnode(yyengine, (yyvsp[-1].str), 0, 0, 0, NULL, 0, 0);
			}
		}
#line 3172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 657 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			/*
			 *	Give the architecture type and the (fixed) x/y/z location
			 */
			if (!yyengine->scanning)
			{
				m_newnode(yyengine, (yyvsp[-4].str), (yyvsp[-3].rval)->dval, (yyvsp[-3].rval)->dval, (yyvsp[-3].rval)->dval, NULL, 0, 0);
			}
		}
#line 3186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 667 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			/*
			 *	Give the architecture type and the (initial) x/y/z location, and the
			 *	trajectory file, loop flag, and trajectory rate (the number of picoseconds
			 *	per sample in the trajectory file).
			 */
			if (!yyengine->scanning)
			{
				//	rdimm example: 	READ THE FOLLOWING!!!!
				//
				//	this is an example of using rdimm.  For rdimm,
				//	you can't get the value from, e.g., $4, but have to do $4.value
				//	The $X.rv field is the packaged rvar state needed to register
				//	the corresponding parameter using m_register_rvar(), if the
				//	rvar was declared as "{...}", or NULL if it was "<...>"
				//
				m_newnode(yyengine, (yyvsp[-7].str), (yyvsp[-6].rval)->dval, (yyvsp[-5].rval)->dval, (yyvsp[-4].rval)->dval, (yyvsp[-3].str), (yyvsp[-2].uval), (yyvsp[-1].uval));

				//	The above should be changed to:
				//m_newnode($2, $3.value, $4.value, $5.value, $6.value, $7.value,
				//		$3.rv, $4.rv, $5.rv, $6.rv, $7.rv);
				//
				//	and then in m_newnode(), check each of the rv args to
				//	see if it is non-null, and if so, do approp. registration
				//	of state as an rvar
			}
		}
#line 3218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 695 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				batt_nodeattach(yyengine, yyengine->cp, (yyvsp[-1].uval));
			}
		}
#line 3229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 702 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				batt_printstats(yyengine, yyengine->cp, (yyvsp[-1].uval));
			}
		}
#line 3240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 709 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				batt_newbatt(yyengine, (yyvsp[-2].uval), (yyvsp[-1].dval));
			}
		}
#line 3251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 716 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				if (SF_DEBUG) mprint(yyengine, NULL, siminfo, 
						"Setting yyengine->batts[%d].ileak to %f\n",
						yyengine->curbatt, (yyvsp[-1].dval));
				yyengine->batts[yyengine->curbatt].ileak = (yyvsp[-1].dval);
			}
		}
#line 3265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 726 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				if (SF_DEBUG) mprint(yyengine, NULL, siminfo, 
						"Setting yyengine->batts[%d].Cf to %f\n",
						yyengine->curbatt, (yyvsp[-1].dval));
				yyengine->batts[yyengine->curbatt].Cf = (yyvsp[-1].dval);
			}
		}
#line 3279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 736 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				if (SF_DEBUG) mprint(yyengine, NULL, siminfo, 
					"Setting yyengine->batts[%d].Inominal to %f\n",
					yyengine->curbatt, (yyvsp[-1].dval));
				yyengine->batts[yyengine->curbatt].Inominal = (yyvsp[-1].dval);
			}
		}
#line 3293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 746 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				if (SF_DEBUG) mprint(yyengine, NULL, siminfo, 
						"Setting yyengine->batts[%d].Rf to %f\n",
						yyengine->curbatt, (yyvsp[-1].dval));
				yyengine->batts[yyengine->curbatt].Rf = (yyvsp[-1].dval);
			}
		}
#line 3307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 756 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				if ((yyvsp[-2].uval) < yyengine->batts[yyengine->curbatt].etaLUTnentries)
				{
					yyengine->batts[yyengine->curbatt].etaLUT[(yyvsp[-2].uval)] = (yyvsp[-1].dval);
				}
				else
				{
					merror(yyengine, "Invalid etaLUT index.");
				}
			}
		}
#line 3325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 770 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				double *tmp = (double *)mrealloc(yyengine, yyengine->batts[yyengine->curbatt].etaLUT,
						(yyvsp[-1].uval)*sizeof(double), 
						"shasm.y, (double *) for T_BATTETALUTNENTRIES");
				if (tmp == NULL)
				{
					mexit(yyengine, "Could not resize etaLUT: mcrealloc failed.", -1);
				}
				else
				{
					yyengine->batts[yyengine->curbatt].etaLUT = tmp;
					yyengine->batts[yyengine->curbatt].etaLUTnentries = (yyvsp[-1].uval);
				}
			}
		}
#line 3347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 788 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				if ((yyvsp[-2].uval) < yyengine->batts[yyengine->curbatt].VbattLUTnentries)
				{
					yyengine->batts[yyengine->curbatt].VbattLUT[(yyvsp[-2].uval)] = (yyvsp[-1].dval);
				}
				else
				{
					merror(yyengine, "Invalid VbattLUT index.");
				}
			}
		}
#line 3365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 802 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				double *tmp = (double *)mrealloc(yyengine, yyengine->batts[yyengine->curbatt].VbattLUT,
						(yyvsp[-1].uval)*sizeof(double), 
						"shasm.y, (double *) for T_BATTVBATTLUTNENTRIES");
				if (tmp == NULL)
				{
					mexit(yyengine, "Could not resize VbattLUT: mrealloc() failed", -1);
				}
				else
				{
					yyengine->batts[yyengine->curbatt].VbattLUT = tmp;
					yyengine->batts[yyengine->curbatt].VbattLUTnentries = (yyvsp[-1].uval);
				}
			}
		}
#line 3387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 820 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				if ((yyvsp[-2].uval) < yyengine->batts[yyengine->curbatt].VlostLUTnentries)
				{
					yyengine->batts[yyengine->curbatt].VlostLUT[(yyvsp[-2].uval)] = (yyvsp[-1].dval);
				}
				else
				{
					merror(yyengine, "Invalid VlostLUT index.");
				}
			}
		}
#line 3405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 834 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				double *tmp = (double *)mrealloc(yyengine, yyengine->batts[yyengine->curbatt].VlostLUT,
						(yyvsp[-1].uval)*sizeof(double), 
						"shasm.y, (double *) for T_BATTVLOSTLUTNENTRIES");
				if (tmp == NULL)
				{
					mexit(yyengine, "Could not resize Vlost: mrealloc failed.", -1);
				}
				else
				{
					yyengine->batts[yyengine->curbatt].VlostLUT = tmp;
					yyengine->batts[yyengine->curbatt].VlostLUTnentries = (yyvsp[-1].uval);
				}
			}
		}
#line 3427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 852 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				if ((yyvsp[-1].uval) >= yyengine->nbatts)
				{
					merror(yyengine, "Battery ID out of range.");
				}
				else
				{
					yyengine->curbatt = (yyvsp[-1].uval);
				}
			}
		}
#line 3445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 866 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_pcbacktrace(yyengine, yyengine->cp);
			}
		}
#line 3456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 873 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_setbptglobaltime(yyengine, (yyvsp[-1].uval));
			}
		}
#line 3467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 880 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_setbptcycles(yyengine, yyengine->cp, (yyvsp[-1].uval));
			}
		}
#line 3478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 887 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_setbptinstrs(yyengine, yyengine->cp, (yyvsp[-1].uval));
			}
		}
#line 3489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 894 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_setbptsensorreading(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[-1].dval));
			}
		}
#line 3500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 901 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_bptls(yyengine);
			}
		}
#line 3511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 908 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_bptdel(yyengine, (yyvsp[-1].uval));
			}
		}
#line 3522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 915 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_setloc(yyengine, yyengine->cp, (yyvsp[-3].dval), (yyvsp[-2].dval), (yyvsp[-1].dval));
			}
		}
#line 3533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 922 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				network_setretryalg(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[-1].str));
			}
		}
#line 3544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 929 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_randprint(yyengine, (yyvsp[-7].str), (yyvsp[-6].dval), (yyvsp[-5].dval), (yyvsp[-4].dval), (yyvsp[-3].dval), (yyvsp[-2].dval), (yyvsp[-1].dval));
			}
		}
#line 3555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 936 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				//m_registerrvar(yyengine->cp, $2, $3, $4, $5, $6, $7,
				//		$8, $9, $10, $11, $12, $13, $14);
			}
		}
#line 3567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 944 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_initrandtable(yyengine, (yyvsp[-9].str), (yyvsp[-8].str), (yyvsp[-7].dval), (yyvsp[-6].dval), (yyvsp[-5].dval), (yyvsp[-4].dval), (yyvsp[-3].dval), (yyvsp[-2].dval), (yyvsp[-1].dval));
			}
		}
#line 3578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 951 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				//m_defndist($2, $4, $6);

			}
		}
#line 3590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 959 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				if (yyengine->cp->machinetype == MACHINE_SUPERH)
				{
					//superHhwSEEreg($2, $3, $4, $5);
				}
				else if (yyengine->cp->machinetype == MACHINE_MSP430)
				{
					//msp430hwSEEreg($2, $3, $4, $5);
				}
				else
				{
					sfatal(yyengine, yyengine->cp, "Unknown machine type");
				}
			}
		}
#line 3612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 977 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				if (yyengine->cp->machinetype == MACHINE_SUPERH)
				{
					//superHinitSEEstate(yyengine->cp, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11, $12, $13, $14, $15, $16, $17, $18, $19, $20, $21);
				}
				else if (yyengine->cp->machinetype == MACHINE_MSP430)
				{
					//msp430initSEEstate(yyengine->cp, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11, $12, $13, $14, $15, $16, $17, $18, $19, $20, $21);
				}
				else
				{
					sfatal(yyengine, yyengine->cp, "Unknown machine type");
				}
			}
		}
#line 3634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 995 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->ignoredeaths = (yyvsp[-1].uval);
			}
		}
#line 3645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1002 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->voltscale_alpha = (yyvsp[-1].dval);
			}
		}
#line 3656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1009 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->voltscale_K = (yyvsp[-1].dval);
			}
		}
#line 3667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1016 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->voltscale_Vt = (yyvsp[-1].dval);
			}
		}
#line 3678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1023 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->schedtype = SchedRandom;
			}
		}
#line 3689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1030 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->schedtype = SchedRoundRobin;
			}
		}
#line 3700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1037 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->quantum = (yyvsp[-1].uval);
			}
		}
#line 3711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1044 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->baseid = (yyvsp[-1].uval);
			}
		}
#line 3722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1051 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_renumbernodes(yyengine);
			}
		}
#line 3733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1058 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->trip_ustart = musercputimeusecs();
				yyengine->cp->trip_startclk = yyengine->cp->ICLK;
			}
		}
#line 3745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1066 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				int i;

				for (i = 0; i < yyengine->nnodes; i++)
				{
					yyengine->sp[i]->trip_ustart = musercputimeusecs();
					yyengine->sp[i]->trip_startclk = yyengine->sp[i]->ICLK;
				}
			}
		}
#line 3762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1079 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				network_netseg2file(yyengine, (yyvsp[-2].uval), (yyvsp[-1].str));
			}
		}
#line 3773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1086 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				network_file2netseg(yyengine, (yyvsp[-2].str), (yyvsp[-1].uval));
			}
		}
#line 3784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1093 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				int	n = mchdir((yyvsp[-1].str));

				if (n < 0)
				{
					merror(yyengine, "Could not change directory to \"%s\".", (yyvsp[-1].str));
				}
			}
		}
#line 3800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1105 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->settimerintrdelay(yyengine, yyengine->cp, (yyvsp[0].dval));
			}
		}
#line 3811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1112 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->phyperiodpsec = (yyvsp[0].dval);
			}
		}
#line 3822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1119 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->battperiodpsec = (yyvsp[0].dval);
			}
		}
#line 3833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1126 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->netperiodpsec = (yyvsp[0].dval);
			}
		}
#line 3844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1133 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->fperiodpsec = (yyvsp[0].dval);
			}
		}
#line 3855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1141 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->force_avgpwr = (yyvsp[-1].dval);
				yyengine->cp->force_sleeppwr = (yyvsp[0].dval);
			}
		}
#line 3867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1149 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				network_netsegpropmodel(yyengine, (yyvsp[-2].uval), (yyvsp[-1].uval), (yyvsp[0].dval));
			}
		}
#line 3878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1156 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->dumpperiodpsec = (yyvsp[0].dval);
			}
		}
#line 3889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1163 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_version(yyengine);
			}
		}
#line 3900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1170 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				physics_sensorsdbg(yyengine);
			}
		}
#line 3911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1178 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				physics_sigsubscr(yyengine, yyengine->cp, (yyvsp[-1].uval), (yyvsp[0].uval));
			}
		}
#line 3922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1189 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				physics_newsigsrc(yyengine, (yyvsp[-32].uval), (yyvsp[-31].str), (yyvsp[-30].dval), (yyvsp[-29].dval), (yyvsp[-28].dval), (yyvsp[-27].dval), (yyvsp[-26].dval), (yyvsp[-25].dval), (yyvsp[-24].dval),
					(yyvsp[-23].dval), (yyvsp[-22].dval), (yyvsp[-21].dval), (yyvsp[-20].dval), (yyvsp[-19].dval), (yyvsp[-18].dval), (yyvsp[-17].dval), (yyvsp[-16].dval), (yyvsp[-15].dval), (yyvsp[-14].dval),
					(yyvsp[-13].dval), (yyvsp[-12].dval), (yyvsp[-11].dval), (yyvsp[-10].str), (yyvsp[-9].uval), (yyvsp[-8].dval), (yyvsp[-7].dval), (yyvsp[-6].dval), (yyvsp[-5].uval), (yyvsp[-4].str),
					(yyvsp[-3].uval), (yyvsp[-2].dval), (yyvsp[-1].uval));
			}
		}
#line 3936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1199 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				mprint(yyengine, NULL, siminfo,
					"Current directory: %s\n", mgetpwd());
			}
		}
#line 3948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1207 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_parseobjdump(yyengine, yyengine->cp, (yyvsp[-1].str));
			}
		}
#line 3959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1214 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_dumpall(yyengine, (yyvsp[-3].str), M_OWRITE, (yyvsp[-2].str), (yyvsp[-1].str));
			}
		}
#line 3970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1221 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				if ((yyvsp[-1].uval) >= yyengine->nnodes)
				{
					merror(yyengine, "Node ID out of range.");
				}
				else
				{
					m_setnode(yyengine, (yyvsp[-1].uval));
				}
			}
		}
#line 3988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1235 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				if (((yyvsp[-2].uval) > yyengine->nnodes) || ((yyvsp[-1].uval) > yyengine->nnodes))
				{
					merror(yyengine, "Node indeces out of range in call to MMAP!");
				}
				else
				{
					yyengine->sp[(yyvsp[-1].uval)]->MEM  = yyengine->sp[(yyvsp[-2].uval)]->MEM;
					mprint(yyengine, NULL, siminfo,
						"Mapped mem of Node " ULONGFMT " into Node " ULONGFMT "\n", (yyvsp[-2].uval), (yyvsp[-1].uval));
				}
			}
		}
#line 4008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1251 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->step = yyengine->cp->cyclestep;
			}
		}
#line 4019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1258 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->step = yyengine->cp->faststep;
			}
		}
#line 4030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1265 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->cache_init(yyengine, yyengine->cp, (yyvsp[-3].uval), (yyvsp[-2].uval), (yyvsp[-1].uval));
			}
		}
#line 4041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1272 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->cache_deactivate(yyengine, yyengine->cp);
			}
		}
#line 4052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1279 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->cache_printstats(yyengine, yyengine->cp);
			}
		}
#line 4063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1286 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->dumpregs(yyengine, yyengine->cp);
			}
		}
#line 4074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1293 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->dumpsysregs(yyengine, yyengine->cp);
			}
		}
#line 4085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1300 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->dumppipe(yyengine, yyengine->cp);
			}
		}
#line 4096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1307 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->dumpdistribution(yyengine, yyengine->cp);
			}
		}
#line 4107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1314 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->resetcpu(yyengine, yyengine->cp);
			}
		}
#line 4118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1321 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				mprint(yyengine, yyengine->cp, nodeinfo,
					"Dynamic instruction count = [" UVLONGFMT "], fetched instructions = [" UVLONGFMT "]\n",
					yyengine->cp->dyncnt, yyengine->cp->nfetched);	
			}
		}
#line 4131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1330 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->nodetach = (yyvsp[-1].uval);
			}
		}
#line 4142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1337 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_addvaluetrace(yyengine, yyengine->cp, (yyvsp[-7].str), (yyvsp[-6].uval), (yyvsp[-5].uval), (yyvsp[-4].uval), (yyvsp[-3].uval), (yyvsp[-2].uval), (yyvsp[-1].uval));
			}
		}
#line 4153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1344 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_delvaluetrace(yyengine, yyengine->cp, (yyvsp[-7].str), (yyvsp[-6].uval), (yyvsp[-5].uval), (yyvsp[-4].uval), (yyvsp[-3].uval), (yyvsp[-2].uval), (yyvsp[-1].uval));
			}
		}
#line 4164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1351 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_readstabs(yyengine, yyengine->cp, (yyvsp[-1].str));
			}
		}
#line 4175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1358 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_valuestats(yyengine, yyengine->cp);
			}
		}
#line 4186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1365 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_numaregion(yyengine, (yyvsp[-10].str), (yyvsp[-9].uval), (yyvsp[-8].uval), (yyvsp[-7].sval), (yyvsp[-6].sval), (yyvsp[-5].sval), (yyvsp[-4].sval), (yyvsp[-3].uval), (yyvsp[-2].uval), (yyvsp[-1].uval));
			}
		}
#line 4197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1372 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_numastats(yyengine, yyengine->cp);
			}
		}
#line 4208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1379 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_numastatsall(yyengine);
			}
		}
#line 4219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1386 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_numasetmapid(yyengine, (yyvsp[-2].uval), (yyvsp[-1].uval));
			}
		}
#line 4230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1393 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->dumptlb(yyengine, yyengine->cp);
			}
		}
#line 4241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1400 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				if (yyengine->cp->ICLK > 0)
				{
					mprint(yyengine, yyengine->cp, nodeinfo,
						"Ratio of active/sleep cycles = %.6f\n",
						(float)yyengine->cp->CLK/(float)yyengine->cp->ICLK);
				}
				else
				{
					merror(yyengine, "We don't stand a chance.");
				}
			}
		}
#line 4261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1416 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				mprint(yyengine, NULL, siminfo,
					"Simulation random seed = %ld\n", yyengine->randseed);
			}
		}
#line 4273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1424 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				mprint(yyengine, NULL, siminfo,
					"Resetting random number generation with seed [%ld]\n", (yyvsp[-1].uval));
				yyengine->randseed = mrandominit(yyengine, (yyvsp[-1].uval));
			}
		}
#line 4286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1433 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->ENABLE_BATT_LOW_INTR = (yyvsp[-1].uval);
			}
		}
#line 4297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1440 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->battery_alert_frac = (yyvsp[-1].dval);
			}
		}
#line 4308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1447 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->fail_prob = (yyvsp[-1].dval);
			}
		}
#line 4319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1454 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->failure_duration_max = (yyvsp[-1].uval);
			}
		}
#line 4330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1461 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				if ((yyvsp[-2].uval) >= MAX_NETSEGMENTS)
				{
					merror(yyengine, "Segment # > max. number of network segments.");
				}
				else
				{
					yyengine->netsegs[(yyvsp[-2].uval)].failure_duration_max = (yyvsp[-1].uval);
				}
			}
		}
#line 4348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1476 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				network_netnewseg(yyengine, (yyvsp[-13].uval), (yyvsp[-12].uval), (yyvsp[-11].uval), (yyvsp[-10].uval), (yyvsp[-9].uval), (yyvsp[-8].uval),
					(yyvsp[-7].dval), (yyvsp[-6].dval), (yyvsp[-5].dval), (yyvsp[-4].uval), (yyvsp[-3].dval), (yyvsp[-2].dval), (yyvsp[-1].dval));
			}
		}
#line 4360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1484 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				if ((yyvsp[-2].uval) >= yyengine->nnetsegs)
				{
					merror(yyengine, "NETSEGMENT out of range.");
				}
				else
				{
					yyengine->netsegs[(yyvsp[-2].uval)].fail_prob = (yyvsp[-1].dval);
				}
			}
		}
#line 4378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1498 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				network_netsegnicattach(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[-1].uval));
			}
		}
#line 4389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1505 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				if ((yyvsp[-3].uval) >= MAX_NETSEGMENTS)
				{
					merror(yyengine, "Segment # > max. number of network segments.");
				}
				else if ((yyvsp[-2].uval) >= yyengine->nnodes)
				{
					merror(yyengine, "Invalid node number.");
				}
				else
				{
					yyengine->netsegs[(yyvsp[-3].uval)].correl_coeffs[(yyvsp[-2].uval)] = (yyvsp[-1].dval);
				}
			}
		}
#line 4411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1523 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				network_netnodenewifc(yyengine, yyengine->cp, (yyvsp[-11].uval), (yyvsp[-10].dval), (yyvsp[-9].dval), (yyvsp[-8].dval),
					(yyvsp[-7].dval), (yyvsp[-6].uval), (yyvsp[-5].dval), (yyvsp[-4].dval), (yyvsp[-3].dval), (yyvsp[-2].uval), (yyvsp[-1].uval));
			}
		}
#line 4423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1531 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				network_netsegdelete(yyengine, (yyvsp[-1].uval));
			}
		}
#line 4434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1538 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				merror(yyengine, "Command \"NODEFAILPROBFN\" unimplemented.");
			}
		}
#line 4445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1545 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				merror(yyengine, "Command \"NETSEGFAILPROBFN\" unimplemented.");
			}
		}
#line 4456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1552 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_sizemem(yyengine, yyengine->cp, (yyvsp[-1].uval));
			}
		}
#line 4467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1559 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				pau_init(yyengine, yyengine->cp, (yyvsp[-1].uval));
			}
		}
#line 4478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1566 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->split(yyengine, yyengine->cp, (yyvsp[-4].uval), (yyvsp[-3].uval), (yyvsp[-2].uval), (yyvsp[-1].str));
			}
		}
#line 4489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1573 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_dumpmem(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[-1].uval));
			}
		}
#line 4500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1580 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->pipelined = 0;
			}
		}
#line 4511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1587 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->pipelined = 1;
			}
		}
#line 4522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1594 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->superH->ENABLE_CLK_INTR = (yyvsp[-1].uval);
			}
		}
#line 4533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1601 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->runnable = 0;
			}
		}
#line 4544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1608 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				sfatal(yyengine, yyengine->cp, (yyvsp[-1].str));
			}
		}
#line 4555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1615 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->verbose ^= 1;
			}
		}
#line 4566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1622 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_run(yyengine, yyengine->cp, (yyvsp[-1].str));
			}

			/*	The 'string' is dynamically allocated, in lex.c		*/
			free((yyvsp[-1].str));
		}
#line 4580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1632 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->step(yyengine, yyengine->cp, 0);
			}
		}
#line 4591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1639 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				go(yyengine, yyengine->cp, (yyvsp[-1].uval));
			}
		}
#line 4602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1646 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				loadcmds(yyengine, (yyvsp[-1].str));
			}
		}
#line 4613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1653 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {	
			if (!yyengine->scanning)
			{
				yyengine->cp->PC = (yyvsp[-1].uval);
			}
		}
#line 4624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1660 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				/*	Scale frequency accordingly for provided Vdd	*/
				power_scaledelay(yyengine, yyengine->cp, (yyvsp[-1].dval));
			}
		}
#line 4636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1668 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->mem_r_latency = (yyvsp[-1].uval);
			}
		}
#line 4647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1675 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->mem_w_latency = (yyvsp[-1].uval);
			}
		}
#line 4658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1682 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->flash_r_latency = (yyvsp[-1].uval);
			}
		}
#line 4669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1689 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->flash_w_latency = (yyvsp[-1].uval);
			}
		}
#line 4680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1696 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				/*	Scale Vdd accordingly for provided frequency	*/
				power_scalevdd(yyengine, yyengine->cp, (yyvsp[-1].dval));
			}
		}
#line 4692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1704 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				/*	Set node mass	*/
				massSetNodeMass(yyengine, yyengine->cp, (yyvsp[-1].dval));
			}
		}
#line 4704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1712 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				/*	Scale Vdd accordingly for provided frequency	*/
				propulsionSetPropulsionCoeffs(yyengine, yyengine->cp,
											(yyvsp[-17].dval),	(yyvsp[-16].dval),	(yyvsp[-15].dval),	(yyvsp[-14].dval),	(yyvsp[-13].dval),	(yyvsp[-12].dval),
											(yyvsp[-11].dval),	(yyvsp[-10].dval),	(yyvsp[-9].dval),	(yyvsp[-8].dval),	(yyvsp[-7].dval),	(yyvsp[-6].dval),
											(yyvsp[-5].dval),	(yyvsp[-4].dval),	(yyvsp[-3].dval),	(yyvsp[-2].dval),	(yyvsp[-1].dval),	(yyvsp[0].dval));
			}
		}
#line 4719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1723 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			yyengine->cp->MEMBASE = (yyvsp[0].uval);
		}
#line 4727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1727 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			mprint(yyengine, NULL, siminfo, "Memory base address is %d.",yyengine->cp->MEMBASE);
		}
#line 4735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1731 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				help(yyengine);
			}
		}
#line 4746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1738 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				man(yyengine, (yyvsp[-1].str));
			}
		}
#line 4757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1745 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->flushpipe(yyengine->cp);
			}
		}
#line 4768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1752 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->pipeshow = !yyengine->cp->pipeshow;
			}
		}
#line 4779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1759 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				savemem(yyengine, yyengine->cp, (yyvsp[-3].uval), (yyvsp[-2].uval), (yyvsp[-1].str));
			}
		}
#line 4790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1766 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				load_srec(yyengine, yyengine->cp, (yyvsp[-1].str));
			}
		}
#line 4801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1773 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				cont(yyengine, yyengine->cp, (yyvsp[-1].uval));
			}
		}
#line 4812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1780 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_sharebus(yyengine, yyengine->cp, (yyvsp[-1].uval));
			}
		}
#line 4823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1787 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				mprint(yyengine, NULL, siminfo,
					"CLK = " UVLONGFMT ", ICLK = " UVLONGFMT ", TIME = %E, CYCLETIME = %E\n",
					yyengine->cp->CLK, yyengine->cp->ICLK, yyengine->cp->TIME, 
					yyengine->cp->CYCLETIME);
			}
		}
#line 4837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1797 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				power_printstats(yyengine, yyengine->cp);
			}
		}
#line 4848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1804 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_locstats(yyengine, yyengine->cp);
			}
		}
#line 4859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1811 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_listrvars(yyengine);
			}
		}
#line 4870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1819 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_on(yyengine, yyengine->cp);
			}
		}
#line 4881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1826 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_off(yyengine, yyengine->cp);
			}
		}
#line 4892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1833 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				network_netdebug(yyengine, yyengine->cp);
			}
		}
#line 4903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1840 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				mprint(yyengine, NULL, siminfo, 
					"WARNING: Trace only works if compiled w/ -MYRMIGKI_DEBUG\n\n");
				yyengine->cp->trace = (yyvsp[-1].uval);
			}
		}
#line 4916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1849 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->throttlensec = (yyvsp[-1].uval);
			}
		}
#line 4927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1856 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->throttlewin = (yyvsp[-1].uval);
			}
		}
#line 4938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1863 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->faultthreshold = (yyvsp[-1].uval);
			}
		}
#line 4949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1870 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->ENABLE_TOO_MANY_FAULTS = (yyvsp[-1].uval);
			}
		}
#line 4960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1877 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				fault_setnodepfun(yyengine, yyengine->cp, (yyvsp[-1].str));
			}
		}
#line 4971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1884 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				if ((yyvsp[-2].uval) < yyengine->cp->superH->NIC_NUM_IFCS)
				{
					msnprint((char*)&yyengine->cp->superH->NIC_IFCS[(yyvsp[-2].uval)].IFC_OUI[0],
						NIC_ADDR_LEN, "%s", (yyvsp[-1].str));
				}
				else
				{
					merror(yyengine, "Network interface [%d] out of range.", (yyvsp[-2].uval));
				}
			}
		}
#line 4990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1899 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				mmblocksdisplay(yyengine);
			}
		}
#line 5001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1906 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				pau_printstats(yyengine, yyengine->cp);
			}
		}
#line 5012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1913 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				// TODO: we should account for the cost of the m_on and m_off

				m_off(yyengine, yyengine->cp);
				mnsleep((yyvsp[-1].uval));
				m_on(yyengine, yyengine->cp);
			}
		}
#line 5027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1924 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				// TODO: we should account for the cost of the m_on and m_off

				m_off(yyengine, yyengine->cp);
				mnsleep((yyvsp[-1].uval) * 1000000000);
				m_on(yyengine, yyengine->cp);
			}
		}
#line 5042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1935 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				/*	For now, nothing fun is done with comments	*/
			}
		}
#line 5053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1942 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				/*								*/
				/*	The case where the command is just a solitary newline 	*/
				/*	is actually short circuited and does not even get here 	*/
				/*	We only parse input if # chars read from input is > 1.	*/
				/*								*/
			}
		}
#line 5068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1956 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			/*							*/
			/*	Whether yyengine->scanning or not, forcefully align PC 	*/
			/*							*/
			ulong align = (yyvsp[0].uval);

			if (align == 2)
			{
				mprint(yyengine, NULL, siminfo, "adjusting PC from " ULONGFMT " to " ULONGFMT "\n",
					yyengine->cp->PC, (yyengine->cp->PC+16-(yyengine->cp->PC&0xF)));
				yyengine->cp->PC += 16 - (yyengine->cp->PC & 0xF);
			}
			else if (align == 4)
			{
				mprint(yyengine, NULL, siminfo, "adjusting PC from " ULONGFMT " to " ULONGFMT "\n",
					yyengine->cp->PC, (yyengine->cp->PC+16-(yyengine->cp->PC&0xF)));
				yyengine->cp->PC += 256 - (yyengine->cp->PC & 0xFF);
			}
			else
			{
				merror(yyengine, ".align for arbitrary alignment not implemented !!!");
			}
		}
#line 5096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1983 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
		}
#line 5103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1989 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
		}
#line 5110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1995 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
		}
#line 5117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 2001 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
		}
#line 5124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 2006 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
		}
#line 5131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 2011 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			/*								*/
			/*	disp is _relative_ to the current pc, so convert it	*/
			/*	to absolute address before laying down the value, by	*/
			/*	just doing the opposite of what we did in rule for	*/
			/*	'disp', at the end of this shasm.y			*/
			/*								*/
			long absdisp = ((yyvsp[0].sval) << 1) + yyengine->cp->PC + 4;

			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else
			{
				mprint(yyengine, NULL, siminfo,
					"Laying down raw data, val = [" ULONGFMT "]\n", absdisp);
				memmove(&yyengine->cp->MEM[yyengine->cp->PC], &absdisp, sizeof(absdisp));

				/*	.long : 32 bits == 4 bytes	*/
				yyengine->cp->PC += 4;
			}
		}
#line 5159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 2036 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			/*						*/
			/*	My understanding is that the .comm is	*/
			/*	a global var definition. The address 	*/
			/*	in memory of the global var is the	*/
			/*	PC of the .comm defn.			*/
			/*						*/
			if (yyengine->scanning)
			{
				char tmp;
				char *ep = &tmp;

				yyengine->cp->PC += strtol((yyvsp[0].str), &ep, 0);
				
				if (*ep != '\0')
				{
					mprint(yyengine, NULL, siminfo, "invalid size for .comm variable");
				}	
			}
		}
#line 5184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 2059 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_add(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}
		
				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1100;
				tmp.code_hi = B0011;

				if (yyengine->cp->PC - yyengine->cp->MEMBASE < 0 ||
					yyengine->cp->PC - yyengine->cp->MEMBASE > yyengine->cp->MEMSIZE - 1)
				{
					sfatal(yyengine, yyengine->cp, "Invalid PC address. Must be within alocated memory.");
				}
				else
				{
					memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
						&tmp, sizeof(tmp));
				}

				yyengine->cp->PC += 2;
			}
		}
#line 5227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 2100 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_ni tmp;

				if (!yyengine->cp->pipelined)	
				{
					superH_addi(yyengine, yyengine->cp, (yyvsp[-2].sval), (yyvsp[0].uval));
				}
		
				tmp.imm = ((yyvsp[-2].sval)&B11111111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code = B0111;

				if (yyengine->cp->PC - yyengine->cp->MEMBASE < 0 ||
					yyengine->cp->PC - yyengine->cp->MEMBASE > yyengine->cp->MEMSIZE - 1)
				{
					sfatal(yyengine, yyengine->cp, "Invalid PC address. Must be within allocated memory.");
				}
				else
				{
					memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
						&tmp, sizeof(tmp));
				}
				yyengine->cp->PC += 2;
				
			}
		}
#line 5269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 2140 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_addc(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1110;
				tmp.code_hi = B0011;

				if (yyengine->cp->PC - yyengine->cp->MEMBASE < 0 ||
					yyengine->cp->PC - yyengine->cp->MEMBASE > yyengine->cp->MEMSIZE - 1)
				{
					sfatal(yyengine, yyengine->cp, "Invalid PC address. Must be within allocated memory.");
				}
				else
				{
					memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
						&tmp, sizeof(tmp));
				}
				yyengine->cp->PC += 2;
			}
		}
#line 5311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 2180 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_addv(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1111;
				tmp.code_hi = B0011;
			
				if (yyengine->cp->PC - yyengine->cp->MEMBASE < 0 ||
					yyengine->cp->PC - yyengine->cp->MEMBASE > yyengine->cp->MEMSIZE - 1)
				{
					sfatal(yyengine, yyengine->cp, "Invalid PC address. Must be within allocated memory.");
				}
				else
				{
					memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
						&tmp, sizeof(tmp));
				}
				yyengine->cp->PC += 2;
			}
		}
#line 5353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 2220 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_and(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}
	
				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1001;
				tmp.code_hi = B0010;

				if (yyengine->cp->PC - yyengine->cp->MEMBASE < 0 ||
					yyengine->cp->PC - yyengine->cp->MEMBASE > yyengine->cp->MEMSIZE - 1)
				{
					sfatal(yyengine, yyengine->cp, "Invalid PC address. Must be within allocated memory.");
				}
				else
				{
					memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
						&tmp, sizeof(tmp));
				}
				yyengine->cp->PC += 2;
			}
		}
#line 5395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 2260 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_i tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_andi(yyengine, yyengine->cp, (yyvsp[-2].sval));
				}
	
				tmp.imm = ((yyvsp[-2].sval)&B11111111);
				tmp.code = B11001001;

				if (yyengine->cp->PC - yyengine->cp->MEMBASE < 0 ||
					yyengine->cp->PC - yyengine->cp->MEMBASE > yyengine->cp->MEMSIZE - 1)
				{
					sfatal(yyengine, yyengine->cp, "Invalid PC address. Must be within allocated memory.");
				}
				else
				{
					memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
						&tmp, sizeof(tmp));
				}
				yyengine->cp->PC += 2;
			}
		}
#line 5435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 2298 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_i tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_andm(yyengine, yyengine->cp, (yyvsp[-7].sval));
				}
			
				tmp.imm = ((yyvsp[-7].sval)&B11111111);
				tmp.code = B11001101;

				if (yyengine->cp->PC - yyengine->cp->MEMBASE < 0 ||
					yyengine->cp->PC - yyengine->cp->MEMBASE > yyengine->cp->MEMSIZE - 1)
				{
					sfatal(yyengine, yyengine->cp, "Invalid PC address. Must be within allocated memory.");
				}
				else
				{
					memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
						&tmp, sizeof(tmp));
				}
				yyengine->cp->PC += 2;
			}
		}
#line 5475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 2336 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				/*						*/
				/*	The disp is absolute, and we have to	*/
				/*	pass PC relative to bra(). No need to	*/
				/*	PC-2 as in main.c, since no pipelining	*/
				/*						*/
				instr_d8 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_bf(yyengine, yyengine->cp, (yyvsp[0].sval) - yyengine->cp->PC);
				}

				tmp.disp = ((yyvsp[0].sval)&B11111111);
				tmp.code = B10001011;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 5512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 2371 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				/*						*/
				/*	The disp is absolute, and we have to	*/
				/*	pass PC relative to bra(). No need to	*/
				/*	PC-2 as in main.c, since no pipelining	*/
				/*						*/
				instr_d8 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_bfs(yyengine, yyengine->cp, (yyvsp[0].sval) - yyengine->cp->PC);
				}
	
				tmp.disp = ((yyvsp[0].sval)&B11111111);
				tmp.code = B10001111;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 5549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 2406 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_d12 tmp;

				if (!yyengine->cp->pipelined)
				{
					/*						*/
					/*	The disp is absolute, and we have to	*/
					/*	pass PC relative to bra(). No need to	*/
					/*	PC-2 as in main.c, since no pipelining	*/
					/*						*/
					superH_bra(yyengine, yyengine->cp, (yyvsp[0].sval) - yyengine->cp->PC);
				}

				tmp.disp = (yyvsp[0].sval);
				tmp.code = B1010;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 5586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 2441 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;
	
				if (!yyengine->cp->pipelined)
				{
					superH_braf(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00100011;
				tmp.code_hi = B0000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 5619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 2472 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else
			{
				/*						*/
				/*	The disp is absolute, and we have to	*/
				/*	pass PC relative to bra(). No need to	*/
				/*	PC-2 as in main.c, since no pipelining	*/
				/*						*/
				instr_d12 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_bsr(yyengine, yyengine->cp, (yyvsp[0].sval) - yyengine->cp->PC);
				}

				tmp.disp = ((yyvsp[0].sval)&B111111111111);
				tmp.code = B1011;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 5651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 2502 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_bsrf(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00000011;
				tmp.code_hi = B0000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 5684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 2533 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				/*						*/
				/*	The disp is absolute, and we have to	*/
				/*	pass PC relative to bra(). No need to	*/
				/*	PC-2 as in main.c, since no pipelining	*/
				/*						*/
				instr_d8 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_bt(yyengine, yyengine->cp, (yyvsp[0].sval) - yyengine->cp->PC);
				}

				tmp.disp = ((yyvsp[0].sval)&B11111111);
				tmp.code = B10001001;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 5721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 2568 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				/*						*/
				/*	The disp is absolute, and we have to	*/
				/*	pass PC relative to bra(). No need to	*/
				/*	PC-2 as in main.c, since no pipelining	*/
				/*						*/
				instr_d8 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_bts(yyengine, yyengine->cp, (yyvsp[0].sval) - yyengine->cp->PC);
				}

				tmp.disp = ((yyvsp[0].sval)&B11111111);
				tmp.code = B10001101;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 5758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 2603 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_0 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_clrmac(yyengine, yyengine->cp);
				}

				tmp.code = B0000000000101000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 5789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 2632 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_0 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_clrs(yyengine, yyengine->cp);
				}

				tmp.code = B0000000001001000;
			
				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 5820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 2661 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_0 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_clrt(yyengine, yyengine->cp);
				}

				tmp.code = B0000000000001000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 5851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 2690 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_cmpeq(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B0000;
				tmp.code_hi = B0011;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 5885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 2722 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_cmpge(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B0011;
				tmp.code_hi = B0011;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 5919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 2754 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_cmpgt(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}
	
				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B0111;
				tmp.code_hi = B0011;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 5953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 2786 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_cmphi(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B0110; 
				tmp.code_hi = B0011;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 5987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 2818 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_cmphs(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B0010;
				tmp.code_hi = B0011;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 2850 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_cmppl(yyengine, yyengine->cp, (yyvsp[0].uval));
				}
				tmp.dst = ((yyvsp[0].uval)&B111);
				tmp.code_lo = B00010101;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 2880 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_cmppz(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00010001;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 2911 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_cmpstr(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}
		
				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1100;
				tmp.code_hi = B0010;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 2943 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_i tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_cmpim(yyengine, yyengine->cp, (yyvsp[-2].sval));
				}

				tmp.imm = ((yyvsp[-2].sval)&B11111111);
				tmp.code = B10001000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 2973 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_div0s(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B0111;
				tmp.code_hi = B0010;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 3005 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_div1(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B0100;
				tmp.code_hi = B0011;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 3037 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_dmuls(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1101;
				tmp.code_hi = B0011;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 3069 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_dmulu(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}
			
				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B0101;
				tmp.code_hi = B0011;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 3101 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_dt(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00010000;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 3132 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_extsb(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1110;
				tmp.code_hi = B0110;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 3164 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_extsw(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1111;
				tmp.code_hi = B0110;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 3196 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_extub(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1100;
				tmp.code_hi = B0110;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 3228 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_extuw(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1101;
				tmp.code_hi = B0110;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 3260 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_jmp(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00101011;
				tmp.code_hi = B0100;


				if (yyengine->cp->PC - yyengine->cp->MEMBASE < 0 ||
					yyengine->cp->PC - yyengine->cp->MEMBASE > yyengine->cp->MEMSIZE - 1)
				{
					sfatal(yyengine, yyengine->cp, "Invalid PC address. Must be within alocated memory.");
				}
				else
				{
					memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
						&tmp, sizeof(tmp));
				}

				yyengine->cp->PC += 2;
			}
		}
#line 6500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 3301 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_jsr(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00001011;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 3332 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_m tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_ldcsr(yyengine, yyengine->cp, (yyvsp[-2].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.code_lo = B00001110;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 3363 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_m tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_ldcgbr(yyengine, yyengine->cp, (yyvsp[-2].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.code_lo = B00011110;
				tmp.code_hi = B0100;
			
				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 3394 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_m tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_ldcvbr(yyengine, yyengine->cp, (yyvsp[-2].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.code_lo = B00101110;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 3425 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_m tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_ldcssr(yyengine, yyengine->cp, (yyvsp[-2].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.code_lo = B00111110;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 3456 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_m tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_ldcspc(yyengine, yyengine->cp, (yyvsp[-2].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.code_lo = B01001110;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 3487 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_mbank tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_ldcr_bank(yyengine, yyengine->cp, (yyvsp[0].uval), (yyvsp[-2].uval));
				}
		
				tmp.code_lo = B1110;
				tmp.reg = ((yyvsp[0].uval)&B111);
				tmp.fill = 1;
				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 3520 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_m tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_ldcmsr(yyengine, yyengine->cp, (yyvsp[-3].uval));
				}

				tmp.src = ((yyvsp[-3].uval)&B1111);
				tmp.code_lo = B00000111;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 3551 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else
			{
				instr_m tmp;
	
				if (!yyengine->cp->pipelined)
				{
					superH_ldcmgbr(yyengine, yyengine->cp, (yyvsp[-3].uval));
				}

				tmp.src = ((yyvsp[-3].uval)&B1111);
				tmp.code_lo = B00010111;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 3577 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_m tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_ldcmvbr(yyengine, yyengine->cp, (yyvsp[-3].uval));
				}

				tmp.src = ((yyvsp[-3].uval)&B1111);
				tmp.code_lo = B00100111;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 3608 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_m  tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_ldcmssr(yyengine, yyengine->cp, (yyvsp[-3].uval));
				}

				tmp.src = ((yyvsp[-3].uval)&B1111);
				tmp.code_lo = B00110111;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 3639 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_m tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_ldcmspc(yyengine, yyengine->cp, (yyvsp[-3].uval));
				}

				tmp.src = ((yyvsp[-3].uval)&B1111);
				tmp.code_lo = B01000111;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 3670 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_mbank tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_ldcmr_bank(yyengine, yyengine->cp, (yyvsp[0].uval), (yyvsp[-3].uval));
				}

				tmp.code_lo = B0111;
				tmp.reg = ((yyvsp[0].uval)&B111);
				tmp.fill = 1;
				tmp.src = ((yyvsp[-3].uval)&B1111);
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 3703 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_m tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_ldsmach(yyengine, yyengine->cp, (yyvsp[-2].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.code_lo = B00001010;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 3734 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_m tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_ldsmacl(yyengine, yyengine->cp, (yyvsp[-2].uval));
				}
	
				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.code_lo = B00011010;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 6994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 3765 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_m tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_ldspr(yyengine, yyengine->cp, (yyvsp[-2].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.code_lo = B00101010;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 3796 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else
			{
				instr_m tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_ldsmmach(yyengine, yyengine->cp, (yyvsp[-3].uval));
				}

				tmp.src = ((yyvsp[-3].uval)&B1111);
				tmp.code_lo = B00000110;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 3822 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_m tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_ldsmmacl(yyengine, yyengine->cp, (yyvsp[-3].uval));
				}

				tmp.src = ((yyvsp[-3].uval)&B1111);
				tmp.code_lo = B00010110;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 3853 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_m tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_ldsmpr(yyengine, yyengine->cp, (yyvsp[-3].uval));
				}

				tmp.src = ((yyvsp[-3].uval)&B1111);
				tmp.code_lo = B00100110;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 3884 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_0 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_ldtlb(yyengine, yyengine->cp);
				}

				tmp.code = B0000000000111000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 3913 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_macl(yyengine, yyengine->cp, (yyvsp[-5].uval), (yyvsp[-1].uval));
				}

				tmp.src = ((yyvsp[-5].uval)&B1111);
				tmp.dst = ((yyvsp[-1].uval)&B1111);
				tmp.code_lo = B1111;
				tmp.code_hi = B0000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 3945 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_macw(yyengine, yyengine->cp, (yyvsp[-5].uval), (yyvsp[-1].uval));
				}

				tmp.src = ((yyvsp[-5].uval)&B1111);
				tmp.dst = ((yyvsp[-1].uval)&B1111);
				tmp.code_lo = B1111;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 3977 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_mov(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B0011;
				tmp.code_hi = B0110;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 4009 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movbs(yyengine, yyengine->cp, (yyvsp[-3].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-3].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B0000;
				tmp.code_hi = B0010;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 4041 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movws(yyengine, yyengine->cp, (yyvsp[-3].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-3].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B0001;
				tmp.code_hi = B0010;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 4073 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movls(yyengine, yyengine->cp, (yyvsp[-3].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-3].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B0010;
				tmp.code_hi = B0010;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 4105 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movbl(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B0000;
				tmp.code_hi = B0110;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 4137 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movwl(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B0001;
				tmp.code_hi = B0110;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 4169 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movll(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
					tmp.code_lo = B0010;
				tmp.code_hi = B0110;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 4201 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movbm(yyengine, yyengine->cp, (yyvsp[-4].uval), (yyvsp[0].uval));
				}
	
				tmp.src = ((yyvsp[-4].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B0100;
				tmp.code_hi = B0010;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 4233 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movwm(yyengine, yyengine->cp, (yyvsp[-4].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-4].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B0101;
				tmp.code_hi = B0010;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 4265 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movlm(yyengine, yyengine->cp, (yyvsp[-4].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-4].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B0110;
				tmp.code_hi = B0010;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 4297 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movbp(yyengine, yyengine->cp, (yyvsp[-3].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-3].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B0100;
				tmp.code_hi = B0110;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 4329 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movwp(yyengine, yyengine->cp, (yyvsp[-3].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-3].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B0101;
				tmp.code_hi = B0110;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 4361 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movlp(yyengine, yyengine->cp, (yyvsp[-3].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-3].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B0110;
				tmp.code_hi = B0110;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 4393 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movbs0(yyengine, yyengine->cp, (yyvsp[-7].uval), (yyvsp[-1].uval));
				}

				tmp.src = ((yyvsp[-7].uval)&B1111);
				tmp.dst = ((yyvsp[-1].uval)&B1111);
				tmp.code_lo = B0100;
				tmp.code_hi = B0000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 4425 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movws0(yyengine, yyengine->cp, (yyvsp[-7].uval), (yyvsp[-1].uval));
				}

				tmp.src = ((yyvsp[-7].uval)&B1111);
				tmp.dst = ((yyvsp[-1].uval)&B1111);
				tmp.code_lo = B0101;
				tmp.code_hi = B0000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 4457 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movls0(yyengine, yyengine->cp, (yyvsp[-7].uval), (yyvsp[-1].uval));
				}

				tmp.src = ((yyvsp[-7].uval)&B1111);
				tmp.dst = ((yyvsp[-1].uval)&B1111);
				tmp.code_lo = B0110;
				tmp.code_hi = B0000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 4489 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movbl0(yyengine, yyengine->cp, (yyvsp[-3].uval), (yyvsp[0].uval));
				}
	
				tmp.src = ((yyvsp[-3].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1100;
				tmp.code_hi = B0000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 4521 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movwl0(yyengine, yyengine->cp, (yyvsp[-3].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-3].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1101;
				tmp.code_hi = B0000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}

		}
#line 7833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 4554 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movll0(yyengine, yyengine->cp, (yyvsp[-3].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-3].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1110;
				tmp.code_hi = B0000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 4586 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_ni tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movi(yyengine, yyengine->cp, (yyvsp[-2].sval), (yyvsp[0].uval));
				}

				tmp.imm = ((yyvsp[-2].sval)&B11111111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code = B1110;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 4617 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				/*						*/
				/*	The disp is absolute, and we have to	*/
				/*	pass PC relative to bra(). No need to	*/
				/*	PC-2 as in main.c, since no pipelining	*/
				/*						*/
				instr_nd8 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movwi(yyengine, yyengine->cp, (yyvsp[-5].sval) - yyengine->cp->PC, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B11111111);
				tmp.disp = ((yyvsp[-5].sval)&B11111111);
				tmp.code = B1001;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 4655 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				/*						*/
				/*	The disp is absolute, and we have to	*/
				/*	pass PC relative to bra(). No need to	*/
				/*	PC-2 as in main.c, since no pipelining	*/
				/*						*/
				instr_nd8 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movli(yyengine, yyengine->cp, (yyvsp[-5].sval) - yyengine->cp->PC, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B11111111);
				tmp.disp = ((yyvsp[-5].sval)&B11111111);
				tmp.code = B1101;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 7976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 424:
#line 4690 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				/*						*/
				/*	The disp is absolute, and we have to	*/
				/*	pass PC relative to bra(). No need to	*/
				/*	PC-2 as in main.c, since no pipelining	*/
				/*						*/
				instr_nd8 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movli(yyengine, yyengine->cp, (yyvsp[-2].sval) - yyengine->cp->PC, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B11111111);
				tmp.disp = ((yyvsp[-2].sval)&B11111111);
				tmp.code = B1101;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 425:
#line 4726 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				/*						*/
				/*	The disp is absolute, and we have to	*/
				/*	pass PC relative to bra(). No need to	*/
				/*	PC-2 as in main.c, since no pipelining	*/
				/*						*/
				instr_d8 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movblg(yyengine, yyengine->cp, (yyvsp[-5].sval) - yyengine->cp->PC);
				}

				tmp.disp = ((yyvsp[-5].sval)&B11111111);
				tmp.code = B11000100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 426:
#line 4761 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				/*						*/
				/*	The disp is absolute, and we have to	*/
				/*	pass PC relative to bra(). No need to	*/
				/*	PC-2 as in main.c, since no pipelining	*/
				/*						*/
				instr_d8 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movwlg(yyengine, yyengine->cp, (yyvsp[-5].sval) - yyengine->cp->PC);
				}

				tmp.disp = ((yyvsp[-5].sval)&B11111111);
				tmp.code = B11000101;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4796 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				/*						*/
				/*	The disp is absolute, and we have to	*/
				/*	pass PC relative to bra(). No need to	*/
				/*	PC-2 as in main.c, since no pipelining	*/
				/*						*/
				instr_d8 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movllg(yyengine, yyengine->cp, (yyvsp[-5].sval) - yyengine->cp->PC);
				}

				tmp.disp = ((yyvsp[-5].sval)&B11111111);
				tmp.code = B11000110;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4831 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				/*						*/
				/*	The disp is absolute, and we have to	*/
				/*	pass PC relative to bra(). No need to	*/
				/*	PC-2 as in main.c, since no pipelining	*/
				/*						*/
				instr_d8 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movbsg(yyengine, yyengine->cp, (yyvsp[-3].sval) - yyengine->cp->PC);
				}

				tmp.disp = ((yyvsp[-3].sval)&B11111111);
				tmp.code = B11000000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 429:
#line 4866 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				/*						*/
				/*	The disp is absolute, and we have to	*/
				/*	pass PC relative to bra(). No need to	*/
				/*	PC-2 as in main.c, since no pipelining	*/
				/*						*/
				instr_d8 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movwsg(yyengine, yyengine->cp, (yyvsp[-3].sval) - yyengine->cp->PC);
				}

				tmp.disp = ((yyvsp[-3].sval)&B11111111);
				tmp.code = B11000001;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 430:
#line 4901 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				/*						*/
				/*	The disp is absolute, and we have to	*/
				/*	pass PC relative to bra(). No need to	*/
				/*	PC-2 as in main.c, since no pipelining	*/
				/*						*/
				instr_d8 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movlsg(yyengine, yyengine->cp, (yyvsp[-3].sval) - yyengine->cp->PC);
				}

				tmp.disp = ((yyvsp[-3].sval)&B11111111);
				tmp.code = B11000010;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4936 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				/*						*/
				/*	The disp is absolute, and we have to	*/
				/*	pass PC relative to bra(). No need to	*/
				/*	PC-2 as in main.c, since no pipelining	*/
				/*						*/
				instr_nd4 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movbs4(yyengine, yyengine->cp, (yyvsp[-3].sval) - yyengine->cp->PC, (yyvsp[-1].uval));
				}
	
				tmp.dst = ((yyvsp[-1].uval)&B1111);
				tmp.disp = ((yyvsp[-3].sval)&B1111);
				tmp.code = B10000000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 432:
#line 4972 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				/*						*/
				/*	The disp is absolute, and we have to	*/
				/*	pass PC relative to bra(). No need to	*/
				/*	PC-2 as in main.c, since no pipelining	*/
				/*						*/
				instr_nd4 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movws4(yyengine, yyengine->cp, (yyvsp[-3].sval) - yyengine->cp->PC, (yyvsp[-1].uval));
				}

				tmp.dst = ((yyvsp[-1].uval)&B1111);
				tmp.disp = ((yyvsp[-3].sval)&B1111);
				tmp.code = B10000001;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 433:
#line 5008 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				/*						*/
				/*	The disp is absolute, and we have to	*/
				/*	pass PC relative to bra(). No need to	*/
				/*	PC-2 as in main.c, since no pipelining	*/
				/*						*/
				instr_nmd tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movls4(yyengine, yyengine->cp, (yyvsp[-7].uval), (yyvsp[-3].sval) - yyengine->cp->PC, (yyvsp[-1].uval));
				}

				tmp.src = ((yyvsp[-7].uval)&B1111);
				tmp.dst = ((yyvsp[-1].uval)&B1111);
				tmp.disp = ((yyvsp[-3].sval)&B1111);
				tmp.code = B0001;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 434:
#line 5045 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				/*						*/
				/*	The disp is absolute, and we have to	*/
				/*	pass PC relative to bra(). No need to	*/
				/*	PC-2 as in main.c, since no pipelining	*/
				/*						*/
				instr_md tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movbl4(yyengine, yyengine->cp, (yyvsp[-5].sval) - yyengine->cp->PC, (yyvsp[-3].uval));
				}

				tmp.src = ((yyvsp[-3].uval)&B1111);
				tmp.disp = ((yyvsp[-5].sval)&B1111);
				tmp.code = B10000100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 435:
#line 5081 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				/*						*/
				/*	The disp is absolute, and we have to	*/
				/*	pass PC relative to bra(). No need to	*/
				/*	PC-2 as in main.c, since no pipelining	*/
				/*						*/
				instr_md tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movwl4(yyengine, yyengine->cp, (yyvsp[-5].sval) - yyengine->cp->PC, (yyvsp[-3].uval));
				}

				tmp.src = ((yyvsp[-3].uval)&B1111);
				tmp.disp = ((yyvsp[-5].sval)&B1111);
				tmp.code = B10000101;
	
				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 436:
#line 5117 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				/*						*/
				/*	The disp is absolute, and we have to	*/
				/*	pass PC relative to bra(). No need to	*/
				/*	PC-2 as in main.c, since no pipelining	*/
				/*						*/
				instr_nmd tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movll4(yyengine, yyengine->cp, (yyvsp[-3].uval), (yyvsp[-5].sval) - yyengine->cp->PC, (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-3].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.disp = ((yyvsp[-5].sval)&B1111);
				tmp.code = B0101;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 437:
#line 5154 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				/*						*/
				/*	The disp is absolute, and we have to	*/
				/*	pass PC relative to bra(). No need to	*/
				/*	PC-2 as in main.c, since no pipelining	*/
				/*						*/
				instr_d8 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_mova(yyengine, yyengine->cp, (yyvsp[-5].sval) - yyengine->cp->PC);
				}

				tmp.disp = ((yyvsp[-5].sval)&B11111111);
				tmp.code = B11000111;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 438:
#line 5189 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_movt(yyengine, yyengine->cp, (yyvsp[0].uval));
				}
		
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00101001;
				tmp.code_hi = B0000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 439:
#line 5220 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_mull(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}
		
				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B0111;
				tmp.code_hi = B0000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 440:
#line 5252 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_muls(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1111;
				tmp.code_hi = B0010;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 441:
#line 5284 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_muls(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1111;
				tmp.code_hi = B0010;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 442:
#line 5316 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_mulu(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1110;
				tmp.code_hi = B0010;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 443:
#line 5348 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_mulu(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1110;
				tmp.code_hi = B0010;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 444:
#line 5380 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_neg(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1011;
				tmp.code_hi = B0110;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 445:
#line 5412 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_negc(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}
			
				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1010;
				tmp.code_hi = B0110;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 5444 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_0 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_nop(yyengine, yyengine->cp);
				}

				tmp.code = B0000000000001001;
			
				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 5473 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_not(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B0111;
				tmp.code_hi = B0110;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 448:
#line 5505 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_or(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1011;
				tmp.code_hi = B0010;
	
				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 449:
#line 5537 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_i tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_ori(yyengine, yyengine->cp, (yyvsp[-2].sval));
				}

				tmp.imm = ((yyvsp[-2].sval)&B11111111);
				tmp.code = B11001011;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 450:
#line 5567 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_i tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_orm(yyengine, yyengine->cp, (yyvsp[-7].sval));
				}

				tmp.imm = ((yyvsp[-7].sval)&B11111111);
				tmp.code = B11001111;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 451:
#line 5597 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_pref(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B10000011;
				tmp.code_hi = B0000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 8970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 452:
#line 5628 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_i tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_rfg(yyengine, yyengine->cp, (yyvsp[0].sval));
				}

				tmp.imm = ((yyvsp[0].sval)&B11111111);
				tmp.code = B11110000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 453:
#line 5657 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_rotcl(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00100100;
				tmp.code_hi =  B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 454:
#line 5688 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_rotcr(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00100101;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 455:
#line 5719 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_rotl(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00000100;
				tmp.code_hi = B0100;
	
				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 456:
#line 5750 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_rotr(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00000101;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 457:
#line 5781 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_0 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_rte(yyengine, yyengine->cp);
				}

				tmp.code = B0000000000101011;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 458:
#line 5810 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_0 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_rts(yyengine, yyengine->cp);
				}

				tmp.code = B0000000000001011;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 459:
#line 5839 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_0 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_sets(yyengine, yyengine->cp);
				}

				tmp.code = B0000000001011000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 460:
#line 5868 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_0 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_sett(yyengine, yyengine->cp);
				}

				tmp.code = B0000000000011000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 461:
#line 5897 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_shad(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}
	
				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1100; 
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 462:
#line 5929 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_shal(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00100000;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 463:
#line 5960 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_shar(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00100001;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;	
			}
		}
#line 9358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 464:
#line 5991 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_shld(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1101;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 465:
#line 6023 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_shll(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00000000;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 466:
#line 6054 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_shll2(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00001000;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 467:
#line 6085 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_shll8(yyengine, yyengine->cp, (yyvsp[0].uval));
				}
		
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00011000;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 468:
#line 6116 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_shll16(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00101000;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 469:
#line 6147 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_shlr(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00000001;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 470:
#line 6178 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_shlr2(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00001001;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 471:
#line 6209 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_shlr8(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00011001;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 472:
#line 6240 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_shlr16(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00101001;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 473:
#line 6271 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_0 tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_sleep(yyengine, yyengine->cp);
				}

				tmp.code = B0000000000011011;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 474:
#line 6300 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_stcsr(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00000010;
				tmp.code_hi = B0000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 475:
#line 6331 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_stcgbr(yyengine, yyengine->cp, (yyvsp[0].uval));
				}
			
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00010010;
				tmp.code_hi = B0000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 476:
#line 6362 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_stcvbr(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00100010;
				tmp.code_hi = B0000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 477:
#line 6393 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_stcssr(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00110010;
				tmp.code_hi = B0000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 478:
#line 6424 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_stcspc(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B01000010;
				tmp.code_hi = B0000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 479:
#line 6455 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nbank tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_stcr_bank(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.code_lo = B0010;
				tmp.reg = ((yyvsp[-2].uval)&B111);
				tmp.fill = 1;
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_hi = B0000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 480:
#line 6488 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_stcmsr(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00000011;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 481:
#line 6519 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_stcmgbr(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00010011;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 482:
#line 6550 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_stcmvbr(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00100011;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 9986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 483:
#line 6581 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_stcmssr(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00110011;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 10019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 484:
#line 6612 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_stcmspc(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B01000011;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 10052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 485:
#line 6643 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nbank tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_stcmr_bank(yyengine, yyengine->cp, (yyvsp[-4].uval), (yyvsp[0].uval));
				}

				tmp.code_lo = B0011;
				tmp.reg = ((yyvsp[-4].uval)&B111);
				tmp.fill = 1;
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 10087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 486:
#line 6676 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_stsmach(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00001010;
				tmp.code_hi = B0000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 10120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 487:
#line 6707 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_stsmacl(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00011010;
				tmp.code_hi = B0000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 10153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 488:
#line 6738 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_stspr(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00101010;
				tmp.code_hi = B0000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 10186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 489:
#line 6769 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_stsmmach(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00000010;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 10219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 490:
#line 6800 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_stsmmacl(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00010010;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 10252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 491:
#line 6831 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_stsmpr(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00100010;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 10285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 492:
#line 6862 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_sub(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1000;
				tmp.code_hi = B0011;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 10319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 493:
#line 6894 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_subc(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1010;
				tmp.code_hi = B0011;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 10353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 494:
#line 6926 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_subv(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1011;
				tmp.code_hi = B0011;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 10387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 495:
#line 6958 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_swapb(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1000;
				tmp.code_hi = B0110;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 10421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 496:
#line 6990 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_swapw(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1001;
				tmp.code_hi = B0110;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 10455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 497:
#line 7022 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_n tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_tas(yyengine, yyengine->cp, (yyvsp[0].uval));
				}

				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B00011011;
				tmp.code_hi = B0100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 10488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 498:
#line 7053 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_i tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_trapa(yyengine, yyengine->cp, (yyvsp[0].sval));
				}

				tmp.imm = ((yyvsp[0].sval)&B11111111);
				tmp.code = B11000011;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 10520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 499:
#line 7083 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_tst(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1000;
				tmp.code_hi = B0010;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 10554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 500:
#line 7115 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_i tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_tsti(yyengine, yyengine->cp, (yyvsp[-2].sval));
				}

				tmp.imm = ((yyvsp[-2].sval)&B11111111);
				tmp.code = B11001000;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 10586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 501:
#line 7145 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_i tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_tstm(yyengine, yyengine->cp, (yyvsp[-7].sval));
				}

				tmp.imm = ((yyvsp[-7].sval)&B11111111);
				tmp.code = B11001100;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 10618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 502:
#line 7175 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_xor(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1010;
				tmp.code_hi = B0010;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 10652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 503:
#line 7207 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_i tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_xori(yyengine, yyengine->cp, (yyvsp[-2].sval));
				}

				tmp.imm = ((yyvsp[-2].sval)&B11111111);
				tmp.code = B11001010;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 10684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 504:
#line 7237 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_i tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_xorm(yyengine, yyengine->cp, (yyvsp[-7].sval));
				}

				tmp.imm = ((yyvsp[-7].sval)&B11111111);
				tmp.code = B11001110;
	
				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 10716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 505:
#line 7267 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 2;
			}
			else if (yyengine->cp->machinetype != MACHINE_SUPERH)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for Hitachi SH nodes only. Check node type.");
			}
			else
			{
				instr_nm tmp;

				if (!yyengine->cp->pipelined)
				{
					superH_xtrct(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval));
				}

				tmp.src = ((yyvsp[-2].uval)&B1111);
				tmp.dst = ((yyvsp[0].uval)&B1111);
				tmp.code_lo = B1101;
				tmp.code_hi = B0010;

				memmove(&yyengine->cp->MEM[yyengine->cp->PC - yyengine->cp->MEMBASE],
					&tmp, sizeof(tmp));
				yyengine->cp->PC += 2;
			}
		}
#line 10750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 508:
#line 7316 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				//$$->value = m_randgen(yyengine->cp, $3, $4, $5, $6, $7);
			}
		}
#line 10761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 509:
#line 7325 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				//$$->value = m_randgen(yyengine->cp, $3, $4, $5, $6, $7);
				//$$->rv.pfunid = m_pfunname2id(yyengine->cp, $3);
				//$$->rv.disttabid = m_disttabname2id(yyengine->cp, $3);
				(yyval.rval)->rv.p1 = (yyvsp[-4].dval);
				(yyval.rval)->rv.p2 = (yyvsp[-3].dval);
				(yyval.rval)->rv.p3 = (yyvsp[-2].dval);
				(yyval.rval)->rv.p4 = (yyvsp[-1].dval);
			}
		}
#line 10778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 510:
#line 7920 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			char tmp;
			char *ep = &tmp;

			(yyval.uval) = strtoul((yyvsp[0].str), &ep, 0);
			
			if (*ep != '\0')
			{
				merror(yyengine, "Invalid unsigned immediate data %s.", (yyvsp[0].str));
			}
		}
#line 10794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 511:
#line 7934 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			char tmp;
			char *ep = &tmp;

			(yyval.sval) = strtol((yyvsp[0].str), &ep, 0);
			
			if (*ep != '\0')
			{
				merror(yyengine, "Invalid signed immediate data %s.", (yyvsp[0].str));
			}
		}
#line 10810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 512:
#line 7946 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			char tmp;
			char *ep = &tmp;

			(yyval.sval) = -(strtol((yyvsp[0].str), &ep, 0));
				
			if (*ep != '\0')
			{
				merror(yyengine, "Invalid signed immediate data %s.", (yyvsp[0].str));
			}
		}
#line 10826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 513:
#line 7958 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			char tmp;
			char *ep = &tmp;

			(yyval.sval) = +(strtol((yyvsp[0].str), &ep, 0));
				
			if (*ep != '\0')
			{
				merror(yyengine, "Invalid signed immediate data %s.", (yyvsp[0].str));
			}
		}
#line 10842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 514:
#line 7972 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			char tmp;
			char *ep = &tmp;

			(yyval.dval) = strtod((yyvsp[0].str), &ep);
			
			if (*ep != '\0')
			{
				merror(yyengine, "Invalid double immediate data %s.", (yyvsp[0].str));
			}
		}
#line 10858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 515:
#line 7984 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			char tmp;
			char *ep = &tmp;

			(yyval.dval) = -(strtod((yyvsp[0].str), &ep));
				
			if (*ep != '\0')
			{
				merror(yyengine, "Invalid double immediate data %s.", (yyvsp[0].str));
			}
		}
#line 10874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 516:
#line 7996 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			char tmp;
			char *ep = &tmp;

			(yyval.dval) = +(strtod((yyvsp[0].str), &ep));
				
			if (*ep != '\0')
			{
				merror(yyengine, "Invalid double immediate data %s.", (yyvsp[0].str));
			}
		}
#line 10890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 517:
#line 8010 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			(yyval.rval) = (Rval *) mcalloc(yyengine, 1, sizeof(Rval), "sf.y:rdimm/$$");
			if ((yyval.rval) == NULL)
			{
				sfatal(yyengine, yyengine->cp, "Mcalloc failed");
			}

			(yyval.rval)->dval = (yyvsp[0].dval);
		}
#line 10904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 519:
#line 8058 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			(yyval.dlist) = (yyvsp[-1].dlist);
		}
#line 10912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 520:
#line 8064 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			DoubleListItem	*item;

			(yyval.dlist) = (DoubleList *) mcalloc(yyengine, 1, sizeof(DoubleList), "sf.y:dimmlistbody/$$");
			if ((yyval.dlist) == NULL)
			{
				sfatal(yyengine, yyengine->cp, "Mcalloc failed");
			}

			item = (DoubleListItem *)mcalloc(yyengine, 1, sizeof(DoubleListItem), "sf.y:dimmlistbody/item,1");
			if (item == NULL)
			{
				sfatal(yyengine, yyengine->cp, "Mcalloc failed");
			}
			item->value = (yyvsp[0].dval);
			item->next = NULL;

			(yyval.dlist)->hd = (yyval.dlist)->tl = item;
			(yyval.dlist)->len = 1;
		}
#line 10937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 521:
#line 8085 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			DoubleListItem	*item;

			item = (DoubleListItem *)mcalloc(yyengine, 1, sizeof(DoubleListItem), "sf.y:dimmlistbody/item,2");
			if (item == NULL)
			{
				sfatal(yyengine, yyengine->cp, "Mcalloc failed");
			}
			item->value = (yyvsp[0].dval);
			item->next = NULL;

			(yyval.dlist)->tl->next = item;
			(yyval.dlist)->tl = item;
		}
#line 10956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 522:
#line 8103 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			/*								*/
			/*	According to manual, PC of instr two instrs away is	*/
			/*	used to calculate target addr:				*/
			/*			BF					*/
			/*			NOP					*/
			/*			NOP <- this PC is used to calc targ	*/
			/*	We divide by two b'cos the disp is in terms of number	*/
			/*	of instructions, whereas the PC arithmetic is in terms	*/
			/*	of mem loacation, and instructions are placed in mem	*/
			/*	at every other byte.					*/
			/*								*/
			(yyval.sval) = ((yyvsp[0].uval) - (yyengine->cp->PC+4)) >> 1;

			/*	Warn if the PC calculated displacement was not a multiple of 2 */
			if (((yyvsp[0].uval) - (yyengine->cp->PC+4)) & 0x1)
			{
				merror(yyengine, "Disp in terms of mem addr was not on word boundary.");
			}
		}
#line 10981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 523:
#line 8124 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			char tmp;
			char *ep = &tmp;


			(yyval.sval) = strtol((yyvsp[0].str), &ep, 0);
				
			if (*ep != '\0')
			{
				merror(yyengine, "Invalid DISP ([%s]). Possibly due to a .comm.", (yyvsp[0].str));
			}
		}
#line 10998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 524:
#line 8137 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			char tmp;
			char *ep = &tmp;


			(yyval.sval) = +(strtol((yyvsp[0].str), &ep, 0));
				
			if (*ep != '\0')
			{
				merror(yyengine, "Invalid DISP ([%s]). Possibly due to a .comm.", (yyvsp[0].str));
			}
		}
#line 11015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 525:
#line 8150 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			char tmp;
			char *ep = &tmp;


			(yyval.sval) = -(strtol((yyvsp[0].str), &ep, 0));
				
			if (*ep != '\0')
			{
				merror(yyengine, "Invalid DISP ([%s]). Possibly due to a .comm.", (yyvsp[0].str));
			}
		}
#line 11032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 526:
#line 8165 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			/*								*/
			/*	To make handling of empty string in T_RUN rule 		*/
			/*	uniform, we malloc a place holder.			*/
			/*								*/
			char *tmp = mmalloc(yyengine, sizeof(char), "opstring rule in shasm.y");
			tmp[0] = '\0';
			(yyval.str) = tmp;
		}
#line 11046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 527:
#line 8175 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {
			(yyval.str) = (yyvsp[0].str);
		}
#line 11054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 528:
#line 8181 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {(yyval.uval) = 0;}
#line 11060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 529:
#line 8182 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {(yyval.uval) = 1;}
#line 11066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 530:
#line 8183 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {(yyval.uval) = 2;}
#line 11072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 531:
#line 8184 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {(yyval.uval) = 3;}
#line 11078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 532:
#line 8185 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {(yyval.uval) = 4;}
#line 11084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 533:
#line 8186 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {(yyval.uval) = 5;}
#line 11090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 534:
#line 8187 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {(yyval.uval) = 6;}
#line 11096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 535:
#line 8188 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {(yyval.uval) = 7;}
#line 11102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 536:
#line 8189 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {(yyval.uval) = 8;}
#line 11108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 537:
#line 8190 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {(yyval.uval) = 9;}
#line 11114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 538:
#line 8191 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {(yyval.uval) = 10;}
#line 11120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 539:
#line 8192 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {(yyval.uval) = 11;}
#line 11126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 8193 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {(yyval.uval) = 12;}
#line 11132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 541:
#line 8194 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {(yyval.uval) = 13;}
#line 11138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 542:
#line 8195 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {(yyval.uval) = 14;}
#line 11144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 543:
#line 8196 "sf-hitachi-sh.y" /* yacc.c:1646  */
    {(yyval.uval) = 15;}
#line 11150 "y.tab.c" /* yacc.c:1646  */
    break;


#line 11154 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 8198 "sf-hitachi-sh.y" /* yacc.c:1906  */


#include "lex-hitachi-sh.c"

int
yyerror(char *err)
{
	merror(yyengine, "Invalid command!");
	clearistream(yyengine);
	
	return 0;
}
