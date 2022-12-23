#include <stdio.h>
#include "queueADT.h"

int main(void)
{
    Queue s1, s2;
    Item n;

    s1 = create();
    s2 = create();

    insert_queue_item(s1, 1);
    insert_queue_item(s1, 2);

    n = remove_queue_item(s1);
    printf("Popped %d from s1\n", n);
    insert_queue_item(s2, n);

    n = remove_queue_item(s1);
    printf("Popped %d from s1\n", n);
    insert_queue_item(s2, n);

    destroy(s1);

    while (!is_queue_empty(s2)) {
        printf("Popped %d from s2\n", remove_queue_item(s2));
    }

    insert_queue_item(s2, 3);
    make_empty(s2);

    if (is_queue_empty(s2)) {
        printf("s2 is empty\n");
    } else {
        printf("s2 is not empty\n");
    }

    destroy(s2);

    return 0;
}
