#include <stdio.h>

int main(void)
{
    int n = 0;
    int i =0;
    int sum = 0;
    while (n < 10) {
        scanf("%d", &i);
        if (i == 0)
            continue;
        sum += i;
        n++;
        /* continue jumps to here */
    }
    printf("Sum: %di\n", sum);
}
