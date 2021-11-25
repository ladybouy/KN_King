#include <stdio.h>

int main(void)
{
   char first_initial;
   char last_name;

    printf("Enter a first and last name: ");
    scanf(" %c", &first_initial);
    
    while((last_name = getchar()) != ' ') {
        ;
    }
    while((last_name = getchar()) != '\n') {
        putchar(last_name);
    }

    printf(", %c\n", first_initial);
    return 0;
}
