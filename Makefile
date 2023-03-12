# Standard Unix with gcc

TARGET = vlink
DIR = objects
MD = mkdir

CC = gcc
CCOUT = -o $(DUMMYVARIABLE)	# produces the string "-o "
COPTS = -std=c99 -Wpedantic -O2 -fomit-frame-pointer -c
CONFIG =

LD = $(CC)
LDOUT = -o $(DUMMYVARIABLE)	# produces the string "-o "
LDOPTS =
LIBS =


include make.rules
