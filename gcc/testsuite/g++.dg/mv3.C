/* Test case to check if a call to a multiversioned function
   is replaced with a direct call to the particular version when
   the most specialized version's target attributes match the
   caller.  
  
   In this program, foo is multiversioned but there is no default
   function.  This is an error if the call has to go through a
   dispatcher.  However, the call to foo in bar can be replaced
   with a direct call to the popcnt version of foo.  Hence, this
   test should pass.  */

/* { dg-do run { target i?86-*-* x86_64-*-* } } */
/* { dg-options "-O2 -mno-sse -mno-popcnt" } */


int __attribute__ ((target ("sse")))
foo ()
{
  return 1;
}
int __attribute__ ((target ("popcnt")))
foo ()
{
  return 0;
}

int __attribute__ ((target ("popcnt")))
bar ()
{
  return foo ();
}

int main ()
{
  return bar ();
}
