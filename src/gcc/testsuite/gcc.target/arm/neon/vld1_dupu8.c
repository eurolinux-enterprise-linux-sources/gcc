/* Test the `vld1_dupu8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vld1_dupu8 (void)
{
  uint8x8_t out_uint8x8_t;

  out_uint8x8_t = vld1_dup_u8 (0);
}

/* { dg-final { scan-assembler "vld1\.8\[ 	\]+((\\\{\[dD\]\[0-9\]+\\\[\\\]\\\})|(\[dD\]\[0-9\]+\\\[\\\])), \\\[\[rR\]\[0-9\]+\\\]!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
