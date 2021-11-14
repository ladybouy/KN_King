#include <stdio.h>

int main(void)
{
    int days;
    int start_day;
    int day_of_week;

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);

    day_of_week = start_day;

    for (int i = 1; i <= days; i++) {
        if (i == 1) {
            printf("%*d",  3 * start_day, i); 
        } else {
            printf("%3d", i);
        }
        if (day_of_week == 7) {
            printf("\n");
            day_of_week = 1;
            continue;
        }
        day_of_week++;
    }
    printf("\n");

    return 0;
}
