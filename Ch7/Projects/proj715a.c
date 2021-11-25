#include <stdio.h>

int main(void)
{
    short short_value;
    short factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%hd", &short_value);
    for (int i = short_value; i > 1; i--) {
        if (i == short_value) {
            factorial = short_value;
        }
        factorial = factorial * (i - 1);
    }
    printf("(a) Factorial of 6 with a short variable: %hd\n", factorial);

    return 0;
}
    
