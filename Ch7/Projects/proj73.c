#include <stdio.h>

int main(void)
{
    double n, sum = 0;

    printf("The program sums a series of doubles. \n");
    printf("Enter integrs (0 to terminate): ");
    
    scanf("%lf", &n);
    while (n != 0) {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is: %f\n", sum);

    return 0;
}
