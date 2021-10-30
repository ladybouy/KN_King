#include <stdio.h>

int main(void)
{
    int i, j;
    float x;
    scanf("%d%f%d", &i, &x, &j);      // What if the user enters 10.3 5 6 ?
    printf("%d, %f, %d\n", i, x, j);  // 10 is input to i, 0.3 into x, 5 in j, and 6 is returned 
    
    return 0;
}
