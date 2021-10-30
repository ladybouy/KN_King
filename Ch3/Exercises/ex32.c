#include <stdio.h>

int main(void)
{
    float number;
    printf("Enter a number: ");
    scanf("%f", &number);

    printf("(a): %-8.1e\n", number);
    printf("(b): %10.6e\n", number); 
    printf("(c): %-8.3f\n", number);
    printf("(d): %6.0f\n", number);
}
