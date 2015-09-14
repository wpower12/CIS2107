## -*- Makefile -*-
##
## User: wpower
## Time: Sep 14, 2015 9:15:03 AM
## Makefile created by Oracle Solaris Studio.
##
## This file is generated automatically.
##


#### Compiler and tool definitions shared by all build targets #####
CC = gcc
BASICOPTS = 
CFLAGS = $(BASICOPTS)


# Define the target directories.
TARGETDIR_rpn=.


all: rpn

## Target: rpn
OBJS_rpn =  \
	$(TARGETDIR_rpn)/getch.o \
	$(TARGETDIR_rpn)/getop.o \
	$(TARGETDIR_rpn)/main.o \
	$(TARGETDIR_rpn)/stack.o
USERLIBS_rpn = $(SYSLIBS_rpn) 
DEPLIBS_rpn =  
LDLIBS_rpn = $(USERLIBS_rpn)


# Link or archive
$(TARGETDIR_rpn)/rpn: $(TARGETDIR_rpn) $(OBJS_rpn) $(DEPLIBS_rpn)
	$(LINK.c) $(CFLAGS_rpn) $(CPPFLAGS_rpn) -o $@ $(OBJS_rpn) $(LDLIBS_rpn)


# Compile source files into .o files
$(TARGETDIR_rpn)/getch.o: $(TARGETDIR_rpn) getch.c
	$(COMPILE.c) $(CFLAGS_rpn) $(CPPFLAGS_rpn) -o $@ getch.c

$(TARGETDIR_rpn)/getop.o: $(TARGETDIR_rpn) getop.c
	$(COMPILE.c) $(CFLAGS_rpn) $(CPPFLAGS_rpn) -o $@ getop.c

$(TARGETDIR_rpn)/main.o: $(TARGETDIR_rpn) main.c
	$(COMPILE.c) $(CFLAGS_rpn) $(CPPFLAGS_rpn) -o $@ main.c

$(TARGETDIR_rpn)/stack.o: $(TARGETDIR_rpn) stack.c
	$(COMPILE.c) $(CFLAGS_rpn) $(CPPFLAGS_rpn) -o $@ stack.c



#### Clean target deletes all generated files ####
clean:
	rm -f \
		$(TARGETDIR_rpn)/rpn \
		$(TARGETDIR_rpn)/getch.o \
		$(TARGETDIR_rpn)/getop.o \
		$(TARGETDIR_rpn)/main.o \
		$(TARGETDIR_rpn)/stack.o
# Enable dependency checking
.KEEP_STATE:
.KEEP_STATE_FILE:.make.state.GNU-amd64-Linux

