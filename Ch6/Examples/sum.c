/* Sums a series of numbers */

#include <stdio.h>

int main(void)
{
    int n, sum = 0;
    
    printf("This program sums a series of intergers.\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%d", &n);
    while (n != 0) {
        sum += n;
        scanf("%d", &n);
    }
    printf("This sum is: %d\n", sum);

    return 0;
}
