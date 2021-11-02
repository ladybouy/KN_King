#include <stdio.h>

int main(void)
{
    int i = 1;
    int j;

    j = (i += 1);
    printf("%d %d\n", i, j);

    i = 1;
    j = (++i);
    printf("%d %d\n", i, j);

    i = 1;
    j = (i++);
    printf("%d %d\n", i, j);

    return 0;
}
