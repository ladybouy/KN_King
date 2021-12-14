#include <stdio.h>

#define X 5
#define Y 5

int main(void)
{
    int array[5][5] = {0};

    printf("Enter row 1: ");
    for (int j = 0; j < 5; j++) {
        scanf("%d", &array[0][j]);
    }
    printf("Enter row 2: ");
    for (int j = 0; j < 5; j++) {
        scanf("%d", &array[1][j]);
    }
    printf("Enter row 3: ");
    for (int j = 0; j < 5; j++) {
        scanf("%d", &array[2][j]);
    }
    printf("Enter row 4: ");
    for (int j = 0; j < 5; j++) {
        scanf("%d", &array[3][j]);
    }
    printf("Enter row 5: ");
    for (int j = 0; j < 5; j++) {
        scanf("%d", &array[4][j]);
    }

    printf("Row totals: ");
    for (int i = 0; i < 5; i++) {
        int row_sum = 0;
        for (int j = 0; j < 5; j++) {
            row_sum += array[i][j];
        }
        printf("%d ", row_sum);
    }
    printf("\n");

    printf("Column totals: ");
    for (int j = 0; j < 5; j++) {
        int col_sum = 0;
        for (int i = 0; i < 5; i++) {
            col_sum += array[i][j];
        }
        printf("%d ", col_sum);
    }
    printf("\n");

    return 0;
}
