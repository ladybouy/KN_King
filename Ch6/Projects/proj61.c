#include <stdio.h>

int main(void)
{
    float number = 1;
    float max = 0;

    while (number > 0) {
        printf("Enter a number: ");
        scanf("%f", &number);
        if (number > max) {
            max = number;
        }
    }
    printf("The largest number entered was %f\n", max);

    return 0;
}
