#include <stdio.h>

main()
{
  printf("hello, worl\cd\n"); /* the inclusion of the unknown escape sequence \c causes the complier to print hello, worlcd instead of hello, world */
}
