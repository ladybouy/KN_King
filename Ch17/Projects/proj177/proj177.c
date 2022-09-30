/* Prints a one month reminder list (dynamic string version) */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MSG_LEN 60      /* max length of reminder message */

int read_line(char str[], int n);

typedef struct List {
    int length;
    char *reminders[];
} List;

void *allocate_list(int num_of_reminders);
void *reallocate_list(List *list);
void *allocate_string(char *message_string);

int main(void)
{
    List *reminder_list = allocate_list(1);
    char day_str[3], msg_str[MSG_LEN+1];
    int day, i, j, num_remind = 0;

    for (;;) {

        printf("Enter day and reminder: ");
        scanf("%2d", &day);
        if (day == 0) {
            break; 
        }
        sprintf(day_str, "%2d", day);
        read_line(msg_str, MSG_LEN);

        for (i = 0; i < num_remind; i++)
            if (strcmp(day_str, reminder_list->reminders[i]) < 0) {
                break;
            }
        for (j = num_remind; j > i; j--) {
            reminder_list->reminders[j] = reminder_list->reminders[j-1];
        }
        reminder_list = reallocate_list(reminder_list);
        reminder_list->reminders[i] = allocate_string(msg_str);

        strcpy(reminder_list->reminders[i], day_str);
        strcat(reminder_list->reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminder_list->reminders[i]);

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

void *allocate_list(int num_of_reminders)
{
   List *p; 
   p = malloc(sizeof(List) + num_of_reminders * sizeof(char *));
   if (p == NULL) {
        printf("Memory cannot be allocated in allocate_list\n");
        exit(EXIT_FAILURE);
   }
   p->length = num_of_reminders;
   return p;
}

void *reallocate_list(List *list)
{
    List *temp;
    temp = realloc(list, sizeof(List) + (list->length + 1) * sizeof(char *));
    temp->length += 1;
    if (temp == NULL) {
        printf("Memory cannot be reallocated in reallocated_list\n");
        exit(EXIT_FAILURE);
    }
    list = temp;
    return list;
}

void *allocate_string(char *message_string)
{
    message_string = malloc(2 + strlen(message_string) * sizeof(char) + 1);
    if (message_string == NULL) {
        printf("Memory cannot be allocated in allocate_string\n");
        exit(EXIT_FAILURE);
    }
    return message_string;
}
