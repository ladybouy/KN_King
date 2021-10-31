#include <stdio.h>

int main(void)
{
    int area_code, phone_three, phone_four;
    
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area_code, &phone_three, &phone_four);
    printf("You entered %d.%.3d.%.4d\n", area_code, phone_three, phone_four);
    return 0;
}
