#include <stdio.h>

int main(void)
{
    long long long_value;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%lld", &long_value);
    for (int i = long_value; i > 1; i--) {
        if (i == long_value) {
            factorial = long_value;
        }
        factorial = factorial * (i - 1);
    }
    printf("(d) Factorial of %lld with a long variable: %lld\n", long_value, factorial);

    return 0;
}
    
