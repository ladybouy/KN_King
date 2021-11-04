/* Example, not intended to be a full program */
#include <stdio.h>

int main(void) 
{
    
    switch (grade) {
        case 4: printf("Excellent");
                break;
        case 3: printf("good");
                break;
        case 2: printf("Average");
                break;
        case 1: printf("Poor");
                break;
        case 0: printf("Failing");
                break;
        default: printf("Illegal grade");
                break;
    }
}
