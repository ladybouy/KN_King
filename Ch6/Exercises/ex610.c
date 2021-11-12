#include <stdio.h>

int main(void)
{
    int i;
    printf("Continue: ");
    for (i = 1; i < 10; ++i) {
        if (i == 2) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    printf("goto: ");
    for (i = 1; i < 10; ++i) {
        if (i == 2) {
            goto skipit;
        }
        printf("%d ", i);
        skipit:
    }

    return 0;
}
