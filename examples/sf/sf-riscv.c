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
#line 39 "sf-riscv.y" /* yacc.c:339  */

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
    T_TAINTMEM = 410,
    T_TAINTREG = 411,
    T_FTAINTREG = 412,
    T_DUMPTAINTDISTR = 413,
    T_GLOBALTIME = 414,
    T_CYCLES = 415,
    T_INSTRS = 416,
    T_SENSORREADING = 417,
    T_DOTALIGN = 418,
    T_DOTORG = 419,
    T_DOTDATA = 420,
    T_DOTTEXT = 421,
    T_DOTGLOBAL = 422,
    T_DOTFILE = 423,
    T_DOTLONG = 424,
    T_DOTCOMM = 425,
    T_X0 = 426,
    T_X1 = 427,
    T_X2 = 428,
    T_X3 = 429,
    T_X4 = 430,
    T_X5 = 431,
    T_X6 = 432,
    T_X7 = 433,
    T_X8 = 434,
    T_X9 = 435,
    T_X10 = 436,
    T_X11 = 437,
    T_X12 = 438,
    T_X13 = 439,
    T_X14 = 440,
    T_X15 = 441,
    T_X16 = 442,
    T_X17 = 443,
    T_X18 = 444,
    T_X19 = 445,
    T_X20 = 446,
    T_X21 = 447,
    T_X22 = 448,
    T_X23 = 449,
    T_X24 = 450,
    T_X25 = 451,
    T_X26 = 452,
    T_X27 = 453,
    T_X28 = 454,
    T_X29 = 455,
    T_X30 = 456,
    T_X31 = 457,
    T_PC = 458,
    T_F0 = 459,
    T_F1 = 460,
    T_F2 = 461,
    T_F3 = 462,
    T_F4 = 463,
    T_F5 = 464,
    T_F6 = 465,
    T_F7 = 466,
    T_F8 = 467,
    T_F9 = 468,
    T_F10 = 469,
    T_F11 = 470,
    T_F12 = 471,
    T_F13 = 472,
    T_F14 = 473,
    T_F15 = 474,
    T_F16 = 475,
    T_F17 = 476,
    T_F18 = 477,
    T_F19 = 478,
    T_F20 = 479,
    T_F21 = 480,
    T_F22 = 481,
    T_F23 = 482,
    T_F24 = 483,
    T_F25 = 484,
    T_F26 = 485,
    T_F27 = 486,
    T_F28 = 487,
    T_F29 = 488,
    T_F30 = 489,
    T_F31 = 490,
    T_LABELDEFN = 491,
    T_ADD = 492,
    T_ADDI = 493,
    T_AND = 494,
    T_ANDI = 495,
    T_AUIPC = 496,
    T_BEQ = 497,
    T_BGE = 498,
    T_BGEU = 499,
    T_BLT = 500,
    T_BLTU = 501,
    T_BNE = 502,
    T_FENCE = 503,
    T_FENCE_I = 504,
    T_JAL = 505,
    T_JALR = 506,
    T_LB = 507,
    T_LBU = 508,
    T_LH = 509,
    T_LHU = 510,
    T_LUI = 511,
    T_LW = 512,
    T_OR = 513,
    T_ORI = 514,
    T_SB = 515,
    T_SH = 516,
    T_SLL = 517,
    T_SLLI = 518,
    T_SLT = 519,
    T_SLTI = 520,
    T_SLTIU = 521,
    T_SLTU = 522,
    T_SRA = 523,
    T_SRAI = 524,
    T_SRL = 525,
    T_SRLI = 526,
    T_SUB = 527,
    T_SW = 528,
    T_XOR = 529,
    T_XORI = 530,
    T_LABEL = 531,
    T_STRING = 532,
    T_MAN = 533
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
#define T_TAINTMEM 410
#define T_TAINTREG 411
#define T_FTAINTREG 412
#define T_DUMPTAINTDISTR 413
#define T_GLOBALTIME 414
#define T_CYCLES 415
#define T_INSTRS 416
#define T_SENSORREADING 417
#define T_DOTALIGN 418
#define T_DOTORG 419
#define T_DOTDATA 420
#define T_DOTTEXT 421
#define T_DOTGLOBAL 422
#define T_DOTFILE 423
#define T_DOTLONG 424
#define T_DOTCOMM 425
#define T_X0 426
#define T_X1 427
#define T_X2 428
#define T_X3 429
#define T_X4 430
#define T_X5 431
#define T_X6 432
#define T_X7 433
#define T_X8 434
#define T_X9 435
#define T_X10 436
#define T_X11 437
#define T_X12 438
#define T_X13 439
#define T_X14 440
#define T_X15 441
#define T_X16 442
#define T_X17 443
#define T_X18 444
#define T_X19 445
#define T_X20 446
#define T_X21 447
#define T_X22 448
#define T_X23 449
#define T_X24 450
#define T_X25 451
#define T_X26 452
#define T_X27 453
#define T_X28 454
#define T_X29 455
#define T_X30 456
#define T_X31 457
#define T_PC 458
#define T_F0 459
#define T_F1 460
#define T_F2 461
#define T_F3 462
#define T_F4 463
#define T_F5 464
#define T_F6 465
#define T_F7 466
#define T_F8 467
#define T_F9 468
#define T_F10 469
#define T_F11 470
#define T_F12 471
#define T_F13 472
#define T_F14 473
#define T_F15 474
#define T_F16 475
#define T_F17 476
#define T_F18 477
#define T_F19 478
#define T_F20 479
#define T_F21 480
#define T_F22 481
#define T_F23 482
#define T_F24 483
#define T_F25 484
#define T_F26 485
#define T_F27 486
#define T_F28 487
#define T_F29 488
#define T_F30 489
#define T_F31 490
#define T_LABELDEFN 491
#define T_ADD 492
#define T_ADDI 493
#define T_AND 494
#define T_ANDI 495
#define T_AUIPC 496
#define T_BEQ 497
#define T_BGE 498
#define T_BGEU 499
#define T_BLT 500
#define T_BLTU 501
#define T_BNE 502
#define T_FENCE 503
#define T_FENCE_I 504
#define T_JAL 505
#define T_JALR 506
#define T_LB 507
#define T_LBU 508
#define T_LH 509
#define T_LHU 510
#define T_LUI 511
#define T_LW 512
#define T_OR 513
#define T_ORI 514
#define T_SB 515
#define T_SH 516
#define T_SLL 517
#define T_SLLI 518
#define T_SLT 519
#define T_SLTI 520
#define T_SLTIU 521
#define T_SLTU 522
#define T_SRA 523
#define T_SRAI 524
#define T_SRL 525
#define T_SRLI 526
#define T_SUB 527
#define T_SW 528
#define T_XOR 529
#define T_XORI 530
#define T_LABEL 531
#define T_STRING 532
#define T_MAN 533

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 67 "sf-riscv.y" /* yacc.c:355  */

	double		dval;
	ulong		uval;
	long		sval;
	char		*str;
	Rval		*rval;
	DoubleList	*dlist;

#line 680 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 697 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   2182

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  288
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  316
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  962

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   534

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     279,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   287,   281,   286,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     283,     2,   285,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   280,     2,   282,     2,     2,     2,     2,
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
     275,   276,   277,   278,   284
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   433,   433,   434,   437,   438,   439,   440,   441,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   498,   511,
     524,   537,   550,   563,   573,   583,   611,   618,   625,   632,
     642,   652,   662,   672,   686,   704,   718,   736,   750,   768,
     782,   789,   796,   803,   810,   817,   824,   831,   838,   845,
     852,   860,   867,   875,   893,   911,   918,   925,   932,   939,
     946,   953,   960,   967,   974,   982,   995,  1002,  1009,  1021,
    1028,  1035,  1042,  1049,  1057,  1065,  1072,  1079,  1086,  1094,
    1101,  1115,  1123,  1130,  1137,  1151,  1167,  1174,  1181,  1188,
    1195,  1202,  1209,  1217,  1224,  1231,  1238,  1247,  1254,  1261,
    1268,  1275,  1282,  1289,  1296,  1303,  1310,  1317,  1333,  1341,
    1350,  1357,  1364,  1371,  1378,  1392,  1401,  1415,  1422,  1440,
    1448,  1455,  1462,  1469,  1476,  1483,  1490,  1497,  1504,  1511,
    1518,  1525,  1532,  1539,  1549,  1556,  1563,  1570,  1577,  1585,
    1592,  1599,  1606,  1613,  1621,  1629,  1640,  1645,  1649,  1656,
    1663,  1670,  1677,  1684,  1691,  1698,  1705,  1715,  1722,  1729,
    1737,  1744,  1751,  1758,  1767,  1774,  1781,  1788,  1795,  1802,
    1817,  1824,  1831,  1842,  1853,  1860,  1874,  1901,  1907,  1913,
    1919,  1924,  1929,  1954,  1977,  2018,  2058,  2099,  2139,  2175,
    2223,  2268,  2313,  2358,  2403,  2448,  2455,  2462,  2505,  2544,
    2584,  2624,  2664,  2704,  2740,  2780,  2821,  2861,  2906,  2951,
    2992,  3033,  3074,  3114,  3154,  3195,  3236,  3277,  3318,  3359,
    3400,  3445,  3486,  3526,  3526,  3543,  3552,  4147,  4161,  4173,
    4185,  4199,  4211,  4223,  4237,  4247,  4285,  4291,  4312,  4330,
    4351,  4364,  4377,  4393,  4402,  4409,  4410,  4411,  4412,  4413,
    4414,  4415,  4416,  4417,  4418,  4419,  4420,  4421,  4422,  4423,
    4424,  4425,  4426,  4427,  4428,  4429,  4430,  4431,  4432,  4433,
    4434,  4435,  4436,  4437,  4438,  4439,  4440
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
  "T_VERSION", "T_SETLOC", "T_BPT", "T_BPTLS", "T_BPTDEL", "T_TAINTMEM",
  "T_TAINTREG", "T_FTAINTREG", "T_DUMPTAINTDISTR", "T_GLOBALTIME",
  "T_CYCLES", "T_INSTRS", "T_SENSORREADING", "T_DOTALIGN", "T_DOTORG",
  "T_DOTDATA", "T_DOTTEXT", "T_DOTGLOBAL", "T_DOTFILE", "T_DOTLONG",
  "T_DOTCOMM", "T_X0", "T_X1", "T_X2", "T_X3", "T_X4", "T_X5", "T_X6",
  "T_X7", "T_X8", "T_X9", "T_X10", "T_X11", "T_X12", "T_X13", "T_X14",
  "T_X15", "T_X16", "T_X17", "T_X18", "T_X19", "T_X20", "T_X21", "T_X22",
  "T_X23", "T_X24", "T_X25", "T_X26", "T_X27", "T_X28", "T_X29", "T_X30",
  "T_X31", "T_PC", "T_F0", "T_F1", "T_F2", "T_F3", "T_F4", "T_F5", "T_F6",
  "T_F7", "T_F8", "T_F9", "T_F10", "T_F11", "T_F12", "T_F13", "T_F14",
  "T_F15", "T_F16", "T_F17", "T_F18", "T_F19", "T_F20", "T_F21", "T_F22",
  "T_F23", "T_F24", "T_F25", "T_F26", "T_F27", "T_F28", "T_F29", "T_F30",
  "T_F31", "T_LABELDEFN", "T_ADD", "T_ADDI", "T_AND", "T_ANDI", "T_AUIPC",
  "T_BEQ", "T_BGE", "T_BGEU", "T_BLT", "T_BLTU", "T_BNE", "T_FENCE",
  "T_FENCE_I", "T_JAL", "T_JALR", "T_LB", "T_LBU", "T_LH", "T_LHU",
  "T_LUI", "T_LW", "T_OR", "T_ORI", "T_SB", "T_SH", "T_SLL", "T_SLLI",
  "T_SLT", "T_SLTI", "T_SLTIU", "T_SLTU", "T_SRA", "T_SRAI", "T_SRL",
  "T_SRLI", "T_SUB", "T_SW", "T_XOR", "T_XORI", "T_LABEL", "T_STRING",
  "T_MAN", "'\\n'", "'{'", "','", "'}'", "'<'", "\"rnd\"", "'>'", "'-'",
  "'+'", "$accept", "input", "line", "asm_ctl", "expr", "sf_cmd",
  "dotalign", "dotdata", "dottext", "dotglobal", "dotfile", "dotorg",
  "dotlong", "dotcomm", "add_riscv_instr", "addi_riscv_instr",
  "and_riscv_instr", "andi_riscv_instr", "auipc_riscv_instr",
  "beq_riscv_instr", "bne_riscv_instr", "blt_riscv_instr",
  "bge_riscv_instr", "bltu_riscv_instr", "bgeu_riscv_instr",
  "fence_riscv_instr", "fence_i_riscv_instr", "jal_riscv_instr",
  "jalr_riscv_instr", "lb_riscv_instr", "lbu_riscv_instr",
  "lh_riscv_instr", "lhu_riscv_instr", "lui_riscv_instr", "lw_riscv_instr",
  "or_riscv_instr", "ori_riscv_instr", "sb_riscv_instr", "sh_riscv_instr",
  "sll_riscv_instr", "slli_riscv_instr", "slt_riscv_instr",
  "slti_riscv_instr", "sltiu_riscv_instr", "sltu_riscv_instr",
  "sra_riscv_instr", "srai_riscv_instr", "srl_riscv_instr",
  "srli_riscv_instr", "sub_riscv_instr", "sw_riscv_instr",
  "xor_riscv_instr", "xori_riscv_instr", "rnd", "rnd_const", "rnd_var",
  "uimm", "simm", "dimm", "rdimm", "dimmlist", "dimmlistbody", "disp",
  "optstring", "reg", YY_NULLPTR
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
     525,   526,   527,   528,   529,   530,   531,   532,   533,    10,
     123,    44,   125,    60,   534,    62,    45,    43
};
# endif

#define YYPACT_NINF -647

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-647)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -647,  1903,  -647,  -271,  -271,  -271,  -254,  -254,  -271,  -254,
    -271,  -254,  -254,  -254,  -254,  -254,  -249,  -254,  -235,  -234,
    -251,  -254,  -233,  -254,  -232,  -229,  -254,  -230,  -228,  -227,
    -226,  -225,  -224,  -254,  -254,  -223,  -220,  -254,  -271,  -221,
    -254,  -218,  -217,  -216,  -215,  -214,  -213,  -210,  -211,  -209,
    -208,  -254,  -206,  -205,  -254,  -204,  -254,  -254,  -254,  -254,
    -254,  -254,  -201,  -254,  -254,  -254,  -200,  -254,  -271,  -199,
    -254,  -198,  -197,  -196,  -254,  -193,  -192,  -191,  -190,  -189,
    -188,  -187,  -254,  -254,  -184,  -185,  -183,  -182,  -179,  -180,
    -174,  -254,  -173,  -172,  -171,  -169,  -165,  -254,  -200,  -254,
    -647,  -254,  -254,  -271,  -271,  -271,  -271,  -271,  -254,  -254,
    -254,  -254,  -271,  -254,  -271,  -271,  -271,  -164,  -161,  -271,
    -271,  -254,  -254,  -254,  -254,  -271,  -271,  -254,  -159,  -647,
    -158,  -254,  -254,  -254,  -254,  -254,  -153,  -267,  -152,  -151,
    -254,  -254,  -254,  -150,  -647,  -271,  -123,  -149,  -254,  -254,
     226,   226,  -148,  -254,  -254,  -647,  -647,  -268,  -145,  -268,
    -268,    81,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,  -647,  -647,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,  -146,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -143,  -142,  -141,  -140,  -139,
    -647,  -271,  -138,  -135,  -134,  -133,  -132,  -271,  -131,  -271,
    -130,  -647,  -254,  -647,  -647,  -129,  -128,  -647,  -127,  -647,
    -124,  -254,  -647,  -647,  -647,  -647,  -647,  -647,  -114,  -113,
    -647,  -254,   -86,  -271,  -647,   -84,  -271,  -254,  -254,   -81,
    -144,  -271,   -82,  -647,  -647,  -647,  -254,  -647,  -647,  -254,
    -647,  -254,  -271,   -79,   -80,  -254,  -271,   -78,  -254,  -254,
    -271,  -647,  -266,   -77,   -76,   -75,   -74,  -254,  -647,  -647,
    -254,  -254,  -254,   -73,  -647,  -647,  -647,  -647,   -71,   -69,
     -68,  -647,  -647,  -647,   -65,  -647,  -647,   -63,  -647,  -647,
    -647,  -647,  -647,   -57,   -55,  -254,   -51,   -49,  -647,  -647,
    -647,  -647,   -47,   -44,  -647,   -45,   -43,  -647,   -41,   -39,
     -37,   -36,  -647,  -647,  -647,   -35,   -34,   -33,   -32,   -31,
     -30,  -271,   -29,  -647,  -647,  -200,  -254,   -28,   -27,  -254,
     -26,  -647,   -25,  -647,   -24,   -22,   -20,   -19,  -647,  -271,
    -254,  -254,  -254,  -254,  -647,   -18,  -254,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -254,
    -254,  -647,  -647,  -647,  -647,  -647,   -15,   -14,  -647,  -647,
    -647,  -231,  -647,  -212,  -194,  -186,   -59,   -16,   -13,   -12,
     -11,   -10,    -9,    -7,    -6,    -5,    -4,    -2,    -1,     0,
       1,     2,     3,     4,     5,     6,     7,     8,    11,    13,
      14,    15,    16,    18,    19,    20,    21,    22,    23,    24,
    -647,  -647,  -647,  -647,  -647,  -647,    27,  -647,  -647,  -647,
    -647,  -647,    28,  -647,    29,  -647,  -254,  -647,  -647,  -647,
      34,    33,  -647,  -647,    35,  -647,  -647,  -647,  -271,  -254,
      38,  -271,    36,  -271,  -647,    78,  -271,  -254,  -271,    79,
    -647,    80,    82,  -647,    83,  -271,    84,  -647,  -203,  -156,
    -647,  -647,  -647,  -647,  -255,  -647,  -647,  -647,  -647,  -254,
      85,  -254,  -254,  -647,  -647,  -647,  -647,  -647,  -647,    86,
    -647,    89,  -647,  -647,  -647,    88,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -271,  -647,
    -271,  -647,  -647,  -647,  -254,  -647,  -647,  -647,  -647,  -647,
    -647,  -271,    90,    91,    92,  -271,  -647,  -254,  -254,  -254,
    -647,  -647,    95,   226,   226,   226,   226,  -253,   226,   226,
     226,   226,   226,   226,  -253,   226,   226,   226,   226,   226,
    -253,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
    -647,  -647,  -647,    94,    96,  -647,  -647,  -271,  -254,  -271,
    -271,  -271,    87,  -271,  -647,    97,  -254,  -271,  -647,  -647,
    -647,  -647,  -647,  -647,   100,   102,  -255,  -253,  -647,  -254,
    -254,  -647,   101,  -647,  -271,  -271,   104,   103,  -647,  -647,
    -647,   105,  -254,  -254,  -254,  -647,    93,   106,   107,   108,
    -647,   109,   113,  -647,   110,   111,   112,   114,   148,   149,
    -647,   150,   151,   152,   153,   154,  -647,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,  -647,  -647,  -271,   115,
    -271,  -271,  -647,  -241,    36,  -271,  -647,  -254,  -271,  -271,
    -271,  -250,  -253,  -254,  -254,  -647,  -271,  -271,   176,  -647,
    -647,  -254,   177,   178,   226,  -253,   226,  -253,  -647,  -647,
    -253,  -253,  -254,  -253,  -254,  -253,  -253,  -253,  -254,  -253,
    -254,  -253,   226,  -253,  -253,  -253,   226,  -253,   226,  -253,
    -254,   226,   226,  -253,   226,  -253,   226,  -253,   226,  -253,
     181,  -647,  -271,  -271,  -271,  -647,  -202,  -271,  -254,  -254,
    -271,  -271,  -254,  -647,  -253,  -254,  -254,  -271,  -271,  -647,
     180,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -271,  -271,  -271,
    -647,  -647,  -271,  -271,  -271,  -271,  -271,  -254,  -253,  -254,
    -254,  -271,  -271,  -647,  -271,   183,  -271,   182,  -271,  -271,
    -271,  -271,   184,  -254,   185,   186,  -271,  -271,  -271,  -271,
    -271,  -647,  -271,  -271,   187,   -85,  -647,  -254,  -647,  -647,
    -271,  -271,  -271,  -271,   188,  -254,  -254,  -647,  -647,  -254,
    -271,  -271,   189,  -271,  -647,  -271,  -254,   191,  -271,  -271,
    -271,  -271,  -271,   192,  -647,  -271,  -271,  -271,   195,  -271,
    -647,  -271,  -271,  -271,   194,   196,  -271,  -271,  -271,  -647,
    -647,  -271,  -271,   197,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -647,  -271,  -271,  -271,  -647,  -271,  -271,
    -200,  -254,  -271,  -271,  -271,  -254,  -200,  -254,  -271,  -254,
     198,  -647
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
       0,     0,     0,     0,     0,     0,   283,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   283,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   187,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   117,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   217,   218,     0,     0,     0,
       0,     4,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   215,     3,     7,     6,     8,     9,    10,    11,
      14,    12,    13,    15,    18,    19,    20,    21,    22,    23,
      24,    29,    27,    25,    28,    26,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,   271,     0,     0,     0,     0,     0,
     267,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,     0,   129,   130,     0,     0,   214,     0,   167,
       0,     0,   133,   134,   131,   132,   146,   136,     0,     0,
     168,     0,     0,     0,   188,     0,     0,     0,     0,     0,
       0,     0,     0,   198,   199,   210,     0,   126,   127,     0,
     202,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   284,     0,     0,     0,     0,     0,     0,   143,   144,
       0,     0,     0,     0,   141,   201,   200,   211,     0,     0,
       0,   190,   197,   121,     0,    58,   148,     0,   147,   103,
     104,   105,   135,     0,     0,     0,     0,     0,   111,   116,
     112,   113,     0,     0,   186,     0,     0,   110,     0,     0,
       0,     0,    99,   100,   109,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   191,   283,     0,     0,     0,     0,
       0,   174,     0,   170,     0,     0,     0,     0,   172,     0,
       0,     0,     0,     0,    85,     0,     0,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,     0,
       0,    62,   216,   221,   279,   280,     0,     0,   219,   220,
     222,     0,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     189,   272,   273,   151,    70,    69,     0,    74,    71,    66,
      72,    67,     0,    76,     0,    78,     0,   108,   169,   194,
       0,     0,   150,   207,     0,   206,   114,    95,     0,     0,
       0,     0,     0,     0,   176,     0,     0,     0,     0,     0,
     160,     0,     0,   162,     0,     0,     0,    63,     0,     0,
     275,   263,   264,   274,     0,   153,   152,   161,   137,     0,
       0,     0,     0,   140,   212,   213,   208,   122,   149,     0,
     173,     0,   102,    79,   183,     0,   124,   177,   101,    96,
      97,    98,   178,   179,   180,   181,   182,   184,     0,   195,
       0,   119,   163,   164,     0,   193,   175,   171,   203,   204,
     205,     0,     0,     0,     0,     0,    86,     0,     0,     0,
     282,   281,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,    75,    77,     0,     0,   166,   107,     0,     0,     0,
       0,     0,     0,     0,   125,     0,     0,     0,   106,   154,
     156,   157,   115,    68,     0,     0,     0,     0,   145,     0,
       0,    88,     0,   209,     0,     0,     0,     0,    81,    82,
      83,     0,     0,     0,     0,   223,     0,     0,     0,     0,
     268,     0,     0,   228,     0,     0,     0,     0,     0,     0,
     237,     0,     0,     0,     0,     0,   243,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   123,     0,     0,
       0,     0,   277,     0,     0,     0,   158,     0,     0,     0,
       0,     0,     0,     0,     0,   192,     0,     0,     0,    87,
      84,     0,     0,     0,     0,     0,     0,     0,   269,   270,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,   276,     0,     0,     0,     0,
       0,     0,     0,    64,     0,     0,     0,     0,     0,   165,
       0,    60,    61,   224,   225,   226,   227,   229,   232,   234,
     231,   233,   230,   238,   239,   240,   241,   242,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,     0,     0,     0,
     278,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    89,     0,     0,     0,     0,    65,     0,   138,   139,
       0,     0,     0,     0,     0,     0,     0,   266,   265,     0,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   142,     0,     0,     0,     0,     0,
     159,     0,     0,     0,     0,     0,     0,     0,     0,    90,
     155,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   185,     0,     0,     0,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   120
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -647,  -647,  -647,  -647,   117,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,  -647,  -647,   945,  -548,    -3,  -541,
    -646,  -647,  -117,   -94,    -8
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   540,   541,   542,   261,   693,   543,   544,
     652,   733,   448,   322,   439
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     257,   258,   259,   666,   354,   263,   254,   265,   444,   445,
     260,   254,   391,   537,   538,   255,   256,   539,   446,   447,
     255,   256,   254,   260,   690,   538,   275,   802,   539,   803,
     271,   255,   256,   691,   692,   293,   400,   401,   402,   403,
     794,   795,   450,   451,   273,   274,   277,   279,   280,   282,
     602,   283,   284,   285,   286,   287,   290,   291,   294,   296,
     297,   298,   299,   300,   301,   324,   700,   302,   303,   603,
     304,   305,   706,   307,   308,   310,   317,   321,   325,   327,
     851,   664,   328,   329,   331,   332,   333,   604,   796,   334,
     335,   336,   337,   340,   341,   605,   342,   343,   344,   345,
     358,   359,   360,   361,   362,   346,   348,   349,   350,   367,
     351,   369,   370,   371,   352,   372,   374,   375,   373,   742,
     383,   384,   380,   381,   390,   741,   394,   393,   665,   398,
     404,   441,   449,   490,   491,   492,   522,     0,   493,   494,
     495,   497,   399,   440,   498,   499,   500,   501,   503,   505,
     507,   508,   509,   510,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   512,   513,   464,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   515,   804,   517,   521,   524,   529,   530,
     898,   533,   545,   546,   547,   548,   553,   814,   554,   816,
     555,   556,   817,   818,   557,   820,   558,   822,   823,   824,
     559,   826,   606,   828,   560,   830,   831,   832,   562,   834,
     563,   836,   564,   565,   566,   840,   567,   842,   568,   844,
     569,   846,   570,   571,   572,   573,   574,   575,   576,   577,
     579,   582,   583,   585,   586,   587,   858,   588,   496,   589,
     590,   596,   600,   601,   502,   607,   504,     0,   608,   609,
     610,   611,   612,     0,   613,   614,   615,   616,   452,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,   627,
     516,   580,   628,   518,   629,   630,   631,   632,   523,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   528,
     873,   644,   645,   532,   646,   649,   651,   536,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   654,   658,   659,
       0,   660,   661,   663,   668,   671,   672,   673,   734,   678,
     679,   680,   685,   726,   754,   727,   736,   739,   578,   740,
     745,   748,   749,     0,   750,     0,   758,   755,   756,   757,
     759,   760,   761,   762,   791,   763,   591,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   416,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   764,
     765,   766,   767,   768,   769,   770,   771,   772,   773,   774,
     775,   776,   777,   778,   779,   780,   781,   782,   783,   784,
     785,   786,   787,   788,   789,   809,   811,   812,   847,   863,
     879,   881,     0,   886,   888,   889,   910,   904,     0,   897,
     914,   920,   924,   929,   936,   930,     0,   961,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   647,     0,     0,   650,     0,
     653,     0,     0,   655,     0,   657,     0,     0,     0,     0,
       0,     0,   662,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   674,     0,   675,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   677,     0,
       0,     0,   681,     0,     0,   686,   687,   688,   689,     0,
     694,   695,   696,   697,   698,   699,     0,   701,   702,   703,
     704,   705,     0,   707,   708,   709,   710,   711,   712,   713,
     714,   715,   716,   717,   718,   719,   720,   721,   722,   723,
     724,   725,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   728,     0,   730,   731,   732,     0,
     735,     0,     0,     0,   738,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   746,   747,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   790,     0,   792,   793,     0,
       0,     0,   797,     0,     0,   799,   800,   801,     0,     0,
       0,     0,     0,   807,   808,     0,   813,     0,   815,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   829,     0,     0,     0,   833,     0,
     835,     0,     0,   838,   839,     0,   841,     0,   843,     0,
     845,     0,     0,     0,     0,     0,     0,     0,     0,   848,
     849,   850,     0,     0,   852,     0,     0,   855,   856,     0,
       0,     0,     0,     0,   861,   862,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   864,   865,   866,     0,     0,   867,
     868,   869,   870,   871,     0,     0,   951,     0,   876,   877,
       0,   878,   957,   880,     0,   882,   883,   884,   885,     0,
       0,     0,     0,   890,   891,   892,   893,   894,     0,   895,
     896,     0,     0,     0,     0,     0,     0,   900,   901,   902,
     903,     0,     0,     0,     0,     0,     0,   908,   909,     0,
     911,     0,   912,     0,     0,   915,   916,   917,   918,   919,
       0,     0,   921,   922,   923,     0,   925,     0,   926,   927,
     928,     0,     0,   931,   932,   933,     0,     0,   934,   935,
       0,   937,   938,   939,   940,   941,   942,   943,   944,   945,
       0,   946,   947,   948,     0,   949,   950,     0,     0,   953,
     954,   955,   262,     0,   264,   959,   266,   267,   268,   269,
     270,     0,   272,     0,     0,     0,   276,     0,   278,     0,
       0,   281,     0,     0,     0,     0,     0,     0,   288,   289,
       0,     0,   292,     0,     0,   295,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   306,     0,     0,   309,
       0,   311,   312,   313,   314,   315,   316,     0,   318,   319,
     320,     0,   323,     0,     0,   326,     0,     0,     0,   330,
       0,     0,     0,     0,     0,     0,     0,   338,   339,     0,
       0,     0,     0,     0,     0,     0,   347,     0,     0,     0,
       0,     0,   353,     0,   355,     0,   356,   357,     0,     0,
       0,     0,     0,   363,   364,   365,   366,     0,   368,     0,
       0,     0,     0,     0,     0,     0,   376,   377,   378,   379,
       0,     0,   382,     0,     0,     0,   385,   386,   387,   388,
     389,     0,   392,     0,     0,   395,   396,   397,     0,     0,
       0,     0,     0,   405,   406,     0,     0,     0,   442,   443,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   506,     0,     0,
       0,     0,     0,     0,     0,     0,   511,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   514,     0,     0,     0,
       0,     0,   519,   520,     0,     0,     0,     0,     0,     0,
       0,   525,     0,     0,   526,     0,   527,     0,     0,     0,
     531,     0,     0,   534,   535,     0,     0,     0,     0,     0,
       0,     0,   549,     0,     0,   550,   551,   552,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     561,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   581,     0,     0,   584,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   592,   593,   594,   595,     0,
       0,   597,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   598,   599,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   643,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   648,     0,     0,     0,     0,     0,
       0,     0,   656,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   667,     0,   669,   670,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   676,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   682,   683,   684,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   729,     0,     0,     0,     0,     0,     0,
       0,   737,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   743,   744,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   751,   752,   753,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   798,     0,     0,     0,     0,     0,   805,   806,
       0,     0,     0,     0,     0,     0,   810,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   819,     0,   821,
       0,     0,     0,   825,     0,   827,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   837,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   853,   854,     0,     0,   857,     0,     0,
     859,   860,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   872,     0,   874,   875,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   887,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   899,     0,     0,     0,     0,     0,     0,     0,
     905,   906,     0,     0,   907,     0,     0,     0,     0,     0,
       0,   913,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   952,     0,     0,     0,
     956,     0,   958,     2,   960,     0,     3,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,    29,    30,     0,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,     0,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,     0,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,     0,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,     0,     0,     0,     0,   153,   154,   155,   156,
     157,   158,   159,   160,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,     0,
       0,   201,   202
};

static const yytype_int16 yycheck[] =
{
       3,     4,     5,   544,    98,     8,   277,    10,   276,   277,
     277,   277,   279,   279,   280,   286,   287,   283,   286,   287,
     286,   287,   277,   277,   277,   280,   277,   277,   283,   279,
     279,   286,   287,   286,   287,    38,   159,   160,   161,   162,
     281,   282,   159,   160,   279,   279,   279,   279,   277,   279,
     281,   279,   279,   279,   279,   279,   279,   277,   279,   277,
     277,   277,   277,   277,   277,    68,   614,   277,   279,   281,
     279,   279,   620,   279,   279,   279,   277,   277,   277,   277,
     282,   284,   279,   279,   277,   277,   277,   281,   734,   279,
     279,   279,   279,   277,   279,   281,   279,   279,   277,   279,
     103,   104,   105,   106,   107,   279,   279,   279,   279,   112,
     279,   114,   115,   116,   279,   279,   119,   120,   279,   667,
     279,   279,   125,   126,   277,   666,   277,   279,   284,   279,
     279,   279,   277,   279,   277,   277,   280,    -1,   279,   279,
     279,   279,   145,   151,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   277,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   279,   279,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   279,   742,   279,   277,   279,   277,   279,
     285,   279,   279,   279,   279,   279,   279,   755,   279,   757,
     279,   279,   760,   761,   279,   763,   279,   765,   766,   767,
     277,   769,   281,   771,   279,   773,   774,   775,   279,   777,
     279,   779,   279,   277,   279,   783,   279,   785,   279,   787,
     279,   789,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   804,   279,   261,   279,
     279,   279,   277,   277,   267,   281,   269,    -1,   281,   281,
     281,   281,   281,    -1,   281,   281,   281,   281,   161,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     293,   385,   281,   296,   281,   281,   281,   281,   301,   281,
     281,   281,   281,   281,   281,   281,   279,   279,   279,   312,
     858,   277,   279,   316,   279,   277,   280,   320,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   279,   279,   279,
      -1,   279,   279,   279,   279,   279,   277,   279,   281,   279,
     279,   279,   277,   279,   281,   279,   279,   277,   381,   277,
     279,   277,   279,    -1,   279,    -1,   277,   281,   281,   281,
     277,   281,   281,   281,   279,   281,   399,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   279,   279,   279,   277,   279,
     277,   279,    -1,   279,   279,   279,   277,   279,    -1,   282,
     279,   279,   277,   279,   277,   279,    -1,   279,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   518,    -1,    -1,   521,    -1,
     523,    -1,    -1,   526,    -1,   528,    -1,    -1,    -1,    -1,
      -1,    -1,   535,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   578,    -1,   580,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   591,    -1,
      -1,    -1,   595,    -1,    -1,   603,   604,   605,   606,    -1,
     608,   609,   610,   611,   612,   613,    -1,   615,   616,   617,
     618,   619,    -1,   621,   622,   623,   624,   625,   626,   627,
     628,   629,   630,   631,   632,   633,   634,   635,   636,   637,
     638,   639,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   647,    -1,   649,   650,   651,    -1,
     653,    -1,    -1,    -1,   657,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   674,   675,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   728,    -1,   730,   731,    -1,
      -1,    -1,   735,    -1,    -1,   738,   739,   740,    -1,    -1,
      -1,    -1,    -1,   746,   747,    -1,   754,    -1,   756,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   772,    -1,    -1,    -1,   776,    -1,
     778,    -1,    -1,   781,   782,    -1,   784,    -1,   786,    -1,
     788,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   792,
     793,   794,    -1,    -1,   797,    -1,    -1,   800,   801,    -1,
      -1,    -1,    -1,    -1,   807,   808,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   847,   848,   849,    -1,    -1,   852,
     853,   854,   855,   856,    -1,    -1,   950,    -1,   861,   862,
      -1,   864,   956,   866,    -1,   868,   869,   870,   871,    -1,
      -1,    -1,    -1,   876,   877,   878,   879,   880,    -1,   882,
     883,    -1,    -1,    -1,    -1,    -1,    -1,   890,   891,   892,
     893,    -1,    -1,    -1,    -1,    -1,    -1,   900,   901,    -1,
     903,    -1,   905,    -1,    -1,   908,   909,   910,   911,   912,
      -1,    -1,   915,   916,   917,    -1,   919,    -1,   921,   922,
     923,    -1,    -1,   926,   927,   928,    -1,    -1,   931,   932,
      -1,   934,   935,   936,   937,   938,   939,   940,   941,   942,
      -1,   944,   945,   946,    -1,   948,   949,    -1,    -1,   952,
     953,   954,     7,    -1,     9,   958,    11,    12,    13,    14,
      15,    -1,    17,    -1,    -1,    -1,    21,    -1,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      -1,    -1,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    54,
      -1,    56,    57,    58,    59,    60,    61,    -1,    63,    64,
      65,    -1,    67,    -1,    -1,    70,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    -1,    97,    -1,    99,    -1,   101,   102,    -1,    -1,
      -1,    -1,    -1,   108,   109,   110,   111,    -1,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
      -1,    -1,   127,    -1,    -1,    -1,   131,   132,   133,   134,
     135,    -1,   137,    -1,    -1,   140,   141,   142,    -1,    -1,
      -1,    -1,    -1,   148,   149,    -1,    -1,    -1,   153,   154,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   281,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   291,    -1,    -1,    -1,
      -1,    -1,   297,   298,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   306,    -1,    -1,   309,    -1,   311,    -1,    -1,    -1,
     315,    -1,    -1,   318,   319,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,    -1,    -1,   330,   331,   332,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   386,    -1,    -1,   389,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   400,   401,   402,   403,    -1,
      -1,   406,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   439,   440,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   506,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   519,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   527,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   549,    -1,   551,   552,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   584,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   597,   598,   599,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   648,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   656,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   669,   670,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   682,   683,   684,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   737,    -1,    -1,    -1,    -1,    -1,   743,   744,
      -1,    -1,    -1,    -1,    -1,    -1,   751,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   762,    -1,   764,
      -1,    -1,    -1,   768,    -1,   770,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   780,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   798,   799,    -1,    -1,   802,    -1,    -1,
     805,   806,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   857,    -1,   859,   860,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   873,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   887,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     895,   896,    -1,    -1,   899,    -1,    -1,    -1,    -1,    -1,
      -1,   906,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   951,    -1,    -1,    -1,
     955,    -1,   957,     0,   959,    -1,     3,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    31,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    -1,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,    -1,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,    -1,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,    -1,    -1,    -1,    -1,   163,   164,   165,   166,
     167,   168,   169,   170,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,    -1,
      -1,   278,   279
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   289,     0,     3,     5,     6,     7,     8,     9,    10,
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
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   163,   164,   165,   166,   167,   168,   169,
     170,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   278,   279,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   277,   286,   287,   346,   346,   346,
     277,   344,   344,   346,   344,   346,   344,   344,   344,   344,
     344,   279,   344,   279,   279,   277,   344,   279,   344,   279,
     277,   344,   279,   279,   279,   279,   279,   279,   344,   344,
     279,   277,   344,   346,   279,   344,   277,   277,   277,   277,
     277,   277,   277,   279,   279,   279,   344,   279,   279,   344,
     279,   344,   344,   344,   344,   344,   344,   277,   344,   344,
     344,   277,   351,   344,   346,   277,   344,   277,   279,   279,
     344,   277,   277,   277,   279,   279,   279,   279,   344,   344,
     277,   279,   279,   279,   277,   279,   279,   344,   279,   279,
     279,   279,   279,   344,   351,   344,   344,   344,   346,   346,
     346,   346,   346,   344,   344,   344,   344,   346,   344,   346,
     346,   346,   279,   279,   346,   346,   344,   344,   344,   344,
     346,   346,   344,   279,   279,   344,   344,   344,   344,   344,
     277,   279,   344,   279,   277,   344,   344,   344,   279,   346,
     159,   160,   161,   162,   279,   344,   344,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   352,
     352,   279,   344,   344,   276,   277,   286,   287,   350,   277,
     350,   350,   292,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     279,   277,   277,   279,   279,   279,   346,   279,   279,   279,
     279,   279,   346,   279,   346,   279,   344,   279,   279,   279,
     277,   344,   279,   279,   344,   279,   346,   279,   346,   344,
     344,   277,   280,   346,   279,   344,   344,   344,   346,   277,
     279,   344,   346,   279,   344,   344,   346,   279,   280,   283,
     341,   342,   343,   346,   347,   279,   279,   279,   279,   344,
     344,   344,   344,   279,   279,   279,   279,   279,   279,   277,
     279,   344,   279,   279,   279,   277,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   346,   279,
     351,   344,   279,   279,   344,   279,   279,   279,   279,   279,
     279,   346,   344,   344,   344,   344,   279,   344,   344,   344,
     277,   277,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     279,   279,   279,   344,   277,   279,   279,   346,   344,   277,
     346,   280,   348,   346,   279,   346,   344,   346,   279,   279,
     279,   279,   346,   279,   284,   284,   347,   344,   279,   344,
     344,   279,   277,   279,   346,   346,   344,   346,   279,   279,
     279,   346,   344,   344,   344,   277,   352,   352,   352,   352,
     277,   286,   287,   345,   352,   352,   352,   352,   352,   352,
     345,   352,   352,   352,   352,   352,   345,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   279,   279,   346,   344,
     346,   346,   346,   349,   281,   346,   279,   344,   346,   277,
     277,   347,   345,   344,   344,   279,   346,   346,   277,   279,
     279,   344,   344,   344,   281,   281,   281,   281,   277,   277,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     346,   279,   346,   346,   281,   282,   348,   346,   344,   346,
     346,   346,   277,   279,   345,   344,   344,   346,   346,   279,
     344,   279,   279,   352,   345,   352,   345,   345,   345,   344,
     345,   344,   345,   345,   345,   344,   345,   344,   345,   352,
     345,   345,   345,   352,   345,   352,   345,   344,   352,   352,
     345,   352,   345,   352,   345,   352,   345,   277,   346,   346,
     346,   282,   346,   344,   344,   346,   346,   344,   345,   344,
     344,   346,   346,   279,   346,   346,   346,   346,   346,   346,
     346,   346,   344,   345,   344,   344,   346,   346,   346,   277,
     346,   279,   346,   346,   346,   346,   279,   344,   279,   279,
     346,   346,   346,   346,   346,   346,   346,   282,   285,   344,
     346,   346,   346,   346,   279,   344,   344,   344,   346,   346,
     277,   346,   346,   344,   279,   346,   346,   346,   346,   346,
     279,   346,   346,   346,   277,   346,   346,   346,   346,   279,
     279,   346,   346,   346,   346,   346,   277,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   351,   344,   346,   346,   346,   344,   351,   344,   346,
     344,   279
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   288,   289,   289,   290,   290,   290,   290,   290,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   341,   342,   343,   344,   345,   345,
     345,   346,   346,   346,   347,   347,   348,   349,   349,   350,
     350,   350,   350,   351,   351,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     7,
       6,     6,     2,     3,     6,     9,     3,     3,     4,     3,
       3,     3,     3,     4,     3,     4,     3,     4,     3,     3,
       2,     4,     4,     4,     5,     2,     3,     5,     4,     9,
      15,    11,     7,     6,    21,     3,     3,     3,     3,     2,
       2,     3,     3,     2,     2,     2,     4,     4,     3,     2,
       2,     2,     2,     2,     3,     4,     2,     1,     1,     3,
      34,     2,     3,     5,     3,     4,     2,     2,     5,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     9,     9,
       3,     2,    12,     2,     2,     4,     2,     2,     2,     3,
       3,     3,     3,     3,     4,    15,     4,     4,     5,    13,
       3,     3,     3,     3,     3,     6,     4,     2,     2,     3,
       2,     3,     2,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,    19,     2,     1,     2,     2,
       2,     2,     5,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     4,
       2,     2,     3,     3,     2,     1,     2,     1,     1,     2,
       2,     2,     2,     4,     6,     6,     6,     6,     4,     6,
       6,     6,     6,     6,     6,     1,     1,     4,     6,     6,
       6,     6,     6,     4,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     1,     1,     8,     8,     1,     1,     2,
       2,     1,     2,     2,     1,     1,     3,     1,     3,     1,
       1,     2,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
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
        case 58:
#line 499 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				mexit(yyengine, "Exiting as per user's request.", 0);
			}
		}
#line 2722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 515 "sf-riscv.y" /* yacc.c:1646  */
    {	/*
			 *	Mark given memory as origin of taint
			 */
			if (!yyengine->scanning)
			{
				m_taintmem(yyengine,yyengine->cp, (yyvsp[-5].uval), (yyvsp[-4].uval), (yyvsp[-3].uval), (yyvsp[-2].uval), (yyvsp[-1].uval));

			}
		}
#line 2736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 528 "sf-riscv.y" /* yacc.c:1646  */
    {
			/*
			 *	Mark given register as an origin of taint
			 */
			if (!yyengine->scanning)
			{
				m_taintreg(yyengine,yyengine->cp, (yyvsp[-4].uval), (yyvsp[-3].uval), (yyvsp[-2].uval), (yyvsp[-1].uval));
			}
		}
#line 2750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 541 "sf-riscv.y" /* yacc.c:1646  */
    {
			/*
			 *	Mark given register as an origin of taint
			 */
			if (!yyengine->scanning)
			{
				m_taintreg(yyengine,yyengine->cp, (yyvsp[-4].uval), (yyvsp[-3].uval), (yyvsp[-2].uval), (yyvsp[-1].uval));
			}
		}
#line 2764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 554 "sf-riscv.y" /* yacc.c:1646  */
    {
			/*
			 *	Give taint of each RISC-V command
			 */
			if (!yyengine->scanning)
			{
				m_riscvdumptaintdistr(yyengine,yyengine->cp);
			}
		}
#line 2778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 564 "sf-riscv.y" /* yacc.c:1646  */
    {
			/*
			 *	Only give the architecture type:
			 */
			if (!yyengine->scanning)
			{
				m_newnode(yyengine, (yyvsp[-1].str), 0, 0, 0, NULL, 0, 0);
			}
		}
#line 2792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 574 "sf-riscv.y" /* yacc.c:1646  */
    {
			/*
			 *	Give the architecture type and the (fixed) x/y/z location
			 */
			if (!yyengine->scanning)
			{
				m_newnode(yyengine, (yyvsp[-4].str), (yyvsp[-3].rval)->dval, (yyvsp[-3].rval)->dval, (yyvsp[-3].rval)->dval, NULL, 0, 0);
			}
		}
#line 2806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 584 "sf-riscv.y" /* yacc.c:1646  */
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
#line 2838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 612 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				batt_nodeattach(yyengine, yyengine->cp, (yyvsp[-1].uval));
			}
		}
#line 2849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 619 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				batt_printstats(yyengine, yyengine->cp, (yyvsp[-1].uval));
			}
		}
#line 2860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 626 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				batt_newbatt(yyengine, (yyvsp[-2].uval), (yyvsp[-1].dval));
			}
		}
#line 2871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 633 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				if (SF_DEBUG) mprint(yyengine, NULL, siminfo, 
						"Setting yyengine->batts[%d].ileak to %f\n",
						yyengine->curbatt, (yyvsp[-1].dval));
				yyengine->batts[yyengine->curbatt].ileak = (yyvsp[-1].dval);
			}
		}
#line 2885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 643 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				if (SF_DEBUG) mprint(yyengine, NULL, siminfo, 
						"Setting yyengine->batts[%d].Cf to %f\n",
						yyengine->curbatt, (yyvsp[-1].dval));
				yyengine->batts[yyengine->curbatt].Cf = (yyvsp[-1].dval);
			}
		}
#line 2899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 653 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				if (SF_DEBUG) mprint(yyengine, NULL, siminfo, 
					"Setting yyengine->batts[%d].Inominal to %f\n",
					yyengine->curbatt, (yyvsp[-1].dval));
				yyengine->batts[yyengine->curbatt].Inominal = (yyvsp[-1].dval);
			}
		}
#line 2913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 663 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				if (SF_DEBUG) mprint(yyengine, NULL, siminfo, 
						"Setting yyengine->batts[%d].Rf to %f\n",
						yyengine->curbatt, (yyvsp[-1].dval));
				yyengine->batts[yyengine->curbatt].Rf = (yyvsp[-1].dval);
			}
		}
#line 2927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 673 "sf-riscv.y" /* yacc.c:1646  */
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
#line 2945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 687 "sf-riscv.y" /* yacc.c:1646  */
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
#line 2967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 705 "sf-riscv.y" /* yacc.c:1646  */
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
#line 2985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 719 "sf-riscv.y" /* yacc.c:1646  */
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
#line 3007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 737 "sf-riscv.y" /* yacc.c:1646  */
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
#line 3025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 751 "sf-riscv.y" /* yacc.c:1646  */
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
#line 3047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 769 "sf-riscv.y" /* yacc.c:1646  */
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
#line 3065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 783 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_pcbacktrace(yyengine, yyengine->cp);
			}
		}
#line 3076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 790 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_setbptglobaltime(yyengine, (yyvsp[-1].uval));
			}
		}
#line 3087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 797 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_setbptcycles(yyengine, yyengine->cp, (yyvsp[-1].uval));
			}
		}
#line 3098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 804 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_setbptinstrs(yyengine, yyengine->cp, (yyvsp[-1].uval));
			}
		}
#line 3109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 811 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_setbptsensorreading(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[-1].dval));
			}
		}
#line 3120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 818 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_bptls(yyengine);
			}
		}
#line 3131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 825 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_bptdel(yyengine, (yyvsp[-1].uval));
			}
		}
#line 3142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 832 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_setloc(yyengine, yyengine->cp, (yyvsp[-3].dval), (yyvsp[-2].dval), (yyvsp[-1].dval));
			}
		}
#line 3153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 839 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				network_setretryalg(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[-1].str));
			}
		}
#line 3164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 846 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_randprint(yyengine, (yyvsp[-7].str), (yyvsp[-6].dval), (yyvsp[-5].dval), (yyvsp[-4].dval), (yyvsp[-3].dval), (yyvsp[-2].dval), (yyvsp[-1].dval));
			}
		}
#line 3175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 853 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				//m_registerrvar(yyengine->cp, $2, $3, $4, $5, $6, $7,
				//		$8, $9, $10, $11, $12, $13, $14);
			}
		}
#line 3187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 861 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_initrandtable(yyengine, (yyvsp[-9].str), (yyvsp[-8].str), (yyvsp[-7].dval), (yyvsp[-6].dval), (yyvsp[-5].dval), (yyvsp[-4].dval), (yyvsp[-3].dval), (yyvsp[-2].dval), (yyvsp[-1].dval));
			}
		}
#line 3198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 868 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				//m_defndist($2, $4, $6);

			}
		}
#line 3210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 876 "sf-riscv.y" /* yacc.c:1646  */
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
#line 3232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 894 "sf-riscv.y" /* yacc.c:1646  */
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
#line 3254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 912 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->ignoredeaths = (yyvsp[-1].uval);
			}
		}
#line 3265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 919 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->voltscale_alpha = (yyvsp[-1].dval);
			}
		}
#line 3276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 926 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->voltscale_K = (yyvsp[-1].dval);
			}
		}
#line 3287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 933 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->voltscale_Vt = (yyvsp[-1].dval);
			}
		}
#line 3298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 940 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->schedtype = SchedRandom;
			}
		}
#line 3309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 947 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->schedtype = SchedRoundRobin;
			}
		}
#line 3320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 954 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->quantum = (yyvsp[-1].uval);
			}
		}
#line 3331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 961 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->baseid = (yyvsp[-1].uval);
			}
		}
#line 3342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 968 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_renumbernodes(yyengine);
			}
		}
#line 3353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 975 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->trip_ustart = musercputimeusecs();
				yyengine->cp->trip_startclk = yyengine->cp->ICLK;
			}
		}
#line 3365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 983 "sf-riscv.y" /* yacc.c:1646  */
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
#line 3382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 996 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				network_netseg2file(yyengine, (yyvsp[-2].uval), (yyvsp[-1].str));
			}
		}
#line 3393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1003 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				network_file2netseg(yyengine, (yyvsp[-2].str), (yyvsp[-1].uval));
			}
		}
#line 3404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1010 "sf-riscv.y" /* yacc.c:1646  */
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
#line 3420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1022 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->settimerintrdelay(yyengine, yyengine->cp, (yyvsp[0].dval));
			}
		}
#line 3431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1029 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->phyperiodpsec = (yyvsp[0].dval);
			}
		}
#line 3442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1036 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->battperiodpsec = (yyvsp[0].dval);
			}
		}
#line 3453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1043 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->netperiodpsec = (yyvsp[0].dval);
			}
		}
#line 3464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1050 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->fperiodpsec = (yyvsp[0].dval);
			}
		}
#line 3475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1058 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->force_avgpwr = (yyvsp[-1].dval);
				yyengine->cp->force_sleeppwr = (yyvsp[0].dval);
			}
		}
#line 3487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1066 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				network_netsegpropmodel(yyengine, (yyvsp[-2].uval), (yyvsp[-1].uval), (yyvsp[0].dval));
			}
		}
#line 3498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1073 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->dumpperiodpsec = (yyvsp[0].dval);
			}
		}
#line 3509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1080 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_version(yyengine);
			}
		}
#line 3520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1087 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				physics_sensorsdbg(yyengine);
			}
		}
#line 3531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1095 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				physics_sigsubscr(yyengine, yyengine->cp, (yyvsp[-1].uval), (yyvsp[0].uval));
			}
		}
#line 3542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1106 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				physics_newsigsrc(yyengine, (yyvsp[-32].uval), (yyvsp[-31].str), (yyvsp[-30].dval), (yyvsp[-29].dval), (yyvsp[-28].dval), (yyvsp[-27].dval), (yyvsp[-26].dval), (yyvsp[-25].dval), (yyvsp[-24].dval),
					(yyvsp[-23].dval), (yyvsp[-22].dval), (yyvsp[-21].dval), (yyvsp[-20].dval), (yyvsp[-19].dval), (yyvsp[-18].dval), (yyvsp[-17].dval), (yyvsp[-16].dval), (yyvsp[-15].dval), (yyvsp[-14].dval),
					(yyvsp[-13].dval), (yyvsp[-12].dval), (yyvsp[-11].dval), (yyvsp[-10].str), (yyvsp[-9].uval), (yyvsp[-8].dval), (yyvsp[-7].dval), (yyvsp[-6].dval), (yyvsp[-5].uval), (yyvsp[-4].str),
					(yyvsp[-3].uval), (yyvsp[-2].dval), (yyvsp[-1].uval));
			}
		}
#line 3556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1116 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				mprint(yyengine, NULL, siminfo,
					"Current directory: %s\n", mgetpwd());
			}
		}
#line 3568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1124 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_parseobjdump(yyengine, yyengine->cp, (yyvsp[-1].str));
			}
		}
#line 3579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1131 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_dumpall(yyengine, (yyvsp[-3].str), M_OWRITE, (yyvsp[-2].str), (yyvsp[-1].str));
			}
		}
#line 3590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1138 "sf-riscv.y" /* yacc.c:1646  */
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
#line 3608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1152 "sf-riscv.y" /* yacc.c:1646  */
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
#line 3628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1168 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->step = yyengine->cp->cyclestep;
			}
		}
#line 3639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1175 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->step = yyengine->cp->faststep;
			}
		}
#line 3650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1182 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->cache_init(yyengine, yyengine->cp, (yyvsp[-3].uval), (yyvsp[-2].uval), (yyvsp[-1].uval));
			}
		}
#line 3661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1189 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->cache_deactivate(yyengine, yyengine->cp);
			}
		}
#line 3672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1196 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->cache_printstats(yyengine, yyengine->cp);
			}
		}
#line 3683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1203 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->dumpregs(yyengine, yyengine->cp);
			}
		}
#line 3694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1210 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				mprint(yyengine, NULL, siminfo,
					"RISC-V does not have system registers.");
			}
		}
#line 3706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1218 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->dumppipe(yyengine, yyengine->cp);
			}
		}
#line 3717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1225 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->dumpdistribution(yyengine, yyengine->cp);
			}
		}
#line 3728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1232 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->resetcpu(yyengine, yyengine->cp);
			}
		}
#line 3739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1239 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				mprint(yyengine, yyengine->cp, nodeinfo,
					"Dynamic instruction count = [" UVLONGFMT "], fetched instructions = [" UVLONGFMT "]\n",
					yyengine->cp->dyncnt, yyengine->cp->nfetched);	
			}
		}
#line 3752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1248 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->nodetach = (yyvsp[-1].uval);
			}
		}
#line 3763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1255 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_addvaluetrace(yyengine, yyengine->cp, (yyvsp[-7].str), (yyvsp[-6].uval), (yyvsp[-5].uval), (yyvsp[-4].uval), (yyvsp[-3].uval), (yyvsp[-2].uval), (yyvsp[-1].uval));
			}
		}
#line 3774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1262 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_delvaluetrace(yyengine, yyengine->cp, (yyvsp[-7].str), (yyvsp[-6].uval), (yyvsp[-5].uval), (yyvsp[-4].uval), (yyvsp[-3].uval), (yyvsp[-2].uval), (yyvsp[-1].uval));
			}
		}
#line 3785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1269 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_readstabs(yyengine, yyengine->cp, (yyvsp[-1].str));
			}
		}
#line 3796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1276 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_valuestats(yyengine, yyengine->cp);
			}
		}
#line 3807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1283 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_numaregion(yyengine, (yyvsp[-10].str), (yyvsp[-9].uval), (yyvsp[-8].uval), (yyvsp[-7].sval), (yyvsp[-6].sval), (yyvsp[-5].sval), (yyvsp[-4].sval), (yyvsp[-3].uval), (yyvsp[-2].uval), (yyvsp[-1].uval));
			}
		}
#line 3818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1290 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_numastats(yyengine, yyengine->cp);
			}
		}
#line 3829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1297 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_numastatsall(yyengine);
			}
		}
#line 3840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1304 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_numasetmapid(yyengine, (yyvsp[-2].uval), (yyvsp[-1].uval));
			}
		}
#line 3851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1311 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->dumptlb(yyengine, yyengine->cp);
			}
		}
#line 3862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1318 "sf-riscv.y" /* yacc.c:1646  */
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
#line 3882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1334 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				mprint(yyengine, NULL, siminfo,
					"Simulation random seed = %ld\n", yyengine->randseed);
			}
		}
#line 3894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1342 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				mprint(yyengine, NULL, siminfo,
					"Resetting random number generation with seed [%ld]\n", (yyvsp[-1].uval));
				yyengine->randseed = mrandominit(yyengine, (yyvsp[-1].uval));
			}
		}
#line 3907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1351 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->ENABLE_BATT_LOW_INTR = (yyvsp[-1].uval);
			}
		}
#line 3918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1358 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->battery_alert_frac = (yyvsp[-1].dval);
			}
		}
#line 3929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1365 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->fail_prob = (yyvsp[-1].dval);
			}
		}
#line 3940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1372 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->failure_duration_max = (yyvsp[-1].uval);
			}
		}
#line 3951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1379 "sf-riscv.y" /* yacc.c:1646  */
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
#line 3969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1394 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				network_netnewseg(yyengine, (yyvsp[-13].uval), (yyvsp[-12].uval), (yyvsp[-11].uval), (yyvsp[-10].uval), (yyvsp[-9].uval), (yyvsp[-8].uval),
					(yyvsp[-7].dval), (yyvsp[-6].dval), (yyvsp[-5].dval), (yyvsp[-4].uval), (yyvsp[-3].dval), (yyvsp[-2].dval), (yyvsp[-1].dval));
			}
		}
#line 3981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1402 "sf-riscv.y" /* yacc.c:1646  */
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
#line 3999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1416 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				network_netsegnicattach(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[-1].uval));
			}
		}
#line 4010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1423 "sf-riscv.y" /* yacc.c:1646  */
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
#line 4032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1441 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				network_netnodenewifc(yyengine, yyengine->cp, (yyvsp[-11].uval), (yyvsp[-10].dval), (yyvsp[-9].dval), (yyvsp[-8].dval),
					(yyvsp[-7].dval), (yyvsp[-6].uval), (yyvsp[-5].dval), (yyvsp[-4].dval), (yyvsp[-3].dval), (yyvsp[-2].uval), (yyvsp[-1].uval));
			}
		}
#line 4044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1449 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				network_netsegdelete(yyengine, (yyvsp[-1].uval));
			}
		}
#line 4055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1456 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				merror(yyengine, "Command \"NODEFAILPROBFN\" unimplemented.");
			}
		}
#line 4066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1463 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				merror(yyengine, "Command \"NETSEGFAILPROBFN\" unimplemented.");
			}
		}
#line 4077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1470 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_sizemem(yyengine, yyengine->cp, (yyvsp[-1].uval));
			}
		}
#line 4088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1477 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				pau_init(yyengine, yyengine->cp, (yyvsp[-1].uval));
			}
		}
#line 4099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1484 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->split(yyengine, yyengine->cp, (yyvsp[-4].uval), (yyvsp[-3].uval), (yyvsp[-2].uval), (yyvsp[-1].str));
			}
		}
#line 4110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1491 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_dumpmem(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[-1].uval));
			}
		}
#line 4121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1498 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->pipelined = 0;
			}
		}
#line 4132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1505 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->pipelined = 1;
			}
		}
#line 4143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1512 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->superH->ENABLE_CLK_INTR = (yyvsp[-1].uval);
			}
		}
#line 4154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1519 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->runnable = 0;
			}
		}
#line 4165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1526 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				sfatal(yyengine, yyengine->cp, (yyvsp[-1].str));
			}
		}
#line 4176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1533 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->verbose ^= 1;
			}
		}
#line 4187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1540 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_run(yyengine, yyengine->cp, (yyvsp[-1].str));
			}

			/*	The 'string' is dynamically allocated, in lex.c		*/
			free((yyvsp[-1].str));
		}
#line 4201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1550 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->step(yyengine, yyengine->cp, 0);
			}
		}
#line 4212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1557 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				go(yyengine, yyengine->cp, (yyvsp[-1].uval));
			}
		}
#line 4223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1564 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				loadcmds(yyengine, (yyvsp[-1].str));
			}
		}
#line 4234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1571 "sf-riscv.y" /* yacc.c:1646  */
    {	
			if (!yyengine->scanning)
			{
				yyengine->cp->PC = (yyvsp[-1].uval);
			}
		}
#line 4245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1578 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				/*	Scale frequency accordingly for provided Vdd	*/
				power_scaledelay(yyengine, yyengine->cp, (yyvsp[-1].dval));
			}
		}
#line 4257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1586 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->mem_r_latency = (yyvsp[-1].uval);
			}
		}
#line 4268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1593 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->mem_w_latency = (yyvsp[-1].uval);
			}
		}
#line 4279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1600 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->flash_r_latency = (yyvsp[-1].uval);
			}
		}
#line 4290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1607 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->flash_w_latency = (yyvsp[-1].uval);
			}
		}
#line 4301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1614 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				/*	Scale Vdd accordingly for provided frequency	*/
				power_scalevdd(yyengine, yyengine->cp, (yyvsp[-1].dval));
			}
		}
#line 4313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1622 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				/*	Set node mass	*/
				massSetNodeMass(yyengine, yyengine->cp, (yyvsp[-1].dval));
			}
		}
#line 4325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1630 "sf-riscv.y" /* yacc.c:1646  */
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
#line 4340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1641 "sf-riscv.y" /* yacc.c:1646  */
    {
			yyengine->cp->MEMBASE = (yyvsp[0].uval);
			yyengine->cp->TAINTMEMBASE = (yyvsp[0].uval);
		}
#line 4349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1646 "sf-riscv.y" /* yacc.c:1646  */
    {
			mprint(yyengine, NULL, siminfo, "Memory base address is %d.",yyengine->cp->MEMBASE);
		}
#line 4357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1650 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				help(yyengine);
			}
		}
#line 4368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1657 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				man(yyengine, (yyvsp[-1].str));
			}
		}
#line 4379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1664 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->flushpipe(yyengine->cp);
			}
		}
#line 4390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1671 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->pipeshow = !yyengine->cp->pipeshow;
			}
		}
#line 4401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1678 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				savemem(yyengine, yyengine->cp, (yyvsp[-3].uval), (yyvsp[-2].uval), (yyvsp[-1].str));
			}
		}
#line 4412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1685 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				load_srec(yyengine, yyengine->cp, (yyvsp[-1].str));
			}
		}
#line 4423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1692 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				cont(yyengine, yyengine->cp, (yyvsp[-1].uval));
			}
		}
#line 4434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1699 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_sharebus(yyengine, yyengine->cp, (yyvsp[-1].uval));
			}
		}
#line 4445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1706 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				mprint(yyengine, NULL, siminfo,
					"CLK = " UVLONGFMT ", ICLK = " UVLONGFMT ", TIME = %E, CYCLETIME = %E\n",
					yyengine->cp->CLK, yyengine->cp->ICLK, yyengine->cp->TIME, 
					yyengine->cp->CYCLETIME);
			}
		}
#line 4459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1716 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				power_printstats(yyengine, yyengine->cp);
			}
		}
#line 4470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1723 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_locstats(yyengine, yyengine->cp);
			}
		}
#line 4481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1730 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_listrvars(yyengine);
			}
		}
#line 4492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1738 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_on(yyengine, yyengine->cp);
			}
		}
#line 4503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1745 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				m_off(yyengine, yyengine->cp);
			}
		}
#line 4514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1752 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				network_netdebug(yyengine, yyengine->cp);
			}
		}
#line 4525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1759 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				mprint(yyengine, NULL, siminfo, 
					"WARNING: Trace only works if compiled w/ -MYRMIGKI_DEBUG\n\n");
				yyengine->cp->trace = (yyvsp[-1].uval);
			}
		}
#line 4538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1768 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->throttlensec = (yyvsp[-1].uval);
			}
		}
#line 4549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1775 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->throttlewin = (yyvsp[-1].uval);
			}
		}
#line 4560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1782 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->faultthreshold = (yyvsp[-1].uval);
			}
		}
#line 4571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1789 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				yyengine->cp->ENABLE_TOO_MANY_FAULTS = (yyvsp[-1].uval);
			}
		}
#line 4582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1796 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				fault_setnodepfun(yyengine, yyengine->cp, (yyvsp[-1].str));
			}
		}
#line 4593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1803 "sf-riscv.y" /* yacc.c:1646  */
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
#line 4612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1818 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				mmblocksdisplay(yyengine);
			}
		}
#line 4623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1825 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				pau_printstats(yyengine, yyengine->cp);
			}
		}
#line 4634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1832 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				// TODO: we should account for the cost of the m_on and m_off

				m_off(yyengine, yyengine->cp);
				mnsleep((yyvsp[-1].uval));
				m_on(yyengine, yyengine->cp);
			}
		}
#line 4649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1843 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				// TODO: we should account for the cost of the m_on and m_off

				m_off(yyengine, yyengine->cp);
				mnsleep((yyvsp[-1].uval) * 1000000000);
				m_on(yyengine, yyengine->cp);
			}
		}
#line 4664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1854 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				/*	For now, nothing fun is done with comments	*/
			}
		}
#line 4675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1861 "sf-riscv.y" /* yacc.c:1646  */
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
#line 4690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1875 "sf-riscv.y" /* yacc.c:1646  */
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
#line 4718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1902 "sf-riscv.y" /* yacc.c:1646  */
    {
		}
#line 4725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1908 "sf-riscv.y" /* yacc.c:1646  */
    {
		}
#line 4732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1914 "sf-riscv.y" /* yacc.c:1646  */
    {
		}
#line 4739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1920 "sf-riscv.y" /* yacc.c:1646  */
    {
		}
#line 4746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1925 "sf-riscv.y" /* yacc.c:1646  */
    {
		}
#line 4753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1930 "sf-riscv.y" /* yacc.c:1646  */
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
#line 4781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1955 "sf-riscv.y" /* yacc.c:1646  */
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
#line 4806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1978 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_add(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval), (yyvsp[-4].uval));
				}

				uint32_t tmp = (B00110011 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0000 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].uval) << 20)		/*	rs2,	bit 20-24		*/
						| (B00000000 << 25)	/*	funct7,	bit 25-31		*/
						;

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
				yyengine->cp->PC += 4;
			}
		}
#line 4849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 2019 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_addi(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[-4].uval), (yyvsp[0].sval));
				}

				uint32_t tmp = (B00010011 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0000 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].sval) << 20)		/*	imm,	bit 20-31		*/
						;

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
				yyengine->cp->PC += 4;
			}
		}
#line 4891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 2059 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_and(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval), (yyvsp[-4].uval));
				}

				uint32_t tmp = (B00110011 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0111 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].uval) << 20)		/*	rs2,	bit 20-24		*/
						| (B00000000 << 25)	/*	funct7,	bit 25-31		*/
						;

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
				yyengine->cp->PC += 4;
			}
		}
#line 4934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 2100 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_andi(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[-4].uval), (yyvsp[0].sval));
				}

				uint32_t tmp = (B00010011 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0111 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].sval) << 20)		/*	imm,	bit 20-31		*/
						;

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
				yyengine->cp->PC += 4;
			}
		}
#line 4976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 2140 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_auipc(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].sval));
				}
				uint32_t tmp = B00010111	/*	opcode,	bit 0-6			*/
					| ((yyvsp[-2].uval) << 7)		/*	rd,	bit 7-11		*/
					| ((yyvsp[0].sval) << 12)		/*	imm,	bit 12-31		*/
					;
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
				yyengine->cp->PC += 4;
			}
		}
#line 5014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 2176 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				uint8_t imm1 = ((yyvsp[0].sval) >> 0) & B1111;
				uint8_t imm5 = ((yyvsp[0].sval) >> 4) & B111111;	/*	Shift the fragements	*/
				uint8_t imm11 = ((yyvsp[0].sval) >> 11) & 1;		/*	so that they are each	*/
				uint8_t imm12 = ((yyvsp[0].sval) >> 12) & 1;		/*	an individual number	*/

				if (!yyengine->cp->pipelined)	
				{
					riscv_beq(yyengine, yyengine->cp, (yyvsp[-4].uval), (yyvsp[-2].uval), imm1, imm5, imm11, imm12);
				}

				uint32_t tmp = (B01100011 << 0)		/*	opcode,	bit 0-6			*/
						| (imm11 << 7)		/*	imm11,	bit 7			*/
						| (imm1 << 8)		/*	imm1-4,	bit 8-11		*/
						| (B0000 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-4].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[-2].uval) << 20)		/*	rs2,	bit 20-24		*/
						| (imm5 << 25)		/*	imm5-10,bit 25-30		*/
						| (imm12 << 31)		/*	imm12,	bit 31			*/
						;

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
				yyengine->cp->PC += 4;
			}
		}
#line 5064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 2224 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				uint8_t imm1 = ((yyvsp[0].sval) >> 0) & B1111;
				uint8_t imm5 = ((yyvsp[0].sval) >> 4) & B111111;	/*	Shift the fragements	*/
				uint8_t imm11 = ((yyvsp[0].sval) >> 11) & 1;		/*	so that they are each	*/
				uint8_t imm12 = ((yyvsp[0].sval) >> 12) & 1;		/*	an individual number	*/
				if (!yyengine->cp->pipelined)	
				{
					riscv_bne(yyengine, yyengine->cp, (yyvsp[-4].uval), (yyvsp[-2].uval), imm1, imm5, imm11, imm12);
				}
				uint32_t tmp = (B01100011 << 0)		/*	opcode,	bit 0-6			*/
						| (imm11 << 7)		/*	imm11,	bit 7			*/
						| (imm1 << 8)		/*	imm1-4,	bit 8-11		*/
						| (B0001 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-4].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[-2].uval) << 20)		/*	rs2,	bit 20-24		*/
						| (imm5 << 25)		/*	imm5-10,bit 25-30		*/
						| (imm12 << 31)		/*	imm12,	bit 31			*/
						;
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
				yyengine->cp->PC += 4;
			}
		}
#line 5111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 2269 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{			
				uint8_t imm1 = ((yyvsp[0].sval) >> 0) & B1111;
				uint8_t imm5 = ((yyvsp[0].sval) >> 4) & B111111;	/*	Shift the fragements	*/
				uint8_t imm11 = ((yyvsp[0].sval) >> 11) & 1;		/*	so that they are each	*/
				uint8_t imm12 = ((yyvsp[0].sval) >> 12) & 1;		/*	an individual number	*/
				if (!yyengine->cp->pipelined)	
				{
					riscv_blt(yyengine, yyengine->cp, (yyvsp[-4].uval), (yyvsp[-2].uval), imm1, imm5, imm11, imm12);
				}
				uint32_t tmp = (B01100011 << 0)		/*	opcode,	bit 0-6			*/
						| (imm11 << 7)		/*	imm11,	bit 7			*/
						| (imm1 << 8)		/*	imm1-4,	bit 8-11		*/
						| (B0100 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-4].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[-2].uval) << 20)		/*	rs2,	bit 20-24		*/
						| (imm5 << 25)		/*	imm5-10,bit 25-30		*/
						| (imm12 << 31)		/*	imm12,	bit 31			*/
						;
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
				yyengine->cp->PC += 4;
			}
		}
#line 5158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 2314 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				uint8_t imm1 = ((yyvsp[0].sval) >> 0) & B1111;
				uint8_t imm5 = ((yyvsp[0].sval) >> 4) & B111111;	/*	Shift the fragements	*/
				uint8_t imm11 = ((yyvsp[0].sval) >> 11) & 1;		/*	so that they are each	*/
				uint8_t imm12 = ((yyvsp[0].sval) >> 12) & 1;		/*	an individual number	*/
				if (!yyengine->cp->pipelined)	
				{
					riscv_bge(yyengine, yyengine->cp, (yyvsp[-4].uval), (yyvsp[-2].uval), imm1, imm5, imm11, imm12);
				}
				uint32_t tmp = (B01100011 << 0)		/*	opcode,	bit 0-6			*/
						| (imm11 << 7)		/*	imm11,	bit 7			*/
						| (imm1 << 8)		/*	imm1-4,	bit 8-11		*/
						| (B0101 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-4].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[-2].uval) << 20)		/*	rs2,	bit 20-24		*/
						| (imm5 << 25)		/*	imm5-10,bit 25-30		*/
						| (imm12 << 31)		/*	imm12,	bit 31			*/
						;
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
				yyengine->cp->PC += 4;
			}
		}
#line 5205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 2359 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				uint8_t imm1 = ((yyvsp[0].uval) >> 0) & B1111;
				uint8_t imm5 = ((yyvsp[0].uval) >> 4) & B111111;	/*	Shift the fragements	*/
				uint8_t imm11 = ((yyvsp[0].uval) >> 11) & 1;		/*	so that they are each	*/
				uint8_t imm12 = ((yyvsp[0].uval) >> 12) & 1;		/*	an individual number	*/
				if (!yyengine->cp->pipelined)	
				{
					riscv_bltu(yyengine, yyengine->cp, (yyvsp[-4].uval), (yyvsp[-2].uval), imm1, imm5, imm11, imm12);
				}
				uint32_t tmp = (B01100011 << 0)		/*	opcode,	bit 0-6			*/
						| (imm11 << 7)		/*	imm11,	bit 7			*/
						| (imm1 << 8)		/*	imm1-4,	bit 8-11		*/
						| (B0110 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-4].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[-2].uval) << 20)		/*	rs2,	bit 20-24		*/
						| (imm5 << 25)		/*	imm5-10,bit 25-30		*/
						| (imm12 << 31)		/*	imm12,	bit 31			*/
						;
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
				yyengine->cp->PC += 4;
			}
		}
#line 5252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 2404 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				uint8_t imm1 = ((yyvsp[0].uval) >> 0) & B1111;
				uint8_t imm5 = ((yyvsp[0].uval) >> 4) & B111111;	/*	Shift the fragements	*/
				uint8_t imm11 = ((yyvsp[0].uval) >> 11) & 1;		/*	so that they are each	*/
				uint8_t imm12 = ((yyvsp[0].uval) >> 12) & 1;		/*	an individual number	*/
				if (!yyengine->cp->pipelined)	
				{
					riscv_bgeu(yyengine, yyengine->cp, (yyvsp[-4].uval), (yyvsp[-2].uval), imm1, imm5, imm11, imm12);
				}
				uint32_t tmp = (B01100011 << 0)		/*	opcode,	bit 0-6			*/
						| (imm11 << 7)		/*	imm11,	bit 7			*/
						| (imm1 << 8)		/*	imm1-4,	bit 8-11		*/
						| (B0111 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-4].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[-2].uval) << 20)		/*	rs2,	bit 20-24		*/
						| (imm5 << 25)		/*	imm5-10,bit 25-30		*/
						| (imm12 << 31)		/*	imm12,	bit 31			*/
						;
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
				yyengine->cp->PC += 4;
			}
		}
#line 5299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 2449 "sf-riscv.y" /* yacc.c:1646  */
    {
			mprint(yyengine, NULL, siminfo, 
					"Not implemented.");
		}
#line 5308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 2456 "sf-riscv.y" /* yacc.c:1646  */
    {
			mprint(yyengine, NULL, siminfo, 
					"Not implemented.");
		}
#line 5317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 2463 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo,
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				uint8_t imm1 = ((yyvsp[0].sval) >> 0) & B0000001111111111;
				uint8_t imm11 = ((yyvsp[0].sval) >> 10) & 1;			/*	Shift the fragements	*/
				uint8_t imm12 = ((yyvsp[0].sval) >> 11) & B11111111;		/*	so that they are each	*/
				uint8_t imm20 = ((yyvsp[0].sval) >> 19) & 1;			/*	an individual number	*/
				if (!yyengine->cp->pipelined)	
				{
					riscv_jal(yyengine, yyengine->cp, (yyvsp[-2].uval), imm1, imm11, imm12, imm20);
				}
				uint32_t tmp = (B01101111 << 0)	/*	opcode,		bit 0-6			*/
						| ((yyvsp[-2].uval) << 7)	/*	rd,		bit 7-11		*/
						| (imm12 << 12)	/*	imm12-19,	bit 12-19		*/
						| (imm11 << 20)	/*	imm11,		bit 20			*/
						| (imm1 << 25)	/*	imm1-10,	bit 21-30		*/
						| (imm20 << 31)	/*	imm12,		bit 31			*/
						;
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
				yyengine->cp->PC += 4;
			}
		}
#line 5362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 2506 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo,
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_jalr(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[-4].uval), (yyvsp[0].sval));
				}

				uint32_t tmp = (B01100111 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0000 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].sval) << 20)		/*	imm,	bit 20-31		*/
						;
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
				yyengine->cp->PC += 4;
			}
		}
#line 5403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 2545 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_lb(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[-4].uval), (yyvsp[0].sval));
				}

				uint32_t tmp = (B00000011 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0000 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].sval) << 20)		/*	imm,	bit 20-31		*/
						;

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
				yyengine->cp->PC += 4;
			}
		}
#line 5445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 2585 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_lbu(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[-4].uval), (yyvsp[0].uval));
				}

				uint32_t tmp = (B00000011 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0100 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].uval) << 20)		/*	imm,	bit 20-31		*/
						;

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
				yyengine->cp->PC += 4;
			}
		}
#line 5487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 2625 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_lh(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[-4].uval), (yyvsp[0].sval));
				}

				uint32_t tmp = (B00000011 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0001 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].sval) << 20)		/*	imm,	bit 20-31		*/
						;

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
				yyengine->cp->PC += 4;
			}
		}
#line 5529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 2665 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_lhu(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[-4].uval), (yyvsp[0].uval));
				}

				uint32_t tmp = (B00000011 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0101 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].uval) << 20)		/*	imm,	bit 20-31		*/
						;

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
				yyengine->cp->PC += 4;
			}
		}
#line 5571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 2705 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_lui(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].sval));
				}
				uint32_t tmp = B00110111	/*	opcode,	bit 0-6			*/
					| ((yyvsp[-2].uval) << 7)		/*	rd,	bit 7-11		*/
					| ((yyvsp[0].sval) << 12)		/*	imm,	bit 12-31		*/
					;
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
				yyengine->cp->PC += 4;
			}
		}
#line 5609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 2741 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_lw(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[-4].uval), (yyvsp[0].sval));
				}

				uint32_t tmp = (B00000011 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0010 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].sval) << 20)		/*	imm,	bit 20-31		*/
						;

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
				yyengine->cp->PC += 4;
			}
		}
#line 5651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 2781 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_or(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval), (yyvsp[-4].uval));
				}

				uint32_t tmp = (B00110011 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0110 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].uval) << 20)		/*	rs2,	bit 20-24		*/
						| (B00000000 << 25)	/*	funct7,	bit 25-31		*/
						;

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
				yyengine->cp->PC += 4;
			}
		}
#line 5694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 2822 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_ori(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[-4].uval), (yyvsp[0].sval));
				}

				uint32_t tmp = (B00010011 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0110 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].sval) << 20)		/*	imm,	bit 20-31		*/
						;

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
				yyengine->cp->PC += 4;
			}
		}
#line 5736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 2862 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				uint8_t imm0 = ((yyvsp[0].sval) >> 0) & B00011111;	/*	Shift the fragements	*/
				uint8_t imm5 = ((yyvsp[0].sval) >> 4) & B01111111;	/*	so that they are each	*/
									/*	an individual number	*/

				if (!yyengine->cp->pipelined)	
				{
					riscv_sb(yyengine, yyengine->cp, (yyvsp[-4].uval), (yyvsp[-2].uval), imm0, imm5);
				}

				uint32_t tmp = (B00100011 << 0)		/*	opcode,	bit 0-6			*/
						| (imm0 << 7)		/*	imm11,	bit 7-11		*/
						| (B0000 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-4].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[-2].uval) << 20)		/*	rs2,	bit 20-24		*/
						| (imm5 << 25)		/*	imm5-10,bit 25-31		*/
						;

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
				yyengine->cp->PC += 4;
			}
		}
#line 5783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 2907 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				uint8_t imm0 = ((yyvsp[0].sval) >> 0) & B00011111;	/*	Shift the fragements	*/
				uint8_t imm5 = ((yyvsp[0].sval) >> 4) & B01111111;	/*	so that they are each	*/
									/*	an individual number	*/

				if (!yyengine->cp->pipelined)	
				{
					riscv_sh(yyengine, yyengine->cp, (yyvsp[-4].uval), (yyvsp[-2].uval), imm0, imm5);
				}

				uint32_t tmp = (B00100011 << 0)		/*	opcode,	bit 0-6			*/
						| (imm0 << 7)		/*	imm11,	bit 7-11		*/
						| (B0001 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-4].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[-2].uval) << 20)		/*	rs2,	bit 20-24		*/
						| (imm5 << 25)		/*	imm5-10,bit 25-31		*/
						;

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
				yyengine->cp->PC += 4;
			}
		}
#line 5830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 2952 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_sll(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval), (yyvsp[-4].uval));
				}

				uint32_t tmp = (B00110011 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0001 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].uval) << 20)		/*	rs2,	bit 20-24		*/
						| (B00000000 << 25)	/*	funct7,	bit 25-31		*/
						;

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
				yyengine->cp->PC += 4;
			 }
		}
#line 5873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 2993 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_slli(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[-4].uval), (yyvsp[0].sval));
				}

				uint32_t tmp = (B00010011 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0001 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].sval) << 20)		/*	rs2,	bit 20-24		*/
						| (B00000000 << 25)	/*	funct7,	bit 25-31		*/
						;

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
				yyengine->cp->PC += 4;
			 }
		}
#line 5916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 3034 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_slt(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval), (yyvsp[-4].uval));
				}

				uint32_t tmp = (B00110011 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0010 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].uval) << 20)		/*	rs2,	bit 20-24		*/
						| (B00000000 << 25)	/*	funct7,	bit 25-31		*/
						;

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
				yyengine->cp->PC += 4;
			 }
		}
#line 5959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 3075 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_slti(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[-4].uval), (yyvsp[0].sval));
				}

				uint32_t tmp = (B00010011 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0010 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].sval) << 20)		/*	imm,	bit 20-31		*/
						;

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
				yyengine->cp->PC += 4;
			}
		}
#line 6001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 3115 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_sltiu(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[-4].uval), (yyvsp[0].uval));
				}

				uint32_t tmp = (B00010011 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0011 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].uval) << 20)		/*	imm,	bit 20-31		*/
						;

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
				yyengine->cp->PC += 4;
			}
		}
#line 6043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 3155 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_sltu(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval), (yyvsp[-4].uval));
				}

				uint32_t tmp = (B00110011 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0011 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].uval) << 20)		/*	rs2,	bit 20-24		*/
						| (B00000000 << 25)	/*	funct7,	bit 25-31		*/
						;

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
				yyengine->cp->PC += 4;
			 }
		}
#line 6086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 3196 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_sra(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval), (yyvsp[-4].uval));
				}

				uint32_t tmp = (B00110011 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0101 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].uval) << 20)		/*	rs2,	bit 20-24		*/
						| (B00100000 << 25)	/*	funct7,	bit 25-31		*/
						;

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
				yyengine->cp->PC += 4;
			 }
		}
#line 6129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 3237 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_srai(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[-4].uval), (yyvsp[0].sval));
				}

				uint32_t tmp = (B00010011 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0101 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].sval) << 20)		/*	rs2,	bit 20-24		*/
						| (B00100000 << 25)	/*	funct7,	bit 25-31		*/
						;

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
				yyengine->cp->PC += 4;
			 }
		}
#line 6172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 3278 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_srl(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval), (yyvsp[-4].uval));
				}

				uint32_t tmp = (B00110011 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0101 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].uval) << 20)		/*	rs2,	bit 20-24		*/
						| (B00000000 << 25)	/*	funct7,	bit 25-31		*/
						;

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
				yyengine->cp->PC += 4;
			 }
		}
#line 6215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 3319 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_srli(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[-4].uval), (yyvsp[0].sval));
				}

				uint32_t tmp = (B00010011 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0101 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].sval) << 20)		/*	rs2,	bit 20-24		*/
						| (B00000000 << 25)	/*	funct7,	bit 25-31		*/
						;

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
				yyengine->cp->PC += 4;
			 }
		}
#line 6258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 3360 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_sub(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval), (yyvsp[-4].uval));
				}

				uint32_t tmp = (B00110011 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0000 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].uval) << 20)		/*	rs2,	bit 20-24		*/
						| (B00100000 << 25)	/*	funct7,	bit 25-31		*/
						;

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
				yyengine->cp->PC += 4;
			 }
		}
#line 6301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 3401 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				uint8_t imm0 = ((yyvsp[0].sval) >> 0) & B00011111;	/*	Shift the fragements	*/
				uint8_t imm5 = ((yyvsp[0].sval) >> 4) & B01111111;	/*	so that they are each	*/
									/*	an individual number	*/

				if (!yyengine->cp->pipelined)	
				{
					riscv_sw(yyengine, yyengine->cp, (yyvsp[-4].uval), (yyvsp[-2].uval), imm0, imm5);
				}

				uint32_t tmp = (B00100011 << 0)		/*	opcode,	bit 0-6			*/
						| (imm0 << 7)		/*	imm11,	bit 7-11		*/
						| (B0010 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-4].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[-2].uval) << 20)		/*	rs2,	bit 20-24		*/
						| (imm5 << 25)		/*	imm5-10,bit 25-31		*/
						;

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
				yyengine->cp->PC += 4;
			}
		}
#line 6348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 3446 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_xor(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[0].uval), (yyvsp[-4].uval));
				}

				uint32_t tmp = (B00110011 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0100 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].uval) << 20)		/*	rs2,	bit 20-24		*/
						| (B00000000 << 25)	/*	funct7,	bit 25-31		*/
						;

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
				yyengine->cp->PC += 4;
			 }
		}
#line 6391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 3487 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (yyengine->scanning)
			{
				yyengine->cp->PC += 4;
			}
			else if (yyengine->cp->machinetype != MACHINE_RISCV)
			{
				mprint(yyengine, NULL, siminfo, 
					"Inline assembler is for RV32I(FD) nodes only. Check node type.");
			}
			else
			{
				if (!yyengine->cp->pipelined)	
				{
					riscv_xori(yyengine, yyengine->cp, (yyvsp[-2].uval), (yyvsp[-4].uval), (yyvsp[0].sval));
				}

				uint32_t tmp = (B00010011 << 0)		/*	opcode,	bit 0-6			*/
						| ((yyvsp[-4].uval) << 7)		/*	rd,	bit 7-11		*/
						| (B0100 << 12)		/*	funct3,	bit 12-14		*/
						| ((yyvsp[-2].uval) << 15)		/*	rs1,	bit 15-19		*/
						| ((yyvsp[0].sval) << 20)		/*	imm,	bit 20-31		*/
						;

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
				yyengine->cp->PC += 4;
			}
		}
#line 6433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 3544 "sf-riscv.y" /* yacc.c:1646  */
    {
			if (!yyengine->scanning)
			{
				//$$->value = m_randgen(yyengine->cp, $3, $4, $5, $6, $7);
			}
		}
#line 6444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 3553 "sf-riscv.y" /* yacc.c:1646  */
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
#line 6461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 4148 "sf-riscv.y" /* yacc.c:1646  */
    {
			char tmp;
			char *ep = &tmp;

			(yyval.uval) = strtoul((yyvsp[0].str), &ep, 0);
			
			if (*ep != '\0')
			{
				merror(yyengine, "Invalid unsigned immediate data %s.", (yyvsp[0].str));
			}
		}
#line 6477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 4162 "sf-riscv.y" /* yacc.c:1646  */
    {
			char tmp;
			char *ep = &tmp;

			(yyval.sval) = strtol((yyvsp[0].str), &ep, 0);
			
			if (*ep != '\0')
			{
				merror(yyengine, "Invalid signed immediate data %s.", (yyvsp[0].str));
			}
		}
#line 6493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 4174 "sf-riscv.y" /* yacc.c:1646  */
    {
			char tmp;
			char *ep = &tmp;

			(yyval.sval) = -(strtol((yyvsp[0].str), &ep, 0));
				
			if (*ep != '\0')
			{
				merror(yyengine, "Invalid signed immediate data %s.", (yyvsp[0].str));
			}
		}
#line 6509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 4186 "sf-riscv.y" /* yacc.c:1646  */
    {
			char tmp;
			char *ep = &tmp;

			(yyval.sval) = +(strtol((yyvsp[0].str), &ep, 0));
				
			if (*ep != '\0')
			{
				merror(yyengine, "Invalid signed immediate data %s.", (yyvsp[0].str));
			}
		}
#line 6525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 4200 "sf-riscv.y" /* yacc.c:1646  */
    {
			char tmp;
			char *ep = &tmp;

			(yyval.dval) = strtod((yyvsp[0].str), &ep);
			
			if (*ep != '\0')
			{
				merror(yyengine, "Invalid double immediate data %s.", (yyvsp[0].str));
			}
		}
#line 6541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 4212 "sf-riscv.y" /* yacc.c:1646  */
    {
			char tmp;
			char *ep = &tmp;

			(yyval.dval) = -(strtod((yyvsp[0].str), &ep));
				
			if (*ep != '\0')
			{
				merror(yyengine, "Invalid double immediate data %s.", (yyvsp[0].str));
			}
		}
#line 6557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 4224 "sf-riscv.y" /* yacc.c:1646  */
    {
			char tmp;
			char *ep = &tmp;

			(yyval.dval) = +(strtod((yyvsp[0].str), &ep));
				
			if (*ep != '\0')
			{
				merror(yyengine, "Invalid double immediate data %s.", (yyvsp[0].str));
			}
		}
#line 6573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 4238 "sf-riscv.y" /* yacc.c:1646  */
    {
			(yyval.rval) = (Rval *) mcalloc(yyengine, 1, sizeof(Rval), "sf.y:rdimm/$$");
			if ((yyval.rval) == NULL)
			{
				sfatal(yyengine, yyengine->cp, "Mcalloc failed");
			}

			(yyval.rval)->dval = (yyvsp[0].dval);
		}
#line 6587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 4286 "sf-riscv.y" /* yacc.c:1646  */
    {
			(yyval.dlist) = (yyvsp[-1].dlist);
		}
#line 6595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 4292 "sf-riscv.y" /* yacc.c:1646  */
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
#line 6620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 4313 "sf-riscv.y" /* yacc.c:1646  */
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
#line 6639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 4331 "sf-riscv.y" /* yacc.c:1646  */
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
#line 6664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 4352 "sf-riscv.y" /* yacc.c:1646  */
    {
			char tmp;
			char *ep = &tmp;


			(yyval.sval) = strtol((yyvsp[0].str), &ep, 0);
				
			if (*ep != '\0')
			{
				merror(yyengine, "Invalid DISP ([%s]). Possibly due to a .comm.", (yyvsp[0].str));
			}
		}
#line 6681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 4365 "sf-riscv.y" /* yacc.c:1646  */
    {
			char tmp;
			char *ep = &tmp;


			(yyval.sval) = +(strtol((yyvsp[0].str), &ep, 0));
				
			if (*ep != '\0')
			{
				merror(yyengine, "Invalid DISP ([%s]). Possibly due to a .comm.", (yyvsp[0].str));
			}
		}
#line 6698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 4378 "sf-riscv.y" /* yacc.c:1646  */
    {
			char tmp;
			char *ep = &tmp;


			(yyval.sval) = -(strtol((yyvsp[0].str), &ep, 0));
				
			if (*ep != '\0')
			{
				merror(yyengine, "Invalid DISP ([%s]). Possibly due to a .comm.", (yyvsp[0].str));
			}
		}
#line 6715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 4393 "sf-riscv.y" /* yacc.c:1646  */
    {
			/*								*/
			/*	To make handling of empty string in T_RUN rule 		*/
			/*	uniform, we malloc a place holder.			*/
			/*								*/
			char *tmp = mmalloc(yyengine, sizeof(char), "opstring rule in shasm.y");
			tmp[0] = '\0';
			(yyval.str) = tmp;
		}
#line 6729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 4403 "sf-riscv.y" /* yacc.c:1646  */
    {
			(yyval.str) = (yyvsp[0].str);
		}
#line 6737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 4409 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 0;}
#line 6743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 4410 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 1;}
#line 6749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 4411 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 2;}
#line 6755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 4412 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 3;}
#line 6761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 4413 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 4;}
#line 6767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 4414 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 5;}
#line 6773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 4415 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 6;}
#line 6779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 4416 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 7;}
#line 6785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 4417 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 8;}
#line 6791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 4418 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 9;}
#line 6797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 4419 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 10;}
#line 6803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 4420 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 11;}
#line 6809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 4421 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 12;}
#line 6815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 4422 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 13;}
#line 6821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 4423 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 14;}
#line 6827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 4424 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 15;}
#line 6833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 4425 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 16;}
#line 6839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 4426 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 17;}
#line 6845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 4427 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 18;}
#line 6851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 4428 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 19;}
#line 6857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 4429 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 20;}
#line 6863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 4430 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 21;}
#line 6869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 4431 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 22;}
#line 6875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 4432 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 23;}
#line 6881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 4433 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 24;}
#line 6887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 4434 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 25;}
#line 6893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 4435 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 26;}
#line 6899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 4436 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 27;}
#line 6905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 4437 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 28;}
#line 6911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 4438 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 29;}
#line 6917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 4439 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 30;}
#line 6923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 4440 "sf-riscv.y" /* yacc.c:1646  */
    {(yyval.uval) = 31;}
#line 6929 "y.tab.c" /* yacc.c:1646  */
    break;


#line 6933 "y.tab.c" /* yacc.c:1646  */
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
#line 4476 "sf-riscv.y" /* yacc.c:1906  */


#include "lex-riscv.c"

int
yyerror(char *err)
{
	merror(yyengine, "Invalid command!");
	clearistream(yyengine);
	
	return 0;
}
