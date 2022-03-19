#include <stdio.h>
#include <ctype.h>

#define N 20

int compute_scrabble_value(const char *word);

int main(void)
{
    char word[N];
    int score = 0;

    printf("Enter a word: ");
    scanf("%s", word);
    score = compute_scrabble_value(word);
    printf("Scrabble value: %d\n", score);

    return 0;
}

int compute_scrabble_value(const char *word)
{
    char ch;
    int value = 0;
    int face_value = 0;

    while (*word) {
        ch = *word;
        ch = toupper(*word);
        switch(ch) {
            case 'A': case 'E': case 'I': case 'N': case 'O':
            case 'R': case 'S': case 'T': case 'U':
                face_value = 1;
                break;
            case 'D': case 'G':
                face_value = 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                face_value = 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                face_value = 4;
                break;
            case 'K':
                face_value = 5;
                break;
            case 'J': case 'X':
                face_value = 8;
                break;
            case 'Q': case 'Z':
                face_value = 10;
                break;
        }
        value += face_value;
        word++;
    }

    return value;
}
