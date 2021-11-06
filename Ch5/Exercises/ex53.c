#include <stdio.h>

int main(void)
{
    int i = 3;
    int j = 5;
    int k = 5;
    printf("(a):\n");
    printf("%d\n", i < j || ++j < k);
    printf("%d, %d, %d\n", i, j, k);

    i = 7;
    j = 8;
    k = 9;
    printf("(b):\n");
    printf("%d\n", i - 7 && j++ < k);
    printf("%d, %d, %d\n", i, j, k);

    i = 7;
    j = 8;
    k = 9;
    printf("(c):\n");
    printf("%d\n", (i = j) || (j = k));
    printf("%d, %d, %d\n", i, j, k);

    i = 1;
    j = 1;
    k = 1;
    printf("(d):\n");
    printf("%d\n", ++i || ++j && ++k);
    printf("%d, %d, %d\n", i, j, k);
}
