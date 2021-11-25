#include <stdio.h>

int main(void)
{
    long double double_value;
    long double factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%Lf", &double_value);
    for (int i = double_value; i > 1; i--) {
        if (i == double_value) {
            factorial = double_value;
        }
        factorial = factorial * (i - 1);
    }
    printf("(g) Factorial of %Lf with a long double variable: %Lf\n",double_value, factorial);

    return 0;
}

