#include <stdio.h>

int main(void)
{
    char first_initial;
    char last_name_char;
    char last_name[20] = {0};

    printf("Enter a first and last name: ");
    scanf(" %c", &first_initial);
    
    while((last_name_char = getchar()) != ' ') {
        ;
    }
    
    for (int i = 0; (last_name_char = getchar()) != '\n'; i++) {
        last_name[i] = last_name_char;
    }

    for (int i = 0; i < sizeof(last_name)/sizeof(last_name[0]); i++) {
        printf("%c", last_name[i]);
    }

    printf(", %c.\n", first_initial);
    return 0;
}
