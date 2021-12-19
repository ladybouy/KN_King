#include <stdio.h>

int day_of_year(int month, int day, int year)
{
    int month_array[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int julian_days = 0;

    for (int m = 0; m < 12; m++) {
        julian_days += month_array[m];
        if ( m  == month - 1) {
            julian_days = julian_days - month_array[m] + day; 
            break;
        }
    }

    return julian_days;
}
