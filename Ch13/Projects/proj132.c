/* Prints a one-month reminder list */

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50   /* maximum number of reminders */
#define MSG_LEN 60      /* max length of reminder message */

int read_line(char str[], int n);

int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN+3];
    char date_str[11], msg_str[MSG_LEN+1];
    int month, day, time, i, j, num_remind = 0;

    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf("-- No space left -- \n");
            break;
        }

        printf("Enter month, day, time (mm/dd hhmm) and reminder: ");
        scanf("%2d/%2d %4d", &month, &day, &time);
        if (month == 0 || day == 0 || time == 0) {
            break;
        }
        if (month > 12 || month < 1) {
            printf("Error: month out of bounds\n");
            while(getchar() != '\n') {
                ;
            }
            continue;
        }
        if (day > 31 || day < 0) {
            printf("Error: day out of bounds\n");
            while(getchar() != '\n') {
                ;
            }
            continue;
        }

        sprintf(date_str, "%2d %2d %4d", month, day, time);
        read_line(msg_str, MSG_LEN);
        
        for (i = 0; i < num_remind; i++) {
            printf(" %s\n", reminders[i]);
            if (strcmp(date_str, reminders[i]) < 0) {
                break;
            }
        }

        for (j = num_remind; j > i; j--) {
            strcpy(reminders[j], reminders[j-1]);
        }

        strcpy(reminders[i], date_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++) {
        printf(" %s\n", reminders[i]);
    }

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
