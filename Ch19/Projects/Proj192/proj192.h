#ifndef PROJ192_H
#define PROJ192_H

#include <stdbool.h>

typedef char Item;

typedef struct stack_type *Stack;

Stack create(int size);
void destroy(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
void push(Stack s, Item i);
Item pop(Stack s);

#endif
