#include <stdio.h>

int main(void)
{
    int item_number;
    float unit_price;
    int day;
    int month;
    int year;
    
    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\t\tPrice\t\tdate\n");
    printf("%-d\t\t\t$%6.2f\t\t%2.2d/%2.2d/%d\n", item_number, unit_price, month, day, year);
}
