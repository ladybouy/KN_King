#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queueADT.h"

struct node {
    Item data;
    struct node *next;
};

struct queue_type {
    int size;
    struct node *top;
    struct node *last;
};

static void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Queue create(void)
{
    Queue rQueue = malloc(sizeof(struct queue_type));
    if (rQueue == NULL) {
        terminate("Error in create: queue could not be created");
    }
    rQueue->top = NULL;
    rQueue->last = NULL;
    rQueue->size = 0;

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
    struct node *new_node = malloc(sizeof(struct node));
    if (new_node == NULL) {
        terminate("Error in insert: queue is full");
    }

    new_node->data = aItem;
    
    if (is_queue_empty(aQueue)) {
        aQueue->top = new_node;    
        aQueue->last = new_node;    
    } else {
        aQueue->last->next = new_node;
        aQueue->last = new_node;
    }    
    aQueue->size++;
}

Item remove_queue_item(Queue aQueue)
{
    if (!is_queue_empty(aQueue)) {
        struct node *temp_node;
        Item removed_item;

        temp_node = aQueue->top;
        removed_item = temp_node->data;

        aQueue->top = aQueue->top->next;
        free(temp_node);
        aQueue->size--;

        return removed_item;
    }
}

Item first_queue_item(Queue aQueue)
{
    return aQueue->top->data;
}

Item last_queue_item(Queue aQueue)
{
    return aQueue->last->data;
}

bool is_queue_empty(Queue aQueue)
{
    return aQueue->size == 0;
}
