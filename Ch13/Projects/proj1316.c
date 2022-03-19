#include <stdio.h>
#include <string.h>

#define LENGTH 100

void reverse(char *message);

int main(void)
{
    char ch;
    char message[LENGTH];
    int index = 0;

    printf("Enter a message: ");

    while((ch = getchar()) != '\n') {
        message[index] = ch;
        index++;
    }
    
    reverse(message);
    printf("Reversal is: %s\n", message);

    return 0;
}

void reverse(char *message)
{
    char *ptr1 = message;
    char *ptr2 = &message[strlen(message)-1];
    char temp;

    while (ptr1 < ptr2) {
        temp = *ptr1;
        *ptr1++ = *ptr2;
        *ptr2-- = temp;
    }
}
