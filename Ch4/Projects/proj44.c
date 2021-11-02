#include <stdio.h>

int main(void)
{
    int number, n1, n2, n3, n4, n5; 

    printf("Enter a number between 0 and 32727: ");
    scanf("%d", &number);
    
    n5 = number % 8;
    n4 = number / 8 % 8;
    n3 = number / 8 / 8 % 8;
    n2 = number / 8 / 8 / 8 % 8;
    n1 = number / 8 / 8 / 8 / 8 % 8;

    printf("In octal, your number is: %1d%1d%1d%1d%1d\n", n1, n2, n3, n4, n5);
    
    return 0;
}
