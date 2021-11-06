#include <stdio.h>

int main(void)
{
    int n = 0;

    if (n >= 1 <= 10) {   // This statement is legal but doesn't give the expected output
        printf("a: n is between 1 and 10\n");
    }
        
    if (n >= 1 && n <= 10) {  // This statement is legal and gives the expected ouput
        printf("b: n is between 1 and 10\n");
    } else {
        printf("c: n is not between 1 and 10\n");
    }

    return 0;
}
