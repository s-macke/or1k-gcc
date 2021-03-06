/* Test the `vreinterpretp8_f32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vreinterpretp8_f32 (void)
{
  poly8x8_t out_poly8x8_t;
  float32x2_t arg0_float32x2_t;

  out_poly8x8_t = vreinterpret_p8_f32 (arg0_float32x2_t);
}

/* { dg-final { cleanup-saved-temps } } */
