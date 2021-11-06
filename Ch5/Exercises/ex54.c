#include <stdio.h>

int main(void)
{
    int i = 1;
    int j = 2;
    int k = i - j;
    printf("%d\n", k); 

    i = 2;
    j = 2;
    k = i - j;
    printf("%d\n",  k);

    i = 3;
    j = 2;
    k = i - j;
    printf("%d\n",  k);

    return 0;
}
