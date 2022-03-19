#include <stdio.h>
#include <stdbool.h>

#define TERMINATE ch == '!' || ch == '?' || ch == '.'
#define WORD_LENGTH 20
#define WORDS 30

int main(void) 
{
    char ch;
    char sentence[WORDS][WORD_LENGTH] = {0};
    char terminate_char;
    int row , col = 0;
    bool terminated = false;

    printf("Enter a sentence: ");
    while((ch = getchar()) != '\n' && row < WORDS) {
        if (TERMINATE) {
            terminate_char = ch;
            sentence[row][col] = '\0';
            break;
        } else if (ch == ' ') {
            sentence[row][col] = '\0';
            col = 0;
            row++;
        } else {
            sentence[row][col] = ch;
            col++;
        }
    }


    printf("Reversal of sentence: ");
    for (int row = WORDS - 1; row >= 0; row--) { 
        printf("%s ", sentence[row]);    
    }
    printf("%c\n", terminate_char);

    return 0;
}
