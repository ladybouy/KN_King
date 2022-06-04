#include <stdio.h>
#include "date.h"

int compare_dates(struct date d1, struct date d2)
{
    if (d1.month < d2.month || (d1.month == d2.month && d1.day < d2.day)) {
        return -1;
    } else if (d2.month < d1.month || (d1.month == d2.month && d2.day < d1.day)) {
        return 1;
    } else {
        return 0;
    }
}

void print_date(struct date aDate)
{
    printf("%02d/%02d/%02d", aDate.month, aDate.day, aDate.year);
}
