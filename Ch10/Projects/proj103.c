#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* external variables */
int hand[NUM_CARDS][2] = {0};
bool straight, flush, four, three;
int pairs;      /* can be 0, 1, or 2 */

/* prototypes */
void read_cards(int hand[][2]);
void analyze_hand(int hand[][2]);
void print_result(void);
bool duplicate(int hand[][2], int cards_read, int suit_index, int rank, int suit);
void selection_sort(int array[], int elements);

/**********************************************************
 *  main: Call read_cards, analyze_hand, and print_result *
 *        repeatedly.                                     *
 **********************************************************/        

int main(void)
{
    for (;;) {
        read_cards(hand);
        analyze_hand(hand);
        print_result();
    }
}

/************************************************************
 *  read_cards: Reads the cards into the hand array;        *
 *              checks for bad cards and duplicate cards.   *
*************************************************************/

void read_cards(int hand[][2])
{
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;
    int suit_index = 1;

    while (cards_read < NUM_CARDS) {
        bad_card = false;

        printf("Enter a card: ");

        rank_ch = getchar();
        switch (rank_ch) {
            case '0':           exit(EXIT_SUCCESS);
            case '2':           rank = 0; break;
            case '3':           rank = 1; break;
            case '4':           rank = 2; break;
            case '5':           rank = 3; break;
            case '6':           rank = 4; break;
            case '7':           rank = 5; break;
            case '8':           rank = 6; break;
            case '9':           rank = 7; break;
            case 't': case 'T': rank = 8; break;
            case 'j': case 'J': rank = 9; break;
            case 'q': case 'Q': rank = 10; break;
            case 'k': case 'K': rank = 11; break;
            case 'a': case 'A': rank = 12; break;
            default:            bad_card = true;
        }

        suit_ch = getchar();
        switch (suit_ch) {
            case 'c': case 'C': suit = 0; break;
            case 'd': case 'D': suit = 1; break;
            case 'h': case 'H': suit = 2; break;
            case 's': case 'S': suit = 3; break;
            default:            bad_card = true;
        }

        while((ch = getchar()) != '\n') {
            if (ch != ' ') bad_card = true;
        }
        if (bad_card) {
            printf("Bad card; ignored.\n");
        } else if (duplicate(hand, cards_read, suit_index, rank, suit)) {
            printf("Duplicate card; ignoring.\n");    
        } else {
            hand[cards_read][suit_index - 1] = rank;
            hand[cards_read][suit_index] = suit;
            cards_read++;
        }
    }
}

/************************************************************
 *  analyze_hand: Determines whether the hand contains a    *  
 *                straight, a flush, four-of-akind,         *
 *                and/or three-of-a-kind; determines the    *
 *                number of pairs; stores the results into  * 
 *                the external variables straight, flush,   *
 *                four, three, and pairs.                   *
*************************************************************/

void analyze_hand(int hand[][2])
{
    int num_consec = 0;
    int rank, suit;
    int ordered_hand[5] = {0}; 
    int match = 0;
    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;

    /* check for flush */
    for (int i = 0; i < NUM_CARDS; i++) {
        if (hand[i][1] != hand[0][1]) {
            break;
        }
        if (i == NUM_CARDS - 1) {
            flush = true;
        }
    }

    /* check for straight */
    for (int i = 0; i < NUM_CARDS; i++) {
        ordered_hand[i] = hand[i][0];  
    }

    selection_sort(ordered_hand, 5);

    for (int i = 1; i < NUM_CARDS; i++) {
        if ((ordered_hand[i] - ordered_hand[i - 1]) != 1) {
            break;
        }
        if(i == NUM_CARDS - 1) {
            straight = true;
        }
    }

    /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
    for (int i = 0; i < NUM_RANKS; i++) {
        match = 0;
        for (int j = i + 1; j < NUM_RANKS; j++) {
            if (ordered_hand[j] == ordered_hand[i]) {
                match++;
            }
        }
        if (match == 1) {
            pairs++;
        } 
        if (match == 2) {
            three = true;
        }
        if (match == 3) {
            four = true;
        }
    }
}


/***********************************************************
 *  print_result: Prints the classification of the hand,   *
 *                based on the values of the external      *
 *                variables straight, flush, four, three,  *
 *                and pairs                                *
************************************************************/

void print_result(void)
{
    if (straight && flush) printf("Straight flush");
    else if (four)         printf("Four of a kind");
    else if (three &&
             pairs == 1)   printf("Full hourse");
    else if (flush)        printf("Flush");
    else if (straight)     printf("Three of a kind");
    else if (pairs == 2)   printf("Two pairs");
    else if (pairs == 1)   printf("Pair");
    else                   printf("High card");

    printf("\n\n");
}

bool duplicate(int hand[][2], int cards_read, int suit_index, int rank, int suit) 
{
    for (int i = 0; i <= cards_read; i++) {
        if (hand[i][suit_index - 1] == rank && hand[i][suit_index] == suit ) {
            return true;
        }
    }
    return false;
}

void selection_sort(int array[], int elements)
{
    int largest = 0;

    if (elements == 0) {
        return;
    }

    for (int i = 0; i < elements; i++) {
        if (array[i] > array[largest]) {
            largest = i;
        }
    }

    int temporary = array[largest]; 
    array[largest] = array[elements - 1];
    array[elements - 1] = temporary;

    selection_sort(array, elements - 1);
}
