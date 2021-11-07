#include <stdio.h>

int main(void)
{
    int hour;
    int minute;
    int total_minutes;
    int departure1 = 480;
    int departure2 = 583;
    int departure3 = 679;
    int departure4 = 767;
    int departure5 = 840;
    int departure6 = 945;
    int departure7 = 1140;
    int departure8 = 1305;

    printf("Enter a desired departure time (24-hour format): ");
    scanf("%d:%d", &hour, &minute);
    
    if (hour > 24) {
        printf("Invalid time\n");
        return 0;
    }

    if (hour < 24) {
        total_minutes = hour * 60 + minute;
    } else {
        total_minutes = minute;
    }
//    printf("Total minutes after midnight: %d\n", total_minutes);

    if (total_minutes <= (departure1 + (departure2 - departure1) / 2)) {
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m\n");
    } else if (total_minutes < (departure2 + (departure3 - departure2) / 2)) {
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m\n");
    } else if (total_minutes < (departure3 + (departure4 - departure3) / 2)) {
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m\n");
    } else if (total_minutes < (departure4 + (departure5 - departure4) / 2)) {
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m\n");
    } else if (total_minutes < (departure5 + (departure6 - departure5) / 2)) {
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m\n");
    } else if (total_minutes < (departure6 + (departure7 - departure6) / 2)) {
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m\n");
    } else if (total_minutes < (departure7 + (departure8 - departure7) / 2)) {
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m\n");
    } else {
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m\n");
    }

    return 0;
}
