#include <stdio.h>
#include <string.h>

#define N 20

int main(void)
{
    char smallest_word[N];
    char largest_word[N];
    char word_input[N];

    printf("Enter word: ");
    scanf("%s", word_input);
    strcpy(largest_word, word_input);
    strcpy(smallest_word, word_input);

    while (strlen(word_input) != 4) {
        if (strcmp(word_input, smallest_word) < 0) {
            strcpy(smallest_word, word_input);
        }
        if (strcmp(word_input, largest_word) > 0) {
            strcpy(largest_word, word_input);
        }
        printf("Enter word: ");
        scanf("%s", word_input);
    }

    printf("Smaller word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);

    return 0;
}
