#include <stdio.h>

void pb(int n) 
{
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}

/* pb(4) != 0
 * pb(4 / 2)
 *     2 != 0
 *     pb(2 / 2) 
 *         1 != 0
 *         pub(1 / 2)
 *             0 == 0; 
 *         putchar('0' + 1 % 2) => 1
 *     putchar('0' + 2 % 2) => 0
 * putchar('0' + 4 % 2) => 0
 */
 
int main(void)
{
    pb(4);
    printf("\n");
    return 0;
}

// The function pb converts an integer to binary
