#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    char operator;

    printf("Enter first fractions: ");
    scanf("%d / %d", &num1, &denom1);
    printf("Enter second fractions: ");
    scanf("%d / %d", &num2, &denom2);
    getchar();
      
    printf("Enter operator: ");
    while ((operator = getchar()) != '\n') {
        switch (operator) {
            case '+':
                result_num = num1 * denom2 + num2 * denom1;
                result_denom = denom1 * denom2;
                printf("The sum is %d/%d\n", result_num, result_denom);
                break;
            case '-': 
                result_num = num1 * denom2 - num2 * denom1;
                result_denom = denom1 * denom2;
                printf("The difference is %d/%d\n", result_num, result_denom);
                break;
            case '*': case 'x': case 'X':
                result_num = num1 * num2;
                result_denom = denom1 * denom2;
                printf("The product is %d/%d\n", result_num, result_denom);
                break;
            case '/':
                result_num = num1 * denom2;
                result_denom = denom1 * num2;
                printf("The quotient is %d/%d\n", result_num, result_denom);
                break;
            default:
                printf("Operator not recognized\n");
                break;
        }
    }

    return 0;
}
