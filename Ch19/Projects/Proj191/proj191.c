#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "proj191.h"

struct stack_type {
    Item *contents;
    int top;
    int size;
};


static void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Stack create(int size)
{
    Stack s = malloc(sizeof(struct stack_type));
    s->contents = malloc(size * sizeof(Item));
    s->size = size;
    s->top = 0;

    if (s == NULL)
    {
        terminate("Error in create: Stack cannot not be created");
    }

    return s;
}


void make_empty(Stack s)
{
    s->top = 0;
}


bool is_empty(Stack s)
{
    return s->top == 0;
}


bool is_full(Stack s)
{
    return s->top == s->size;
}


void push(Stack s, Item c)
{
    if (is_full(s))
        terminate("Error in push: stack is full.");
    else
        s->contents[s->top++] = c;
}


Item pop(Stack s)
{
    if (is_empty(s))
        terminate("Error in push: stack is empty");
    else 
        return s->contents[--s->top];
}


int main(void)
{
    Item mark;
    Stack charStack = create(10);
    printf("Enter parenthesis and/or braces: ");

    while ((mark = getchar()) != '\n') {
        if (mark == '(' || mark == '{') {
            push(charStack, mark);
        } else if (mark == '}' && pop(charStack) != '{') {
            printf("The Parenthesis/braces aren't nested properly\n");
            return 0;
        } else if (mark == ')' && pop(charStack) != '(') {
            printf("The Parenthesis/braces aren't nested properly\n");
            return 0;
        } else {
            printf("The Parenthesis/braces aren't nested properly\n");
            return 0;
        }
    }

    if (is_empty(charStack)) {
        printf("Stack is empty");
        return 0;
    }
    
    return 0;
}
