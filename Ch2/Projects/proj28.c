#include <stdio.h>

int main(void)
{
    float loan;
    float interest;
    float monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    
    float first_payment = loan - monthly_payment + 0.01f / 12.0f * interest * loan;
    float second_payment = first_payment - monthly_payment + 0.01f/ 12.0f * interest * first_payment;
    float third_payment = second_payment - monthly_payment + 0.01f/ 12.0f * interest * second_payment;
    printf("Balance remaining after first payment; %.2f\n", first_payment);
    printf("Balance remaining after second payment; %.2f\n", second_payment);
    printf("Balance remaining after third payment; %.2f\n", third_payment);
}
