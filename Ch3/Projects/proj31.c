#include <stdio.h>

int main(void)
{
    int day, month, year;

    printf("Enter a date: ");
    scanf("%d / %d / %d", &month, &day, &year);

    printf("You entered the date %d%2.2d%2.2d\n", year, month, day);
}
