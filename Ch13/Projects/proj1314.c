#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 20

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
    bool is_anagram = false;
    char ch;
    char first_word[SIZE];
    char second_word[SIZE];
    int i, j= 0;
    
    printf("Enter first word: ");
    scanf("%s", first_word);

    printf("Enter second word: ");
    scanf("%s", second_word);

    is_anagram = are_anagrams(first_word, second_word);

    if (is_anagram) {
        printf("The words are anagrams\n");
    } else {
        printf("The words are not anagrams\n");
    }

    return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
    int sum = 0;
    int counter[26] = {0};

    while (*word1) {
        counter[tolower(*word1) - 'a']++;
        word1++;
    }

    while (*word2) {
        if (counter[tolower(*word2) - 'a'] == 0) {
            ;
        } else {
            counter[tolower(*word2) - 'a']--;
        }
        word2++;
    }

    for(int i = 0; i < 26; i++) {
        sum += counter[i];
    }

    if (sum == 0) {
        return true;
    }

    return false;
}
