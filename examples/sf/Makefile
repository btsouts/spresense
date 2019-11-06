############################################################################
# hello/Makefile
#
#   Copyright (C) 2008, 2010-2013 Gregory Nutt. All rights reserved.
#   Author: Gregory Nutt <gnutt@nuttx.org>
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
#
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in
#    the documentation and/or other materials provided with the
#    distribution.
# 3. Neither the name NuttX nor the names of its contributors may be
#    used to endorse or promote products derived from this software
#    without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
# FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
# COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
# BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
# OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
# AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
# LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
# ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.
#
############################################################################
-include $(TOPDIR)/Make.defs
-include $(SDKDIR)/Make.defs
include $(APPDIR)/Make.defs

GAWK			= gawk
GBISON			= bison
BFLAGS			= -t -v -Wno-other -Wno-conflicts-sr -Wno-conflicts-rr
OSTYPE          = nuttx
ENDIAN			= SF_L_ENDIAN
PLATFORM_CFLAGS 	= -D$(ENDIAN) -O2

CFLAGS += $(PLATFORM_CFLAGS)

CONFIG_EXAMPLES_SF_PRIORITY ?= SCHED_PRIORITY_DEFAULT
CONFIG_EXAMPLES_SF_STACKSIZE ?= 2048

APPNAME = sf
PRIORITY = $(CONFIG_EXAMPLES_SF_PRIORITY)
STACKSIZE = $(CONFIG_EXAMPLES_SF_STACKSIZE)

ASRCS =
CSRCS =\
	randgen.c\
	arch-$(OSTYPE).c\
	batt.c\
	bit-utils.c\
	decode-hitachi-sh.c\
	decode-riscv.c\
	dev7708.c\
	devsim7708.c\
	fault.c\
	fdr.c\
	machine-hitachi-sh.c\
	machine-riscv.c\
	inst_uncertain.c\
	merror.c\
	mmalloc.c\
	mmu-hitachi-sh.c\
	network-hitachi-sh.c\
	op-hitachi-sh.c\
	op-riscv.c\
	pau.c\
	physics.c\
	mass.c\
	propulsion.c\
	pic.c\
	pipeline-hitachi-sh.c\
	pipeline-riscv.c\
	power.c\
	regaccess-riscv.c\
	syscalls.c\
	tokenhandling.c\
	sf-hitachi-sh.c\
	sf-riscv.c\
	taint.c
MAINSRC = sf.c

CONFIG_EXAMPLES_SF_PROGNAME ?= sf$(EXEEXT)
PROGNAME = $(CONFIG_EXAMPLES_SF_PROGNAME)

#ASRCS =
#CSRCS += dsp_rpc.c
#MAINSRC = fft_main.c

AOBJS = $(ASRCS:.S=$(OBJEXT))
COBJS = $(CSRCS:.c=$(OBJEXT))
MAINOBJ = $(MAINSRC:.c=$(OBJEXT))

SRCS = $(ASRCS) $(CSRCS) $(MAINSRC)
OBJS = $(AOBJS) $(COBJS)

ifneq ($(CONFIG_BUILD_KERNEL),y)
	OBJS += $(MAINOBJ)
endif

ifeq ($(CONFIG_WINDOWS_NATIVE),y)
  BIN = ..\libexamples$(LIBEXT)
else
ifeq ($(WINTOOL),y)
  BIN = ..\\libexamples$(LIBEXT)
else
  BIN = ../libexamples$(LIBEXT)
endif
endif	

ifeq ($(WINTOOL),y)
  INSTALL_DIR = "${shell cygpath -w $(BIN_DIR)}"
else
  INSTALL_DIR = $(BIN_DIR)
endif

ROOTDEPPATH  = --dep-path .

all: .built
.PHONY: .built clean depend distclean 

$(AOBJS): %$(OBJEXT): %.S
	$(call ASSEMBLE, $<, $@)

$(COBJS) $(MAINOBJ): %$(OBJEXT): %.c
	$(call COMPILE, $<, $@)

#---------
sf-hitachi-sh.o: sf-hitachi-sh.tab.c
	#$(CC) $(CCFLAGS) -Wall $(INCLUDEDIRS) $(DBGFLAGS) $(OPTFLAGS) -c sf-hitachi-sh.tab.c -o $@
	$(call COMPILE, $<, $@)

sf-riscv.o: sf-riscv.tab.c
	#$(CC) $(CCFLAGS) -Wall $(INCLUDEDIRS) $(DBGFLAGS) $(OPTFLAGS) -c sf-riscv.tab.c -o $@
	$(call COMPILE, $<, $@)

sf-hitachi-sh.tab.c: sf-hitachi-sh.y lex-hitachi-sh.c
	$(GBISON) $(BFLAGS) -p sf_superh_ sf-hitachi-sh.y

sf-riscv.tab.c: sf-riscv.y lex-riscv.c
	$(GBISON) $(BFLAGS) -p sf_riscv_ sf-riscv.y
#---------

# Sunflower simulator
mversion.h: 
	echo 'char const MVERSION[] = "1.1 (build '`date '+%m-%d-%Y-%H:%M:%S'`-`whoami`@`hostname`-`uname`\)\"\; > mversion.h

opstr-hitachi-sh.h: decode-hitachi-sh.h 
	./mkopstr-hitachi-sh $(GAWK) > opstr-hitachi-sh.h

opstr-ti-msp430.h: decode-ti-msp430.h 
	./mkopstr-ti-msp430 $(GAWK) > opstr-ti-msp430.h

opstr-riscv.h: decode-riscv.h 
	./mkopstr-riscv $(GAWK) > opstr-riscv.h

decode-hitachi-sh.h: latencies-hitachi-sh.h 
	./mkdecode-hitachi-sh $(GAWK) > decode-hitachi-sh.h

decode-riscv.h: latencies-riscv.h 
	./mkdecode-riscv $(GAWK) > decode-riscv.h

sf-riscv.tab.c: sf-riscv.y lex-riscv.c $(HEADERS) Makefile
	$(GBISON) $(BFLAGS) -p sf_riscv_ sf-riscv.y

#	Either of the lex-* would suffice for generating the LaTeX / help command array.
help.h: lex-hitachi-sh.c 
	./mkhelp $(GAWK) > help.h

commands.tex: lex-hitachi-sh.c 
	./mkmantex $(GAWK) > commands.tex

# This is a little messy.  The build is broken into two pieces:  (1) the
# dsp/ subdir build that auto-generates several files, and (2) the real
# build.  This is done because we need a fresh build context after auto-
# generating the source files.

#really_build: $(OBJS)
#	$(call ARCHIVE, $(BIN), $(OBJS))
#	@touch .built

#.built: mversion.h opstr-hitachi-sh.h opstr-ti-msp430.h opstr-riscv.h decode-hitachi-sh.h help.h commands.tex
.built: mversion.h opstr-hitachi-sh.h opstr-ti-msp430.h opstr-riscv.h decode-hitachi-sh.h help.h commands.tex $(COBJS) $(MAINOBJ) 
#	@$(MAKE) -C dsp TOPDIR="$(TOPDIR)" APPDIR="$(APPDIR)" CROSSDEV=$(CROSSDEV)
#	@$(MAKE) TOPDIR="$(TOPDIR)" APPDIR="$(APPDIR)" really_build
	$(call ARCHIVE, $(BIN), $(OBJS))

ifeq ($(CONFIG_BUILD_KERNEL),y)
$(BIN_DIR)$(DELIM)$(PROGNAME): $(OBJS) $(MAINOBJ)
	@echo "LD: $(PROGNAME)"
	$(Q) $(LD) $(LDELFFLAGS) $(LDLIBPATH) -o $(INSTALL_DIR)$(DELIM)$(PROGNAME) $(ARCHCRT0OBJ) $(MAINOBJ) $(LDLIBS)
	$(Q) $(NM) -u  $(INSTALL_DIR)$(DELIM)$(PROGNAME)

install: $(BIN_DIR)$(DELIM)$(PROGNAME)

else
install:
	$(call ARCHIVE, $(BIN), $(OBJS))

endif

ifeq ($(CONFIG_NSH_BUILTIN_APPS),y)
$(BUILTIN_REGISTRY)$(DELIM)$(APPNAME)_main.bdat: $(DEPCONFIG) Makefile
	$(call REGISTER,$(APPNAME),$(PRIORITY),$(STACKSIZE),$(APPNAME)_main)

context: $(BUILTIN_REGISTRY)$(DELIM)$(APPNAME)_main.bdat
else
context:
endif

.depend: mversion.h opstr-hitachi-sh.h opstr-ti-msp430.h opstr-riscv.h decode-hitachi-sh.h help.h
	@$(MKDEP) $(ROOTDEPPATH) "$(CC)" -- $(CFLAGS) -- $(SRCS) >Make.dep
	@touch $@

depend: .depend

#clean_dsp:
	#@$(MAKE) -C dsp TOPDIR="$(TOPDIR)" APPDIR="$(APPDIR)" CROSSDEV=$(CROSSDEV) clean

clean:
	$(call DELFILE, .built)
	$(call CLEAN)
	rm -rfv *.o *.core core *.tab.c mversion.h help.h commands.tex opstr-*.h decode-riscv.h decode-hitachi-sh.h parsedriver.i lex.i sf.output gmon.out sunflower.out

distclean: clean
	$(call DELFILE, Make.dep)
	$(call DELFILE, .depend)

-include Make.dep
.PHONY: preconfig
preconfig:
