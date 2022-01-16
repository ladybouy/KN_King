#include <stdbool.h>    /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE] = {0};
int top = 0;

void stack_overflow(void)
{
    printf("STACK OVERFLOW!");
    exit(EXIT_FAILURE); 
}

void stack_underflow(void)
{
    printf("STACK UNDERFLOW!");
    exit(EXIT_FAILURE);
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char c)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = c;
}

char pop(void)
{
    if (is_empty())
        stack_underflow();
    else 
        return contents[--top];
}

int main(void)
{
    char mark;
    printf("Enter parenthesis and/or braces: ");

    while ((mark = getchar()) != '\n') {
        if (mark == '(' || mark == '{') {
            push(mark);
        } else if (mark == ')' && pop() != '(') {
            printf("The Parenthesis/braces aren't nested properly\n");
            return 0;
        } else if (mark == '}' && pop() != '{') {
            printf("The Parenthesis/braces aren't nested properly\n");
            return 0;
        }
    }

    if (!is_empty()) {
        printf("The Parenthesis/braces aren't nested properly\n");
    }

    printf("The Parenthesis/braces are nested properly\n");
    
    return 0;
}
