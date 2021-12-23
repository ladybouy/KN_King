#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{
    bool anagram = false;
    char ch;
    int counter1[26] = {0};
    int counter2[26] = {0};

    int sum = 0;
    
    printf("Enter first word: ");
    read_word(counter1);

    printf("Enter second word: ");
    read_word(counter2);
    
    anagram = equal_array(counter1, counter2);

    if (anagram) {
        printf("The words are anagrams\n");
    } else {
        printf("The words are not anagrams\n");
    }

    return 0;
}

void read_word(int counts[26]) 
{
    char ch;
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            ch = tolower(ch);
            counts[ch - 'a']++;
        }
    }
}

bool equal_array(int counts1[26], int counts2[26]) 
{
    int difference = 0;
    for (int i = 0; i < 26; i++) {
        difference += (counts1[i] - counts2[i]);
    }
    
    if (difference == 0) {
        return true;
    } else {
        return false;
    }
}

