#include <stdio.h>

int power(int x, int n)
{
    if (n == 0) {
        return 1;
    } else {
        if (n % 2 == 0) {
            return power(x , n / 2) * power(x, n / 2);
        } else {
            return x * power(x, n - 1);
        }
    }
}

int main(void)
{
    int x;
    int y;
    int n;
    printf("Enter a value for x (base): ");
    scanf("%d", &x);
    printf("Enter a value of n (power): ");
    scanf("%d", &n);

    y = power(x, n);
    printf("%d to the %d is: %d\n", x, n, y);

    return 0;
}
