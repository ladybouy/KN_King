#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "queue2.h"

struct node {
    Item data;
    struct node *next;
};

struct queue_type {
    int size;
    struct node *first_node;
    struct node *last_node;
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
        terminate("Error in create: Queue could be not created.");
    }
    rQueue->first_node = NULL;
    rQueue->last_node = NULL;
    return rQueue;
}

void insert_queue_item(Queue aQueue, Item aItem)
{
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = aItem;
    if (new_node == NULL) {
        terminate("Error in insert: queue is full");
    }

    if (is_queue_empty(aQueue)) {
        aQueue->first_node = new_node;
        aQueue->last_node = new_node;
    } else {
        aQueue->last_node->next = new_node;
        aQueue->last_node = new_node;
    }
    aQueue->size++;
}

void remove_queue_item(Queue aQueue, Item aItem)
{
    struct node *temp;
    temp->data = aItem;
    temp = aQueue->first_node;
    aQueue->first_node = aQueue->first_node->next;
    aQueue->size--;
    free(temp);
}

Item first_queue_item(const Queue aQueue)
{
    return aQueue->first_node->data;
}

Item last_queue_item(const Queue aQueue)
{
    return aQueue->last_node->data;
}

bool is_queue_empty(Queue aQueue)
{
    return aQueue->size == 0;
}
