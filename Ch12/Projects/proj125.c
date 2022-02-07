#include <stdio.h>

#define SIZE 100
#define TERMINATE ch == '!' || ch == '?' || ch == '.'

int main(void) 
{
    char ch;
    char sentence[SIZE] = {0};
    char terminate_char;
    char *p;
    char *p2;
    int index;

    printf("Enter a sentence: ");

    for (p = sentence; (ch = getchar()) != '\n'; p++) {
        if (TERMINATE) {
            terminate_char = ch;
            break;
        }
        *p = ch;
    }

//    index = find_index(sentence);

    printf("Reversal of sentence: ");
    for (p = sentence + SIZE - 1; p >= sentence; p--) {
        if (*p != 0 && *p == ' ') {
            for (p2 = p + 1; *p2 != 0 &&  *p2 != ' '; p2++) {
                printf("%c", *p2);
            }
            printf(" ");
        }
        if (p == sentence) {
            for (p2 = p; *p2 != 0 && *p2 != ' '; p2++) {
                printf("%c", *p2);
            }
        }
    }

    printf("%c\n", terminate_char);
    return 0;
}
