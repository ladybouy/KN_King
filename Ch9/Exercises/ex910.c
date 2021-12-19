#include <bits/types/__fpos_t.h>
#include <stdio.h>

int largest(int a[], int size)
{
    int largest = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] > largest) {
            largest = a[i]; 
        }
    }
    return largest;
}

int average(int a[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += a[i];
    }
    return sum / size; 
}

int positive(int a[], int size)
{
    int positive_count = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] > 0) {
            positive_count++;
        }
    }
    return positive_count;
}

int main(void)
{
    int largest_number;
    int average_number;
    int positive_number_count;
    int array[10] = {-1, 2, 3, 12, 5, -6, 7, 8, 9, 10};

    largest_number = largest(array, sizeof(array) / sizeof(array[0]));
    average_number = average(array, sizeof(array) / sizeof(array[0]));
    positive_number_count = positive(array, sizeof(array) / sizeof(array[0]));

    printf("Largest number: %d\n", largest_number);
    printf("Average number: %d\n", average_number);
    printf("Amount of positive numbers: %d\n", positive_number_count);

    return 0;
}
