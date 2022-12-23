#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queueADT.h"


struct queue_type {
    Item contents[STACK_SIZE];
    int first_empty_position;
    int next_item_remove;
    int queue_size;
    int size;
};

static void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Queue create(int size)
{
    Queue rQueue = malloc(sizeof(struct queue_type));
    if (rQueue == NULL) {
        terminate("Error in create: queue could not be created");
    }

    rQueue->first_empty_position = 0;
    rQueue->next_item_remove = 0;
    rQueue->queue_size = 0;
    rQueue->size = size;
    return rQueue;
}

void destroy(Queue aQueue)
{
    make_empty(aQueue);
    free(aQueue);
}

void make_empty(Queue aQueue)
{
    while (!is_queue_empty(aQueue))
        remove_queue_item(aQueue);
}

void insert_queue_item(Queue aQueue, Item aItem)
{
    aQueue->contents[aQueue->first_empty_position] = aItem;
    aQueue->first_empty_position += 1;
    aQueue->queue_size += 1;

    if (aQueue->first_empty_position == (aQueue->size)) {
        aQueue->first_empty_position = 0;
    }
}

Item remove_queue_item(Queue aQueue)
{
    Item removed_item;
    removed_item = aQueue->contents[aQueue->next_item_remove];
    aQueue->queue_size -= 1;

    if (aQueue->next_item_remove == aQueue->size) {
        aQueue->next_item_remove = 0;
        return removed_item;
    } else {
        aQueue->next_item_remove += 1;
        return removed_item;
    }
}

Item first_queue_item(Queue aQueue)
{
    return aQueue->contents[0];
}

Item last_queue_item(Queue aQueue)
{
    return aQueue->contents[aQueue->size-1];
}

bool is_queue_empty(Queue aQueue)
{
    return aQueue->queue_size == 0;
}
