#include <stdio.h>

int main(void)
{
    int n;
    float e = 1.0f;
    float factorial = 1.0f;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = i; j >= 1; j--) {
            factorial = factorial * j;
        } 
        e += 1/factorial;
    }
    printf("e = %f\n", e);

    return 0;
}
