#include <stdio.h>

int main(void)
{
    
    float loan;
    float interest;
    float monthly_payment;
    int payment_amount;
    float balance;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    printf("Enter amount of payments: ");
    scanf("%d", &payment_amount);

    balance = loan;
    for (int i = 1; i <= payment_amount; i++) {
        balance = balance - monthly_payment + 0.01f /12.0f * interest * balance; 
    }
    printf("Balance remaining: %.2f\n", balance);

    return 0;
}
