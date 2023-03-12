/* $VER: vlink tosopts.c V0.16i (31.01.22)
 *
 * This file is part of vlink, a portable linker for multiple
 * object formats.
 * Copyright (c) 1997-2022  Frank Wille
 */

#include "config.h"
#if defined(AOUT_MINT) || defined(ATARI_TOS)
#define TOSOPTS_C
#include "vlink.h"

uint32_t tos_flags;  /* flags field in TOS header */


int tos_options(struct GlobalVars *gv,int argc,const char *argv[],int *i)
{
  if (!strcmp(argv[*i],"-tos-flags")) {
    long fl;

    if (sscanf(get_arg(argc,argv,i),"%li",&fl) == 1)
      tos_flags = fl;
    else return 0;
  }
  else if (!strcmp(argv[*i],"-tos-fastload"))
    tos_flags |= 1;
  else if (!strcmp(argv[*i],"-tos-fastram"))
    tos_flags |= 2;
  else if (!strcmp(argv[*i],"-tos-fastalloc"))
    tos_flags |= 4;
  else if (!strcmp(argv[*i],"-tos-private"))
    tos_flags &= ~0x30;
  else if (!strcmp(argv[*i],"-tos-global"))
    tos_flags |= 0x10;
  else if (!strcmp(argv[*i],"-tos-super"))
    tos_flags |= 0x20;
  else if (!strcmp(argv[*i],"-tos-readable"))
    tos_flags |= 0x30;
  else if (!strcmp(argv[*i],"-tos-textbased"))
    gv->textbasedsyms = 1;
  else
    return 0;
  return 1;
}

#endif
