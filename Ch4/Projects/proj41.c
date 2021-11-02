#include <stdio.h>

int main(void)
{
    int first, last, number; 

    printf("Enter a two-digit number: ");
    scanf("%d", &number);
    
    first = number / 10;
    last = number % 10;

    printf("The reversal is %d%d\n", last, first);

    return 0;
}
