#include <stdio.h>
#include <math.h>

int main(void) 
{
    double x = 0;
    double y = 1;
    double y2 = 1;
    double square_root;

    printf("Enter a positive number ");
    scanf("%lf", &x);
    while (fabs(y - (x / y)) > 0.0001) {
        y = (y + x / y) / 2;
    } 
    printf("Square root: %f\n", x / y);

    return 0;
}
