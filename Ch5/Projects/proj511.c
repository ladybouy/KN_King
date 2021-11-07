#include <stdio.h>

int main(void)
{
    int tenths;
    int tens;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &tens, &tenths);
    printf("You entered the number: ");
    if (tens == 1) {
        if (tenths == 1) {
            printf("eleven.\n");
        } else if (tenths == 2) {
            printf("twelve.\n");
        } else if (tenths == 3) {
            printf("thirteen.\n");
        } else if (tenths == 4) {
            printf("fourteen.\n");
        } else if (tenths == 5) {
            printf("fifthteen.\n");
        } else if (tenths == 6) {
            printf("sixthteen\n");
        } else if (tenths == 7) {
            printf("seventhteen.\n");
        } else if (tenths == 8) {
            printf("eighteen.\n");
        } else if (tenths == 9) {
            printf("nineteen.\n");
        } else {
            ;
        }
    } else {
            switch (tens) {
            case 2: 
                printf("twenty");
                break;
            case 3:
                printf("thirty");
                break;
            case 4:
                printf("fourty");
                break;
            case 5:
                printf("fifty");
                break;
            case 6:
                printf("sixty");
                break;
            case 7:
                printf("seventy");
                break;
            case 8:
                printf("eighty");
                break;
            case 9:
                printf("ninety");
        }
        switch(tenths) {
            case 1:
                printf("-one.\n");
                break;
            case 2: 
                printf("-two.\n");
                break;
            case 3:
                printf("-three.\n");
                break;
            case 4:
                printf("-four.\n");
                break;
            case 5:
                printf("-five.\n");
                break;
            case 6:
                printf("-six.\n");
                break;
            case 7:
                printf("-seven.\n");
                break;
            case 8:
                printf("-eight.\n");
                break;
            case 9:
                printf("-nine.\n");
                break;
            default:
                printf(".\n");
        }
    }
    return 0;
}
