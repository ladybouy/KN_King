/* Example, not intended to be a full program */
#include <stdio.h>

int main(void)
{
    switch (grade) {
        case 4: case 3: case 2: case 1:
                num_passing++;
                /* FALL THROUGH */
        case 0: total_grade++;
                break;
    }
}
