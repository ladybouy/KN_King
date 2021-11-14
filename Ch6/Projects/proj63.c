#include <stdio.h>

int main(void)
{
    int numerator;
    int denominator;
    int low_num;
    int low_dem;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    int m = numerator;  // the GCD will be stored in m
    int n = denominator;

    while (n != 0) {
        int remainder = m % n;   
        m = n;
        n = remainder;
    }

    low_num = numerator / m;
    low_dem = denominator / m;

    printf("In lowest terms: %d/%d\n", low_num, low_dem);

    return 0;
}
