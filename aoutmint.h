/* $VER: vlink aoutmint.h V0.13 (02.11.10)
 *
 * This file is part of vlink, a portable linker for multiple
 * object formats.
 * Copyright (c) 1997-2010  Frank Wille
 */

#include "tosdefs.h"
#include "aout.h"

/* a.out-MiNT program header */
struct mint_exec
{
  PH tos;                       /* TOS-part of the header */
  uint8_t jmp_entry[8];         /* asm: e_entry to d0 and jump to e_entry */
  struct aout_hdr aout;         /* the standard a.out header */
  uint8_t tparel_pos[4];        /* TPA relocs file offset */
  uint8_t tparel_size[4];       /* TPA relocs size */
  uint8_t stkpos[4];            /* file offset for stack size */
  uint8_t symbol_fmt[4];        /* format of symbol table */
  uint8_t pad0[172];            /* 0-paddding */
};

#define TEXT_OFFSET (0xe4)      /* offset of real .text start */
