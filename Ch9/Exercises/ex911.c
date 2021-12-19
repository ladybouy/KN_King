#include <stdio.h>

float compute_GPA(char grades[], int n)
{
    float total = 0;
    float gpa = 0;
    for (int i = 0; i < n; i++) {
        switch (grades[i]) {
            case 'A':
                total += 4;
                break;
            case 'B': 
                total += 3;
                break;
            case 'C':
                total += 2;
                break;
            case 'D':
                total += 1;
                break;
            case 'F':
                total += 0;
                break;
            default:
                break;
        }
    }
    gpa = total / n;
    return gpa;
}

int main(void)
{
    float gpa;
    char grades[] = {'A', 'B', 'C', 'A', 'A'};
    gpa = compute_GPA(grades, sizeof(grades) / sizeof(grades[0]));
    printf("GPA: %.2f\n", gpa);

    return 0;
}
