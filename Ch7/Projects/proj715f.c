#include <stdio.h>

int main(void)
{
    double double_value;
    double factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%lf", &double_value);
    for (int i = double_value; i > 1; i--) {
        if (i == double_value) {
            factorial = double_value;
        }
        factorial = factorial * (i - 1);
    }
    printf("(f) Factorial of 6 with a double variable: %f\n", factorial);

    return 0;
}
    
