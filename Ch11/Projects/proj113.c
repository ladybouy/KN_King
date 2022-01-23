#include <stdio.h>

void reduce(int numberator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator);

int main(void)
{
    int numerator;
    int denominator;
    int low_num;
    int low_dem;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, &low_num, &low_dem);

    printf("In lowest terms: %d/%d\n", low_num, low_dem);

    return 0;
}

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator)
{
    int m = numerator;  // the GCD will be stored in m
    int n = denominator;

    while (n != 0) {
        int remainder = m % n;   
        m = n;
        n = remainder;
    }
    *reduced_numerator = numerator / m;
    *reduced_denominator = denominator / m;
}
