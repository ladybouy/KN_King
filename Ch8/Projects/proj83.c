/* Checks numbers for repeated digits */

#include <stdbool.h>    /* C99 only */
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    long n;
    long m;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)  {
        m = n;
        while (m > 0) {
            digit = m % 10;
            if (digit_seen[digit]) {
                break;
            }
            digit_seen[digit] = true;
            m /= 10;
        }
        
        if (m > 0) {
            printf("Repeated digit\n");
        } else {
            printf("No repeated digit\n");
        }
        printf("Enter a number: ");
        scanf("%ld", &n);
    }
    
    return 0;
}
