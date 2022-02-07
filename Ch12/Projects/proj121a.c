#include <stdio.h>

#define LENGTH 100

void reverse_string(char message[], int n);

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
    
    printf("Reversal is: ");
    reverse_string(message, index);

    return 0;
}

void reverse_string(char message[], int n)
{
    for (int i = n - 1; i >= 0; i--) {
        printf("%c", message[i]);
    }
    printf("\n");
}
