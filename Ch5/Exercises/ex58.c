#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int age = 20;
    bool teenager = false;
    if (age >=13 && age <= 19) {
        teenager = true;
        printf("Teenager = true\n");
    } else {
        printf("Teenager = false\n");
    }
    return 0;
}
