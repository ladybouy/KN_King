#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int occurance[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {
            occurance[digit]++;
        } else {
            digit_seen[digit] = true;
            occurance[digit] = 1;
        }
        n /= 10;
    }

    printf("Digit:       ");
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i);
    }
    printf("\n");

    printf("Occurances:  ");
    for (int i = 0; i < 10; i++) {
        printf("%2d ", occurance[i]);
    }
    printf("\n");
    
    return 0;
}
