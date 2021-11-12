#include <stdio.h>

int main(void)
{
    int n = 1;

    if (n % 2 == 0) {  // fixed by removing the ;
        printf("n is even\n");
    }

    return 0;
}
