/* $VER: vlink vobj.h V0.12 (14.11.08)
 *
 * This file is part of vlink, a portable linker for multiple
 * object formats.
 * Copyright (c) 1997-2008  Frank Wille
 */

/* symbol types */
#define LABSYM 1
#define IMPORT 2
#define EXPRESSION 3

/* symbol flags */
#define TYPE(sym) ((sym)->flags&7)
#define TYPE_UNKNOWN  0
#define TYPE_OBJECT   1
#define TYPE_FUNCTION 2
#define TYPE_SECTION  3
#define TYPE_FILE     4

#define EXPORT 8
#define INEVAL 16
#define COMMON 32
#define WEAK 64


typedef lword taddr;

struct vobj_symbol {
  char *name;
  int type,flags,sec,size;
  taddr val;
};
