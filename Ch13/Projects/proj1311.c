#include <stdio.h>

double compute_average_word_length(const char *sentence);

int main(void)
{
    char sentence[100];
    double average_length = 0.0;

    printf("Enter a sentence: ");
    gets(sentence);

    average_length = compute_average_word_length(sentence);
    printf("Average word length: %1.1f\n", average_length);

    return 0;
}

double compute_average_word_length(const char *sentence)
{
    double average_length = 0.0;
    int length = 0;
    int word_count = 0;

    while(*sentence++) {
        if (*sentence == ' ' || *sentence == '\0') {
            word_count++;
        } else {
            length++;
        }
    }

    average_length = (double)length / word_count;
    return average_length;
}
