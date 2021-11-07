#include <stdio.h>

int main(void)
{
    int i1;
    int i2;
    int i3;
    int i4;
    int smallest;
    int largest;
    int smallest1;
    int largest1;
    int smallest2;
    int largest2;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    if (i1 <= i2) {
        smallest1 = i1;
        largest1 = i2;
    } else {
        smallest1 = i2;
        largest1 = i1;
    }

    if (i3 <= i4 ) {
        smallest2 = i3;
        largest2 = i4;
    } else {
        smallest1 = i4;
        largest2 = i3;
    }

    if (smallest1 < smallest2) {
        smallest = smallest1;
    } else {
        smallest = smallest2;
    }
    
    if (largest1 < largest2) {
        largest = largest2;
    } else {
        largest = largest1;
    }

    printf("Lagest: %d\n", largest);
    printf("Smallest: %d\n", smallest);
    
    return 0;
}
