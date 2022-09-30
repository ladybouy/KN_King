/* Maintains a parts database (linked list version) */

#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
    int number;
    char name[NAME_LEN+1];
    int on_hand;
    struct part *next;
};

struct part *inventory = NULL;      /* points to the first part */

int num_parts = 0;  /* number of parts currently stored */

struct part *find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);
int compare_parts(const void *p, const void *q);
void erase(void);

/**********************************************************
 * main: Prompts the user to enter an operation code,     *
 *       then calls a function to perform the requested   *
 *       action. Repeats until the user enters the        *
 *       command 'q'. Prints an error message if the user *
 *       enters an illegal code.                          *
 ***********************************************************/
int main(void)
{
    char code;
    for (;;) {
        printf("Enter operation code: ");
        scanf(" %c", &code);
        while (getchar() != '\n')   /* skips to the end of the line */
            ;
        switch (code) {
            case 'i': insert();
                      break;
            case 'e': erase();
                      break;
            case 's': search();
                      break;
            case 'u': update();
                      break;
            case 'p': print();
                      break;
            case 'q': return 0;
            default: printf("Illegal code\n");
        }
        printf("\n");
    }
}
/************************************************************
 *  find_part: Looks up a part number in the inventor       * 
 *             array. Returns the array index if the part   *
 *             number is found; otherwise, returns -l.      *
 ************************************************************/
struct part *find_part(int number)
{
    struct part *p;

    for (p = inventory;
         p != NULL && number > p->number;
         p = p->next)
        ;
    if (p != NULL & number == p->number)
        return p;
}

/**************************************************************
 *  insert: Prompts the user for the information about a new  *
 *          part and then inserts the part into the           *
 *          database.  Prints an error message and returns    *
 *          prematurely if the part already exists or the     *
 *          database if full.                                 * 
 * ***********************************************************/
void insert(void)
{
    struct part *cur, *prev, *new_node;

    new_node = malloc(sizeof(struct part));
    if (new_node == NULL) {
        printf("Database if full; can't add more parts.\n");
        return;
    }
    
    printf("Enter part number: ");
    scanf("%d", &new_node->number);

    for (cur = inventory, prev = NULL;
         cur != NULL && new_node->number > cur->number;
         prev = cur, cur = cur->next)
        ;
    
    if (cur != NULL && new_node->number == cur->number) {
        printf("Part already exists.\n");
        free(new_node);
        return;
    }

    printf("Enter part name: ");
    read_line(new_node->name, NAME_LEN); 
    printf("Enter quantity on hand: ");
    scanf("%d", &new_node->on_hand);

    new_node->next = cur;
    if (prev == NULL)
        inventory = new_node;
    else
        prev->next = new_node;
}                                                   

/***********************************************************
 *  search: Prompts the user to enter a part number, then  *
 *          looks up the part in the database. If the part *
 *          exists, prints the name and quantity on hand;  *
 *          if not, prints an error message.               *
 ***********************************************************/
void search(void)
{
    int  number;
    struct part *p;

    printf("Enter part number: ");
    scanf("%d", &number);
    p = find_part(number);
    if (p != 0) {
        printf("Part name: %s\n", p->name);
        printf("Quantity on hand: %d\n", p->on_hand);
    } else {
        printf("Part not found. \n");
    }
}

/**********************************************************
 *  update: Prompts the user to enter a part number.      *
 *          Prints an error message if the part doesn't   *
 *          exist; otherwise, prompts the user to enter   *
 *          chage in quantity on hand and updates the     *
 *          database.                                     *
 **********************************************************/
void update(void)
{
    int number, change;
    struct part *p;

    printf("Enter part number: ");
    scanf("%d", &number);
    p = find_part(number);
    if (p != NULL) {
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change);
        p->on_hand += change;
    } else {
        printf("Part not found. \n");
    }
}

/***********************************************************
 *  print: Prints a listing of all parts in the database,  *
 *         showing the part number, part name, and         *
 *         quantity on hand. Parts are printed in the      *
 *         order in which they were entered into the       *
 *         database.                                       *
 ***********************************************************/
void print(void)
{
    struct part *p;

    printf("Part number  Part Name                   "
           "Quantity on Hand\n");
    for (p = inventory; p != NULL; p = p->next)
        printf("%7d      %-25s%11d\n", p->number, p->name,
               p->on_hand);
}

int compare_parts(const void *p, const void *q)
{
    const struct part *p1 = p;
    const struct part *q1 = q;

    if (p1->number < q1->number)
        return -1;
    else if (p1->number == q1->number)
        return 0;
    else
        return 1;
}

void erase()
{
    struct part *cur;
    struct part *prev;
    int n;

    printf("Enter part number: "); 
    scanf("%d", &n);

    for (cur = inventory, prev = NULL;
         cur != NULL && cur->number != n;
         prev = cur, cur = cur->next)
        ;
    if (cur == NULL) {
        printf("Part number %d was not found", n);
        return;
    }
    if (prev == NULL) {
        inventory = inventory->next;
    } else {
        prev->next = cur->next;
    }
    free(cur);
    num_parts -= 1;
}
