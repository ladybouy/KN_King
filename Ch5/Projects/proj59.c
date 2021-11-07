#include <stdio.h>

int main(void)
{
    int day1;
    int month1;
    int year1;
    int day2;
    int month2;
    int year2;
    
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    if (year1 < year2) {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n",
                month1, day1, year1, month2, day2, year2);
    } else if (year1 > year2) {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", 
                month2, day2, year2, month1, day1, year1);
    } else if (month1 < month2) {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n",
                month1, day1, year1, month2, day2, year2);
    } else if (month1 > month2) {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", 
                month2, day2, year2, month1, day1, year1);
    } else if (day1 < day2) {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n",
                month1, day1, year1, month2, day2, year2);
    } else if (day1 > day2) {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", 
                month2, day2, year2, month1, day1, year1);
    } else {
        printf("%02d/%02d/%02d is equal to %02d/%02d/%02d\n",
                month1, day1, year1, month2, day2, year2);
    }
    return 0;
} 
