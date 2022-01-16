#include <stdio.h>
#include <ctype.h>

#define MAX_DIGITS 10

const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, 
                             {0, 1, 1, 0, 0, 0, 0},
                             {1, 1, 0, 1, 1, 0, 1},
                             {1, 1, 1, 1, 0, 0, 1},
                             {0, 1, 1, 0, 0, 1, 1},
                             {1, 0, 1, 1, 0, 1, 1},
                             {1, 0, 1, 1, 1, 1, 1},
                             {1, 1, 1, 0, 0, 0, 0},
                             {1, 1, 1, 1, 1, 1, 1},
                             {1, 1, 1, 1, 0, 1, 1}};

char digits[4][MAX_DIGITS * 4];
int digit_col = 0;

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
    char ch;
    int position = 0;

    clear_digits_array();

    printf("Enter a number: ");
    while ((ch = getchar()) != '\n') {
        if (isdigit(ch)) {
            process_digit(ch - '0', position);
            position += 4;
        }
    }
    print_digits_array();

    return 0;
}

void clear_digits_array(void) 
{
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < MAX_DIGITS * 4; j++) {
            digits[i][j] = ' ';
        }
    }
}

void process_digit(int digit, int position) 
{
    for (int i = 0; i < 7; i++) {
        if (segments[digit][i]) {
            if (i == 0) {
                digits[0][position + 1] = '_';    
            } else if (i == 1) {
                digits[1][position + 2] = '|';
            } else if (i == 2) {
                digits[2][position + 2] = '|';
            } else if (i == 3) {
                digits[3][position + 1] = '-';
            } else if (i == 4) {
                digits[2][position] = '|';
            } else if (i == 5) {
                digits[1][position] = '|';
            } else if (i == 6) {
                digits[1][position + 1] = '_';
            }
        }
    }
}

void print_digits_array(void)
{
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < MAX_DIGITS * 4; j++) {
            printf("%c", digits[i][j]);
        }
        printf("\n");
    }
}
