#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int Item;

typedef struct queue_type *Queue;

Queue create(void);
void insert_queue_item(Queue aQueue, Item aItem);
void remove_queue_item(Queue aQueue, Item aItem);
Item first_queue_item(const Queue aQueue);
Item last_queue_item(const Queue aQueue);
bool is_queue_empty(Queue aQueue);

#endif
