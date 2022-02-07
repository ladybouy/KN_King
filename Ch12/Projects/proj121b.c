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
    char *p;

    for (p = &message[n-1]; p >= &message[0]; p--) {
        printf("%c", *p);
    }
    printf("\n");
}
