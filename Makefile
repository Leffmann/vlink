# Standard Unix

TARGET = vlink
DIR = objects
MD = mkdir

CC = gcc
CCOUT = -o $(DUMMYVARIABLE)	# produces the string "-o "
COPTS = -std=c9x -O2 -fomit-frame-pointer -c
CONFIG =

LD = gcc
LDOUT = -o $(DUMMYVARIABLE)	# produces the string "-o "
LDOPTS =
LIBS =


include make.rules
