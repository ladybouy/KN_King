#include <stdio.h>
#include "proj193.h"

int main(void)
{
    Stack s1, s2;
    int s1_length = 0;
    int s2_length = 0;
    int n;

    s1 = create();
    s2 = create();

    push(s1, 1);
    s1_length = length(s1);
    printf("Pushed in S1, current length: %d\n", s1_length);
    push(s1, 2);
    s1_length = length(s1);
    printf("Pushed in S1, current length: %d\n", s1_length);

    n = pop(s1);
    printf("Popped %d from s1\n", n);
    push(s2, n);
    printf("S2 current length: %d\n", s2_length);
    s2_length = length(s2);
    push(s2, n);
    s2_length = length(s2);
    printf("Popped %d from s1\n", n);
    printf("S2 current length: %d\n", s2_length);

    destroy(s1);

    while (!is_empty(s2))
        printf("Popped %d from s2\n", pop(s2));

    push(s2, 3);
    make_empty(s2);
    if (is_empty(s2))
        printf("s2 is empty\n");
    else
     printf("s2 is not empty\n");

    destroy(s2);

    return 0;
}
