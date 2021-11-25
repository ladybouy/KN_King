#include <stdio.h>

int main(void)
{
    int length = 0;
    int word_count = 0;
    double average_length = 0.0;
    char ch;

    printf("Enter a sentence: ");
    scanf(" %c", &ch);
    while ((ch = getchar()) != '\n') {
        if (ch == ' ') {
            word_count++;
        } else {
            length++;
        }
    }
    word_count++;
    average_length = (double)length / word_count;
    printf("Average word length: %1.1f\n", average_length);

    return 0;
}
