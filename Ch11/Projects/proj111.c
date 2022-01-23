#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens,
                int *fives, int *ones);

int main(void)
{
    int dollar;
    int twenty_amount;
    int ten_amount;
    int five_amount;
    int one_amount;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollar);

    pay_amount(dollar, &twenty_amount, &ten_amount, &five_amount, &one_amount);

    printf("$20 bills: %d\n", twenty_amount); 
    printf("$10 bills: %d\n", ten_amount); 
    printf(" $5 bills: %d\n", five_amount);
    printf(" $1 bills: %d\n", one_amount); 
}

void pay_amount(int dollars, int *twenties, int *tens,
                int *fives, int *ones)
{
    *twenties= dollars / 20;
    *tens = (dollars - 20 * *twenties) / 10;
    *fives = (dollars - 20 * *twenties - 10 * *tens) / 5;
    *ones = dollars - 20 * *twenties - 10 * *tens - 5 * *fives;
}
