/* Modified version of the length.c but doesn't count blank spaces */

#include <stdio.h>

int main(void)
{
    char ch;
    int len = 0;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n') {
        if (ch == ' ' ) {
            continue;
        }
        len++;
    }
    printf("Your message has %d characters(s).\n", len);

    return 0;
}
