#include <stdio.h>

int main(void)
{
    int height, length, width, volume;
    float profit, loss;
     
    height = 8;
    length = 12;
    width = 10;
    profit = 2150.48f;   // It's best to append the letter f to a constant that contains a decimal
                         // point if the number is assigned to a float variable
    volume = height * length * width;
   // There is no limmit to the number of variables that can be printed by a single call of printfo
    printf("Height: %d Length: %d\n", height, length);
    printf("Profit: %0.2f", profit);
    return 0;
}
