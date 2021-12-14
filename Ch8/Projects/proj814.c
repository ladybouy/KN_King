#include <stdio.h>

#define SIZE 100
#define TERMINATE ch == '!' || ch == '?' || ch == '.'

int main(void) 
{
    char ch;
    char sentence[SIZE] = {0};
    char terminate_char;

    printf("Enter a sentence: ");
    for(int i = 0; (ch = getchar()) != '\n'; i++) {
        if (TERMINATE) {
            terminate_char = ch;
            break;
        }
        sentence[i] = ch;
    }

    printf("Reversal of sentence: ");
    for (int i = SIZE - 1 ; i >= 0; i--) {
        if (sentence[i] != 0 && sentence[i] == ' ') {
            for(int j = i + 1; sentence[j] != 0 && sentence[j] != ' '; j++) {
                printf("%c", sentence[j]);
            }
            printf(" ");
        } 
        if (i == 0) {
            for (int j = i; sentence[j] != 0 && sentence[j] != ' '; j++)
                printf("%c", sentence[j]);
        }
    }
    
    printf("%c\n", terminate_char);
    return 0;
}
