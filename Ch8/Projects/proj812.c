#include <stdio.h>
#include <ctype.h>

#define SIZE 26

int main(void)
{
    char ch;
    char letters[26] = {1, 3, 2, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int face_value;
    int score = 0;
    printf("Enter a word: ");

    while ((ch = getchar()) != '\n') {
        score += letters[toupper(ch) - 65];
    }
   printf("Scrabble value: %d\n", score);

   return 0;
}
