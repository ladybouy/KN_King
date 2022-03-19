/* Checks planet names */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

void string_to_upper(char *aString);

int main(int argc, char *argv[])
{
    char *planets[] = {"MERCURY","VENUS", "EARTH",
                       "MARS", "JUPITER", "SATURN",
                       "URANUS", "NEPTUNE", "PLUTO"};
    int i, j;

    for (i = 1; i < argc; i++) {
        string_to_upper(argv[i]);
    } 

    for (i = 1; i < argc; i++) {
        for (j = 0; j < NUM_PLANETS; j++)
            if (strcmp(argv[i], planets[j]) == 0) {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        if (j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]);
    }

    return 0;
}

void string_to_upper(char *aString)
{
    while(*aString) {
        *aString = toupper(*aString);
        aString++;
    }
}
