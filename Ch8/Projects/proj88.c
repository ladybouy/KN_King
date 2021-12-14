#include <stdio.h>

#define X 5
#define Y 5

int main(void)
{
    int array[X][Y] = {0};

    printf("Enter grades for student 1: ");
    for (int j = 0; j < Y; j++) {
        scanf("%d", &array[0][j]);
    }
    printf("Enter grades for student 2: ");
    for (int j = 0; j < Y; j++) {
        scanf("%d", &array[1][j]);
    }
    printf("Enter grades for student 3: ");
    for (int j = 0; j < Y; j++) {
        scanf("%d", &array[2][j]);
    }
    printf("Enter grades for student 4: ");
    for (int j = 0; j < Y; j++) {
        scanf("%d", &array[3][j]);
    }
    printf("Enter grades for student 5: ");
    for (int j = 0; j < Y; j++) {
        scanf("%d", &array[4][j]);
    }
    printf("\n");

    printf("Student grades:\n");
    for (int i = 0; i < X; i++) {
        int total = 0;
        for (int j = 0; j < Y; j++) {
            total += array[i][j];
        }
        printf("Student %d: Total %d, Average: %d\n", i + 1, total, total / X);
    }
    printf("\n");

    printf("Quiz:\n");
    for (int j = 0; j < Y; j++) {
        int quiz_total = 0;
        for (int i = 0; i < 5; i++) {
            quiz_total += array[i][j];
        }
        printf("Quiz %d: Total: %d, Average %d\n", j+1, quiz_total, quiz_total / Y);
    }
    printf("\n");

    return 0;
}
