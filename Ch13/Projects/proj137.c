#include <stdio.h>

int main(void)
{
    int tenths;
    int tens;
    char *tens_array[] = {"twenty", "thirty", "fourty", "fifty", "sixty",
                          "seventy", "eighty", "ninety"};

    char *tenths_array[] = {"-one", "-two", "-three", "-four", "-five",
                            "-six", "-seven", "-eight", "-nine"};

    char *teens_array[] = {"eleven", "twelve", "thirteen", "fourteen", "fifteen",
                          "sixteen", "seventhteen", "eighteen", "nineteen"};

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &tens, &tenths);
    printf("You entered the number: ");
    if (tens == 1) {
        printf("%s\n",teens_array[tenths - 1]);
    } else if (tenths == 0) {
        printf("%s\n", tens_array[tens - 2]);
    } else {
        printf("%s%s\n", tens_array[tens - 2], tenths_array[tenths - 1]);
    }
    return 0;
}
