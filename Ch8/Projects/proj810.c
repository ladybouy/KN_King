#include <stdio.h>

int main(void)
{
    int hour;
    int minute;
    int total_minutes;
    int departure_hour;
    int departure_minute;
    int arrival_hour;
    int arrival_minute;
    int departures[] = {480, 538, 679, 767, 840, 945, 1140, 1305};
    int arrivals[] = {612, 712, 811, 900, 968, 1075, 1280, 1438} ;

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

    for (int i = 0; i < sizeof(departures)/ sizeof(departures[0]); i++) {
        if (total_minutes <= departures[i] + (departures[i+1] - departures[i]) / 2) {
            departure_hour = departures[i] / 60;
            departure_minute = departures[i] % 60;
            arrival_hour = arrivals[i] / 60;
            arrival_minute = arrivals[i] % 60;
            printf("Closest departure time is %d:%02d, arriving at %d:%02d\n",
                    departure_hour, departure_minute, arrival_hour, arrival_minute);
            break;
        }
    }

    return 0;
}
