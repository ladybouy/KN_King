#include <stdio.h>
        
void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void)
{
    int hour;
    int minute;
    int total_minutes;
    int depart_time;
    int arrive_time;
    int departure_hour;
    int departure_min;
    int arrival_hour;
    int arrival_min;

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

    find_closest_flight(total_minutes, &depart_time, &arrive_time);

    departure_hour = depart_time / 60;
    departure_min = depart_time % 60; 
    arrival_hour = arrive_time / 60;
    arrival_min = arrive_time % 60;

    printf("Closest departure time is %d:%02d, arriving at %d:%02d\n",
            departure_hour, departure_min, arrival_hour, arrival_min); 

    return 0;
}


void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    int departure1 = 480;
    int arrival1   = 616;
    int departure2 = 583;
    int arrival2   = 712; 
    int departure3 = 679;
    int arrival3   = 811; 
    int departure4 = 767;
    int arrival4   = 900; 
    int departure5 = 840;
    int arrival5   = 968; 
    int departure6 = 945;
    int arrival6   = 1075; 
    int departure7 = 1140;
    int arrival7   = 1280; 
    int departure8 = 1305;
    int arrival8   = 1438;

    if (desired_time <= (departure1 + (departure2 - departure1) / 2)) {
        *departure_time = departure1;
        *arrival_time = arrival1; 
    } else if (desired_time < (departure2 + (departure3 - departure2) / 2)) {
        *departure_time = departure2;
        *arrival_time = arrival2; 
    } else if (desired_time < (departure3 + (departure4 - departure3) / 2)) {
        *departure_time = departure3;
        *arrival_time = arrival3; 
    } else if (desired_time < (departure4 + (departure5 - departure4) / 2)) {
        *departure_time = departure4;
        *arrival_time = arrival4; 
    } else if (desired_time < (departure5 + (departure6 - departure5) / 2)) {
        *departure_time = departure5;
        *arrival_time = arrival5; 
    } else if (desired_time < (departure6 + (departure7 - departure6) / 2)) {
        *departure_time = departure6;
        *arrival_time = arrival6; 
    } else if (desired_time < (departure7 + (departure8 - departure7) / 2)) {
        *departure_time = departure7;
        *arrival_time = arrival7; 
    } else {
        *departure_time = departure8;
        *arrival_time = arrival8; 
    }
}
