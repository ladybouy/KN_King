#include <stdio.h>

int main(void)
{
    long n, sum = 0;

    printf("The program sums a series of intergers. \n");
    printf("Enter integrs (0 to terminate): ");
    
    scanf("%ld", &n);
    while (n != 0) {
        sum += n;
        scanf("%ld", &n);
    }
    printf("The sum is: %ld\n", sum);

    return 0;
}
