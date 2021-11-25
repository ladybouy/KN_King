#include <stdio.h>

int main(void)
{
    float operand = 0.0f;
    float expression = 0.0f;
    char operator;

    printf("Enter an expression: ");
    scanf("%1f", &expression);

    while ((operator = getchar()) != '\n') {
        switch(operator) {
            case '+':
                scanf("%1f", &operand);
                expression += operand;
                break;
            case '-':
                scanf("%1f", &operand);
                expression -= operand;
                break;
            case '*':
                scanf("%1f", &operand);
                expression *= operand;
                break;
            case '/':
                scanf("%1f", &operand);
                expression /= operand;
                break;
            default:
                break;
        }
    }
    printf("Value of expression: %1f\n", expression);

    return 0;
}
