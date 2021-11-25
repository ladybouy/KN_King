#include <stdio.h>

int main(void)
{
    long long_value;
    long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%ld", &long_value);
    for (int i = long_value; i > 1; i--) {
        if (i == long_value) {
            factorial = long_value;
        }
        factorial = factorial * (i - 1);
    }
    printf("(c) Factorial of 6 with a long variable: %ld\n", factorial);

    return 0;
}
    
