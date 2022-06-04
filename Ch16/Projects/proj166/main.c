#include <stdio.h>
#include "date.h"

int main(void)
{
    struct date date_to_compare[2];
    int comparision_value;
    
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &date_to_compare[0].month, &date_to_compare[0].day, &date_to_compare[0].year);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &date_to_compare[1].month, &date_to_compare[1].day, &date_to_compare[1].year);

    comparision_value = compare_dates(date_to_compare[0], date_to_compare[1]);

    if (comparision_value == -1) {
        print_date(date_to_compare[0]);
        printf(" is less than ");
        print_date(date_to_compare[1]);
        printf("\n");
    } else if (comparision_value == 1) {
        print_date(date_to_compare[1]);
        printf(" is less than ");
        print_date(date_to_compare[0]);
        printf("\n");
    } else {
        print_date(date_to_compare[0]);
        printf(" is equal to ");
        print_date(date_to_compare[1]);
        printf("\n");
    }
    return 0;
} 
