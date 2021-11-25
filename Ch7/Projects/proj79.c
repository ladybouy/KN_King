#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hour;
    int minute;
    char meridium;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minute, &meridium);

    if (hour > 12) {
        printf("Invalid hour format\n");
        return 1;
    }

    if ((meridium = toupper(meridium)) == 'P') {
        printf("%d:%02d\n", 12 + hour, minute);
    } else {
        printf("%d:%02d\n", hour, minute);
    }
        
    return 0;
}
