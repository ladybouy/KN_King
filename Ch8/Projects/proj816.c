#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int counter[26] = {0};
    int sum = 0;
    
    printf("Enter first word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            ch = tolower(ch);
            counter[ch - 'a']++;
        }
    }

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            ch = tolower(ch);
            if (counter[ch - 'a'] == 0) {
                ;
            } else {
                counter[ch - 'a']--;
            }
        }
    }

    for(int i = 0; i < 26; i++) {
        sum += counter[i];
    }

    if (sum == 0) {
        printf("The words are anagrams\n");
    } else {
        printf("The words are not anagrams\n");
    }

    return 0;
}
