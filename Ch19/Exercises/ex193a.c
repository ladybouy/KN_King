#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

struct queue_type {
    Item *contents;
    int first_empty_position;
    int next_item_remove;
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

    rQueue->contents = malloc(size * sizeof(Item));
    if (rQueue->contents == NULL) {
        free(rQueue);
        terminate("Error in create: queue could not be created");
    }

    rQueue->first_empty_position = 0;
    rQueue->next_item_remove = 0;
    rQueue->size = size;
    return rQueue;
}

void insert_queue_item(Queue aQueue, Item aItem)
{
    if (aQueue->first_empty_position == (aQueue->size - 1)) {
        aQueue->first_empty_position = 0;
    }
    aQueue->contents[aQueue->first_empty_position] = aItem;
    aQueue->first_empty_position += 1;
}

void remove_queue_item(Queue aQueue, Item aItem)
{
    aQueue->contents[aQueue->next_item_remove] = 0;

    if (aQueue->next_item_remove == 0 ) {
        aQueue->next_item_remove += 1;
    } else {
        aQueue->next_item_remove = 0;
    }
}

Item first_queue_item(Queue aQueue)
{
    return aQueue->contents[aQueue->first_empty_position - 1];
}

Item last_queue_item(Queue aQueue)
{
    return aQueue->contents[aQueue->next_item_remove];
}

bool is_queue_empty(Queue aQueue)
{
    return aQueue->first_empty_position == 0;
}
