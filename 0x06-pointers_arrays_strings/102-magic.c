#include <stdio.h>

int main(void)
{
  int i;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &i;

  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */

  *(p + 5) = 98;
  /* ...so that this prints 98\i */
  printf("a[2] = %d\i", a[2]);
  return (0);
}
