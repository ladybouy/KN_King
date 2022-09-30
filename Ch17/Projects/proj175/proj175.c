#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LENGTH 20

int read_line(char str[], int n);

char *AllocateString(char *aWord);
void *ReallocateArray(char **aArray, size_t bytes);
void *ArrayMalloc(size_t bytes);
int compare_words(const void *word1, const void *word2);

int main(int argc, char *argv[])
{
    int i = 0;
    char **word_array = NULL;
    int array_size = 0;
    char word[MAX_WORD_LENGTH+1];

    for (i = 0; ; i++) {
        printf("Enter word: ");
        read_line(word, MAX_WORD_LENGTH);
        if (!strcmp(word,"")) {
            break;
        }
        int new_size = array_size + 1;
        word_array = ReallocateArray(word_array, new_size * sizeof(char*));
        word_array[i] = AllocateString(word);
        strcpy(word_array[i],word);
        array_size = new_size;
    }

    qsort(word_array, array_size, sizeof(char*), compare_words);

    printf("Array size: %d\n", array_size);
    printf("In sorted order: ");
    for (int i = 0; i < array_size; i++) {
        printf("%s ", word_array[i]);
    }
    printf("\n");
    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n) {
            str[i++] = ch;
        }
    str[i] = '\0';
    return i;
}

void *ReallocateArray(char **aArray, size_t bytes)
{
    char **temp;
    temp = realloc(aArray, bytes);
    if (temp == NULL) {
        printf("Memory cannot be reallocated in ReallocatedArray\n");
        exit(EXIT_FAILURE);
    }
    aArray = temp;
    return aArray;
}

void *ArrayMalloc(size_t bytes)
{
    void *p;
    if ((p = malloc(bytes)) == NULL) {
        printf("Error: malloc failed in ArrayMalloc\n");
        exit(EXIT_FAILURE);
    }
    return p;
}
char *AllocateString(char *aWord)
{
    char *p;
    p = malloc(strlen(aWord) * sizeof(char));
    if (p == NULL) {
        printf("Memory cannot be reallocated in AllocateString\n");
        exit(EXIT_FAILURE);
    }
    return p;
}

int compare_words(const void *word1, const void *word2)
{
    return strcmp(*(const char**) word1, *(const char**) word2);
}
