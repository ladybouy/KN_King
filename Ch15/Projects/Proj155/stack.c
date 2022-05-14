#include "stack.h"

#define STACK_SIZE 100
char contents[STACK_SIZE];
int top = 0;

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
