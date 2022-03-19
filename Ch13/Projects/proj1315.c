#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STACK_SIZE 100
#define EXPRESSION_SIZE 100

char contents[STACK_SIZE];
int top = 0;

int evaluate_RPN_expression(const char *expression);
void push(char operand);
char pop();
bool is_full();
bool is_empty();
void stack_overflow();
void stack_underflow();
void clear_stack();

int main(void) 
{
    char ch;
    char expression[EXPRESSION_SIZE];
    int answer;

    printf("Enter an RPN expression: ");
    gets(expression);
    answer = evaluate_RPN_expression(expression); 

    return 0;
}

void push(char operand)
{
    if (is_full()) {
        stack_overflow();
    } else {
        contents[top++] = operand;
    }
}

char pop()
{
    if (is_empty()) {
        stack_underflow();
    } else {
        return contents[--top];
    }
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void stack_overflow(void)
{
    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("Not enough operands in expression\n");
    exit(EXIT_FAILURE);
}

void clear_stack(void)
{
    top = 0;
}

int evaluate_RPN_expression(const char *expression)
{
    int temp1;
    int temp2;
        while (*expression) {
            switch (*expression) {
                case '1': case '2': case '3': case '4': case '5':
                case '6': case '7': case '8': case '9':
                    push(*expression - '0');
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
            expression++;
       }
}
