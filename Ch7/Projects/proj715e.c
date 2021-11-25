#include <stdio.h>

int main(void)
{
    float float_value;
    float factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%f", &float_value);
    for (int i = float_value; i > 1; i--) {
        if (i == float_value) {
            factorial = float_value;
        }
        factorial = factorial * (i - 1);
    }
    printf("(e) Factorial of 6 with a float variable: %f\n", factorial);

    return 0;
}
    
