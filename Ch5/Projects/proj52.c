#include <stdio.h>

int main(void)
{
    int hour;
    int minute;
    
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if (hour > 12 && hour < 24) {
        hour = hour - 12;
        printf("Equivalent 12-hour time: %d:%02d PM\n", hour, minute);
    } else if (hour == 12) {
         printf("Equivalent 12-hour time: %d:%02d PM\n", hour, minute);
    } else if (hour == 24) {
        hour = hour - 12;
        printf("Equivalent 12-hour time: %d:%02d AM\n", hour, minute);
    } else {
        printf("Equivalent 12-hour time: %d:%02d AM\n", hour, minute);
    }
    return 0;
}
