#include <stdio.h>

int main(void)
{
    float e = 1.0f;
    float factorial = 1.0f;
    float epsilon;
    float term = 1.0f;

    printf("Enter an epsilon: ");
    scanf("%f", &epsilon);

    for (int i = 1; term > epsilon; i++) {
        for (int j = i; j >= 1; j--) {
            factorial = factorial * j;
        } 
        term = 1 / factorial;
        e += term;
    }
    printf("e = %f\n", e);

    return 0;
}
