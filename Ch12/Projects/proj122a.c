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
    for (int i = 0, j = size - 1; i < size, j >= 0; i++, j--) {
        if (message[i] != message[j]) {
            printf("Not a palindrome\n");
            return;
        }
    }
    printf("Palindrome\n");
}
