#include <stdio.h>
#define PI 3.14159

int main(void)
{
    float radius = 10.0;
    float volume = 4.0f / 3.0f * PI * radius * radius * radius;
    printf("Volume of a sphere with a %0.2f meter radius: %0.2f meters^3\n", radius, volume);
}
