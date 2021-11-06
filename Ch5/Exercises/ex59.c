#include <stdio.h>

int main (void)
{
    float score;
    printf("Please enter a score: ");
    scanf("%f", &score);
    if (score >= 90) {
        printf("A\n");
    } else if (score >= 80) {
        printf("B\n");
    } else if (score >= 70) {
        printf("C\n");
    } else if (score >= 60) {
        printf("D\n");
    } else {
        printf("F\n");
    }
 //   if (score < 60) {
 //       printf("F\n");
 //   } else if (score < 70) {
 //       printf("D\n");
 //   } else if (score < 80) {
 //       printf("C\n");
 //   } else if (score < 90) {
 //       printf("B\n");
 //   } else {
 //       printf("A\n");
 //   }
    return 0;
}
