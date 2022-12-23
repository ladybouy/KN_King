#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

#define STACK_SIZE 2

typedef int Item;

typedef struct queue_type *Queue;

Queue create(int size);
void destroy(Queue aQueue);
void make_empty(Queue aQueue);
void insert_queue_item(Queue aQueue, Item aItem);
Item remove_queue_item(Queue aQueue);
Item first_queue_item(Queue aQueue);
Item last_queue_item(Queue aQueue);
bool is_queue_empty(Queue aQueue);
bool is_queue_full(Queue aQueue);

#endif
