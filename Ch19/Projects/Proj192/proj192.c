#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "proj192.h"

#define STACK_SIZE 100

struct node
{
    Item data;
    struct node *next;
};

struct stack_type {
    struct node *top;
};

int main(void) 
{
    char ch;
    Item temp1;
    Item temp2;
    Stack contents = create(STACK_SIZE);

    while (true) {
        printf("Enter an RPN expression: ");
        while ((ch = getchar()) != '\n') {
            switch (ch) {
                case '1': case '2': case '3': case '4': case '5':
                case '6': case '7': case '8': case '9':
                    push(contents, ch - '0');
                    break;
                case '+':
                    temp2 = pop(contents);
                    temp1 = pop(contents);
                    push(contents, temp1 + temp2);
                    break;               
                case '-':                      
                    temp2 = pop(contents);
                    temp1 = pop(contents);
                    push(contents, temp1 - temp2);
                    break;               
                case '*':                     
                    temp2 = pop(contents);
                    temp1 = pop(contents);
                    push(contents, temp1 * temp2);
                    break;               
                case '/':                    
                    temp2 = pop(contents);
                    temp1 = pop(contents);
                    push(contents, temp1 / temp2);
                    break;
                case '=':
                    printf("Value of expresson: %d\n", pop(contents));
                    make_empty(contents);
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

void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Stack create(int size)
{
    Stack s = malloc(sizeof(struct stack_type));
    if (s == NULL) {
        terminate("Error in create: stack could not be created.");
    }
    s->top = NULL;
    return s;
};

void destroy(Stack s)
{
    make_empty(s);
    free(s);
}

void make_empty(Stack s)
{
    while(!is_empty(s)) {
        pop(s);
    }
}

bool is_empty(Stack s)
{
    return s->top == NULL;
}

bool is_full(Stack s)
{
    return false;
}

void push(Stack s, Item i)
{
    struct node *new_node = malloc(sizeof(struct node));
    if (new_node == NULL) {
        terminate("Error in push: stack is full.");
    }
    new_node->data = i;
    new_node->next = s->top;
    s->top = new_node;
}

Item pop(Stack s)
{
    struct node *old_top;
    Item i;
    if (is_empty(s)) {
        terminate("Error in pop: stack is empty.");
    }
    old_top = s->top;
    i = old_top->data;
    s->top = old_top->next;
    free(old_top);
    return i;
}
