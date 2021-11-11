#include <stdio.h>

/*
  A break statement transfer control out of the innermost enclosing whle, 
  do, for, or switch statement
 */

int main(void)
{
    int n;

    for (;;) {
        printf("Enter a number (enter 0 to stop): ");
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        printf("%d cubed is %d\n", n, n * n * n);
    }
}
