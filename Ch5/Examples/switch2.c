/* Example, not intended to be a full program */
#include <stdio.h>

int main(void)
{
    switch (grade) {
        case 4: case 3: case 2: case 3:
                 printf("Passing");
        case 0:  printf("Failing");
                 break;
        default: printf("Illegal grade");
                 break;
    }
}
