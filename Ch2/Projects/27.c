#include <stdio.h>

int main(void)
{
    int dollar;
    int twenty_amount;
    int ten_amount;
    int five_amount;
    int one_amount;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollar);

    twenty_amount = dollar / 20;
    ten_amount = (dollar - 20 * twenty_amount) / 10;
    five_amount = (dollar - 20 * twenty_amount - 10 * ten_amount) / 5;
    one_amount = (dollar - 20 * twenty_amount - 10 * ten_amount - 5 * five_amount);

    printf("$20 bills: %d\n", twenty_amount); 
    printf("$10 bills: %d\n", ten_amount); 
    printf(" $5 bills: %d\n", five_amount);
    printf(" $1 bills: %d\n", one_amount); 
}
