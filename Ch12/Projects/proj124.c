#include <ctype.h>
#include <stdio.h>

#define SIZE 100

void palindrome(char message[], int size);

int main(void)
{
    char message[SIZE];
    char ch;
    int index = 0;

    printf("Enter a message: ");
    while((ch = getchar()) != '\n') {
        if (!isalpha(ch)) {
            continue;
        } else {
            message[index] = tolower(ch);
            index++;
        }
    }

    palindrome(message, index);

    return 0;
}

void palindrome(char message[], int size)
{
    char *p;
    char *p2;

    for (p = message, p2 = message + size - 1; p < message + size, p2 >= message; p++, p2-- ) {
        if (*p != *p2) {
            printf("Not a palindrome\n");
            return;
        }
    }
    printf("Palindrome\n");
}
