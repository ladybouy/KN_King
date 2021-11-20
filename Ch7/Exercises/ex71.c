/* Give the decimal value of each of the following integer constants.
 *  (a) 077
 *  (b) 0x77
 *  (c) 0XABC
 */
#include <stdio.h>

int main(void)
{
    int a = 077;        // 7x8^1 + 7x8^0 = 63
    int b = 0x77;       // 7x16^1 + 7x16^0 = 119
    int c = 0XABC;      // 10x16^2 + 11x16^1 + 12x16^0 = 2748

    printf("a: %d\nb: %d\nc: %d\n", a, b, c);

    return 0;
}
