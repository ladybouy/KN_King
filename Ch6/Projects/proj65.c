#include <stdio.h>

int main(void)
{
    int number;
    int digits = 0;

    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Reversed number: ");
    do {
        printf("%d", number % 10);     
        number /= 10;
    } while (number != 0);
    printf("\n");

    return 0;
}
