#ifndef STACK_H
#define STACK_H
#include <stdio.h>

typedef int Item;
typedef struct stack_type *Stack;

Stack create(void);

void destroy(Stack s);

void make_empty(Stack s);

bool is_empty(Stack s);

bool is_full(Stack s);

void push(Stack s, Item i);

int pop(Stack s);

#endif
