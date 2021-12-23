#include <stdio.h>

float income_tax(float income) {
    float taxable_income;

    if (income < 750) {
        taxable_income = 0.01 * income;
    } else if (income < 2250) {
        taxable_income = 7.50 + 0.02 * income;
    } else if (income < 3750) {
        taxable_income = 37.50 + 0.03 * income;
    } else if (income < 5250) {
        taxable_income = 82.50 + 0.04 * income;
    } else if (income < 7000) {
        taxable_income = 142.50 + 0.05 * income;
    } else {
        taxable_income = 230.00 + 0.06 * income;
    }

    return taxable_income;
}

int main(void)
{
    float income;
    float taxable_income;

    printf("Enter your income: ");
    scanf("%f", &income);

    taxable_income = income_tax(income);

    printf("Tax due: %.2f\n", taxable_income);

    return 0;
}
