#include <stdio.h>
#define TAX 0.05

int main(void)
{
    float amount;
    printf("Enter an amount: ");
    scanf("%f", &amount);
    printf("With tax added: %0.2f\n", amount + TAX * amount);
}
