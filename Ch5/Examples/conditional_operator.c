/*
  Conditional expressions tend to make programs shroter but harder to understand
   so it's probably best to avoid them
*/

#include <stdio.h>

int main(void)
{

    int i, j, k;
    
    i = 1;
    j = 2;
    k = i > j ? i : j;          /* k is now 2 */
    k = (i >= 0 ? i : 0) + j;   /* k is now 3 */

    return 0;
}
