#include <stdio.h>

int main(void)
{
    int i, j;
    
    i = 1;
    j = 2;
    i += j;
    printf("(a) %d %d\n", i, j);

    i = 1;
    j = 2;
    i--;
    printf("(b) %d %d\n", i, j);

    i = 1;
    j = 2;
    i * j / i;
    printf("(c) %d %d\n", i, j);

    i = 1;
    j = 2;
    i % ++j;
    printf("(d) %d %d\n", i, j);

    return 0;
}
