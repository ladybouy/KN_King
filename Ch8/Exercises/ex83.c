#include <stdio.h>
#include <stdbool.h>

int main(void) 
{
    bool weekend[7] = {1, 0, 0, 0, 0, 0, 1}; 

    for (int i = 0; i < 7; i++)
    {
        printf("%d ", weekend[i]);
    }
    printf("\n");
    return 0;
}
