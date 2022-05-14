#include "stack.h"

int main(void) 
{
    char ch;
    int temp1;
    int temp2;

    while (true) {
        printf("Enter an RPN expression: ");
        while ((ch = getchar()) != '\n') {
            switch (ch) {
                case '1': case '2': case '3': case '4': case '5':
                case '6': case '7': case '8': case '9':
                    push(ch - '0');
                    break;
                case '+':
                    temp2 = pop();
                    temp1 = pop();
                    push(temp1 + temp2);
                    break;               
                case '-':                      
                    temp2 = pop();
                    temp1 = pop();
                    push(temp1 - temp2);
                    break;               
                case '*':                     
                    temp2 = pop();
                    temp1 = pop();
                    push(temp1 * temp2);
                    break;               
                case '/':                    
                    temp2 = pop();
                    temp1 = pop();
                    push(temp1 / temp2);
                    break;
                case '=':
                    printf("Value of expresson: %d\n", pop());
                    clear_stack();
                    break;
                case ' ':
                    break;
                default:
                    exit(EXIT_FAILURE);
                    break;
            }
       }
    }
    return 0;
}
