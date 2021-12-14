#include <stdio.h>

int main(void)
{
    int n;

    printf("The program creates a magic square of a specific size. The size must be an odd number between 1 and 99\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);
    int magic_array[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            magic_array[i][j] = 0;
        }
    }

    int row = 0;
    int col = n / 2;
    for (int i = 1; i <= n * n; i++) {
        magic_array[row][col] = i;
        if (row == 0) {
            row = n - 1;
        } else {
            row--;
        }
        if (col == n - 1) {
            col = 0;
        } else {
            col++;
        }
        if (magic_array[row][col] != 0) {
            if (row == n - 1 ) {
                row = 1;
            } else {
                row += 2;
            }
            if (col == 0) {
                col = n - 1;
            } else {
                col--;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d ", magic_array[i][j]);
            if (j == n - 1) {
                printf("\n"); 
            }
        }
    }

    return 0;
}   
