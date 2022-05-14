#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void push(char operand);
char pop();
bool is_full();
bool is_empty();
void stack_overflow();
void stack_underflow();
void clear_stack();
