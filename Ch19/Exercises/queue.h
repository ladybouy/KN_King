#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int Item;

typedef struct queue_type *Queue;

Queue create(int size);
void insert_queue_item(Queue aQueue, Item aItem);
void remove_queue_item(Queue aQueue, Item aItem);
Item first_queue_item(Queue aQueue);
Item last_queue_item(Queue aQueue);
bool is_queue_empty(Queue aQueue);
bool is_queue_full(Queue aQueue);

#endif
