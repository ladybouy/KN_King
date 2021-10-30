/* Demostrates unintialized variables */

#include <stdio.h>

int main(void)
{
    int x, y, z;
    float a, b, c;
    printf("%d %d %d", x, y, z);
    printf("%f %f %f", a, b, c);
}
