#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
    int wins = 0;
    int losses = 0;
    bool play = true;
    char answer;
    srand((unsigned) time(NULL));

    while (1) {
        if (play_game()) {
            printf("You win!\n");
            wins++;
        } else {
            printf("You lose!\n");
            losses++;
        }
        printf("Play again? ");
        scanf(" %c", &answer);
        if (tolower(answer) == 'y') {
            continue;
        } else if (tolower(answer) == 'n') {
            break;
        } else {
            break;
        }
        printf("\n");
    }

    printf("\nWins: %d   Losses: %d\n", wins, losses);

    return 0;
}

int roll_dice(void)
{
    int die1;
    int die2;

    die1 = rand() % 6 + 1;
    die2 = rand() % 6 + 1;

    return  die1 + die2; 
}

bool play_game(void)
{
    int point;
    int result = roll_dice();

    printf("You rolled: %d\n", result);
    if (result == 7 || result == 11) {
        return true;
    }
    if (result == 2 || result == 3 || result == 12) {
        return false;
    }

    printf("Your point is: %d\n", result);
    point = result;

    while (1) {
        result = roll_dice();
        printf("You rolled: %d\n", result);
        if (result == point) {
            return true;
        }
        if (result == 7) {
            return false;
        }
    }
}
