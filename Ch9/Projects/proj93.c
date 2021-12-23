#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FREE  '.' 
#define ROWS  10
#define COLS  10
#define UP    0
#define DOWN  1
#define LEFT  2
#define RIGHT 3

void generate_random_walk(char walk[10][10])
{
    char letters[26] = {[0]=65};  // 65 = "A"
    bool up = 0;
    bool down = 0;
    bool left = 0;
    bool right = 0;
    int direction;
    int letter_index;
    srand((unsigned) time(NULL));

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            walk[i][j] = FREE;
        }
    }
    for (int i = 0; i < 26; i++) {
        letters[i] = letters[0] + i;
    }

    int row = 0;
    int col = 0;
    for (letter_index = 0; letter_index < 26; letter_index++) {
        walk[row][col] = letters[letter_index];

        // Determine if there is space to move to begin with
        if (row - 1 >= 0 && walk[row - 1][col] == FREE) {
            up = 1;
        }
        if (row + 2 < ROWS && walk[row + 1][col] == FREE) {
            down = 1;
        }
        if (col - 1 >= 0 && walk[row][col - 1] == FREE) { 
            left = 1;
        } 
        if (col + 1 < COLS && walk[row][col + 1] == FREE) {
            right = 1;
        }

        // Terminates the loop if there is no space to move
        if (up == down == left == right == 0) {
            break;
        }
            
        direction = rand() % 4;

        // Fall thorugh if current direction is blocked
        switch (direction) {
            case UP: 
                if (up) {
                    row--;
                    break;
               }
            case DOWN: 
                if (down) {
                    row++;
                    break;
                }
            case LEFT: 
                if (left) {
                    col--;
                    break;
                }
            case RIGHT:
                if (right) {
                    col++;
                    break;
                }
            default:
                break;
        }
    }

}
void print_array(char walk[10][10])
{
    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            printf("%c ", walk[row][col]);
            if(col == COLS-1) {
                printf("\n");
            }
        }
    }
    printf("\n");
}

int main(void)
{
    char grid[ROWS][COLS];

    generate_random_walk(grid);
    print_array(grid);

    return 0;
}
