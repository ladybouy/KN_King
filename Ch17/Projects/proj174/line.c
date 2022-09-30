#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "line.h"

#define MAX_LINE_LEN 60

int line_len = 0;
int num_words = 0;

struct line *line_ptr = NULL;

void clear_line(void)
{
    struct line *cur;
    struct line *prev;

    for (cur = line_ptr, prev = NULL; cur != NULL;
         prev = cur, cur = cur->next)
    {
        free(cur);
    }

    line_len = 0;
    num_words = 0;
}

void add_word(const char *word)
{
    int word_len = strlen(word);
    struct line *new_word = malloc(sizeof(struct line) + word_len);
    struct line *space = malloc(sizeof(struct line) + sizeof(" "));

    if (new_word == NULL || space == NULL) {
        printf("Error: malloc failed in add_word\n");
        exit(EXIT_FAILURE);
    }

    strcat(new_word->word, word);
    if (num_words > 0) {
        strcat(space->word, " "); 
        line_ptr->next = space;
        space->next = new_word;
        line_len++;
    } else {
        line_ptr = new_word;
    }
    line_len += strlen(word);
    num_words++;
}

int space_remaining(void)
{
    return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
    int extra_spaces, spaces_to_insert, j;
    struct line *iter;

    extra_spaces = MAX_LINE_LEN - line_len;
    for (iter = line_ptr; iter != NULL; iter = iter->next) {
        if (abs(strcmp(iter->word, " "))) {
            printf("%s", iter->word);
        } else {
            spaces_to_insert = extra_spaces / (num_words - 1);
            for (j = 1; j <= spaces_to_insert + 1; j++) {
                putchar(' ');
            }
            extra_spaces -= spaces_to_insert;
            num_words++;
        }
    } 
    putchar('\n');
}

void flush_line(void)
{
    struct line *iter;
    if (line_len > 0) {
        for (iter = line_ptr; iter != NULL; iter = iter->next) {
            printf("%s", line_ptr->word);
        }
    }
}
