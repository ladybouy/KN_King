#include <ctype.h>
#include <stdio.h>
#include <string.h>

void reverse_name(char *name);

int main(void)
{
    char name[100];

    printf("Enter a first and last name: ");
    gets(name);
    reverse_name(name);

    return 0;
}

void reverse_name(char *name)
{
    int size = 0;
    char first_initial;
    char last_name[100];

    // Get the first initial
    while (*name) {
        if (isalpha(*name)) {
            first_initial = *name;
            name++;
            break;
        }
    }

    // Get last name
    while(*name++ != ' ') {
        ;
    }
    strcpy(last_name, name);

    printf("%s, %c.\n", last_name, first_initial);
}
