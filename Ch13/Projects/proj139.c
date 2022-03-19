#include <stdio.h>
#include <ctype.h>

int compute_vowel_count(const char* sentence);

int main(void)
{
    char sentence[100];
    char ch, *ptr = sentence;
    int i = 0;
    int vowel_count = 0; 

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n' && ptr < sentence + 100) {
        *ptr++ = ch;
    }
    *ptr = '\0';

    vowel_count = compute_vowel_count(sentence);
    printf("Your sentence contains %d vowels\n", vowel_count);

    return 0;
}

int compute_vowel_count(const char* sentence)
{
    char letter;
    int vowel_count = 0;

    while(*sentence) {
        letter = toupper(*sentence++);
        switch (letter) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowel_count++;
                break;
            default:
                break;
        }
    }

    return vowel_count;
}
