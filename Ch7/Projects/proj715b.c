#include <stdio.h>

int main(void)
{
    int int_value;
    int factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &int_value);
    for (int i = int_value; i > 1; i--) {
        if (i == int_value) {
            factorial = int_value;
        }
        factorial = factorial * (i - 1);
    }
    printf("(b) Factorial of %d with a int variable: %d\n", int_value, factorial);

    return 0;
}
    
