#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DATE_LENGTH 100 
#define DAY_LENGTH 2
#define MONTH_LENGTH 2
#define YEAR_LENGTH 4

char *convert_month(int *month);

int main(void)
{
    int month;
    int day;
    int year;
    char day_str[DAY_LENGTH+1];
    char *month_str;
    char year_str[YEAR_LENGTH+1];
    char date[DATE_LENGTH+1];
    char input_date[DATE_LENGTH+1];


    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &month, &day, &year);

    month_str = convert_month(&month);
    sprintf(day_str, "%2d", day);
    sprintf(year_str, "%4d", year);

    strcpy(date, month_str);
    strcat(date, " ");
    strcat(date, day_str);
    strcat(date, ", ");
    strcat(date, year_str);

    printf("You entered the date %s\n", date);
    return 0;
}

char *convert_month(int *month)
{
    char *months[] = {"January", "February", "March", "April",
                      "May", "June", "July", "August", "September",
                      "October", "November", "December"};
    return months[*month - 1];
}
