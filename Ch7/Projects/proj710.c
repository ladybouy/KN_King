#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char letter;
    int vowel_count = 0; 

    printf("Enter a sentence: ");
    while ((letter = getchar()) != '\n') {
        letter = toupper(letter);
        switch (letter) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowel_count++;
                break;
            default:
                break;
        }
    }
    printf("Your sentence contains %d vowels\n", vowel_count);

    return 0;
}
