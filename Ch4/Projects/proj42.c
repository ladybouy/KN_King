#include <stdio.h>

int main(void)
{
    int first, second, third, number; 

    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    
    first = number / 100;
    second = number % 100 / 10;
    third = number % 10;

    printf("The reversal is %d%d%d\n", third, second, first);

    return 0;
}
