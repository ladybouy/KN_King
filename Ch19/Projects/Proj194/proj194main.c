#include <stdio.h>
#include "proj194.h"

int main(void)
{
    Stack s1, s2;
    int s1_length = 0;
    int s2_length = 0;
    char *n;
    char *word1 = "Hi";
    char *word2 = "Hello";
    char *word3=  "Bye";

    s1 = create();
    s2 = create();

    push(s1, word1);
    s1_length = length(s1);
    printf("Pushed in S1, current length: %d\n", s1_length);
    push(s1, word2);
    s1_length = length(s1);
    printf("Pushed in S1, current length: %d\n", s1_length);

    n = pop(s1);
    printf("Popped %s from s1\n", n);
    push(s2, word1);
    printf("S2 current length: %d\n", s2_length);
    s2_length = length(s2);
    push(s2, n);
    s2_length = length(s2);
    n = pop(s1);
    printf("Popped %s from s1\n", n);
    printf("S2 current length: %d\n", s2_length);

    destroy(s1);

    while (!is_empty(s2)) {
        printf("Popped %s from s2\n", (char *)pop(s2));
    }

    push(s2, word3);
    make_empty(s2);
    if (is_empty(s2))
        printf("s2 is empty\n");
    else
     printf("s2 is not empty\n");

    destroy(s2);

    return 0;
}
