#include <stdio.h>

#define N 10

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

int main(void)
{
    char ch;
    int array[N];

    printf("Enter %d numbers to be sorted: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    printf("Array Size: %ld\n", sizeof(array) / sizeof(array[0]));

    printf("Unsorted array: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    selection_sort(array, N);

    printf("Sorted array: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
