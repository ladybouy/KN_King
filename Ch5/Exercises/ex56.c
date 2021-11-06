#include <stdio.h>

int main(void)
{
    int n = 5;
    if (n == 1 - 10) {   // This statement is legal, if n = 5, the condition is 0/false
        printf("n is between 1 and 10\n");  // The print statement doesn't make
                                            //  sense with the condition
    }
    return 0;
}
