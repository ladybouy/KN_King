#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define SIZE 100

bool is_palindrome(char *message);

int main(void)
{
    char message[SIZE];
    char ch;
    int index = 0;
    bool palindrome = false;

    printf("Enter a message: ");
    while((ch = getchar()) != '\n') {
        if (!isalpha(ch)) {
            continue;
        } else {
            message[index] = tolower(ch);
            index++;
        }
    }

    palindrome = is_palindrome(message);

    if (palindrome) {
        printf("%s is a palindrome\n", message);
    } else {
        printf("%s is not a palindrome\n", message);
    }


    return 0;
}

bool is_palindrome(char *message)
{
    char *ptr = &message[strlen(message)-1];

    while (*message) {
        if (*message++ != *ptr--) {
            return false;
        }
    }
    return true;
}
