#include <stdio.h>

int main(void)
{
    float x, y;
    int i;
    scanf("%f%d%f", &x, &i, &y);      // What if the user enters 12.3 45.6 789?
    printf("%f, %d, %f\n", x, i, y);  // 12.3 is input to x, 45 into i, .6 in i, and 789 is returned 
    
    return 0;
}
