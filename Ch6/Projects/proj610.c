#include <stdio.h>

int main(void)
{
    int day;
    int month;
    int year;
    int e_day = 0;
    int e_month = 0;
    int e_year = 0;
    
    printf("Enter a date (mm/dd/yy): "); 
    scanf("%d/%d/%d", &e_month, &e_day, &e_year);

    while(1) {
        printf("Enter a date (mm/dd/yy): "); 
        scanf("%d/%d/%d", &month, &day, &year);

        if (day == 0 && month == 0 && year == 0) {
            break;
        }

        if ( year < e_year || (year == e_year && month < e_month) ||
                (year == e_year && month == e_month && day < e_day)) {
            e_year = year;
            e_month = month;
            e_day = day;
        }
   }

    printf("%d/%d/%02d is the earliest date\n", e_month, e_day, e_year);
    return 0;
}
