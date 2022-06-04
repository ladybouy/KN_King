#include <stdio.h>

struct FlightTimes {
    int departure;
    int arrival;
};

int main(void)
{
    struct FlightTimes flight_time[] = { {480,   616}, {583,   712},
                                         {679,   811}, {767,   900}, 
                                         {840,   968}, {945,  1075},
                                         {1140, 1280}, {1305, 1438} };

    int hour;
    int minute;
    int total_minutes;
    int departure_time;
    int arrival_time;

    printf("Enter a desired departure time (24-hour format, hh:mm): ");
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

    for (int i = 0; i < 7; i++) {

        int time_difference = flight_time[i].departure + (flight_time[i+1].departure - flight_time[i].departure) / 2;

        if (total_minutes < time_difference) {
            return printf("Closest departure time is %02d%02d, arriving at %02d%02d\n",
                          flight_time[i].departure / 60, flight_time[i].departure % 60,
                          flight_time[i].arrival / 60, flight_time[i].arrival % 60);

        } else if (total_minutes <= time_difference) {
            return printf("Closest departure time is %02d%02d, arriving at %02d%02d\n",
                          flight_time[i].departure / 60, flight_time[i].departure % 60,
                          flight_time[i].arrival / 60, flight_time[i].arrival % 60);
        }
    }

    return 0;
}
