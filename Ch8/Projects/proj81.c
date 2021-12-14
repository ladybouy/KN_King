#include <stdbool.h>    /* C99 only */
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    bool repeat[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {
            repeat[digit] = true;
        }
        digit_seen[digit] = true;
        n /= 10;
    }

    printf("Repeated digits: " );
    for (int i = 0; i < 10; i++) {
        if (repeat[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}
