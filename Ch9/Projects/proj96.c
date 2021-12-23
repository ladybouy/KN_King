#include <stdio.h>
#include <math.h>

double power(int x, int n)
{
    double result = 1;
    while (n-- > 0) {
        result = result * x;
    }

    return result;
}

double polynomial(int x)
{
    return 3 * power(x, 5) + 2 * power(x, 4) - 5 * power(x, 3) + power(x, 2) + 7 * x - 6;
}

int main(void)
{
    double x;
    double y;
    printf("Enter a value: ");
    scanf("%lf", &x);
    
    y = polynomial(x);

    printf("%f\n", y);

    return 0;
}
