#include <stdio.h>

int main(void)
{
    double sum = 0;
    int readings;
    double temperature_readings[30][24] = {0};

    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 24; j++) {
            sum += j;           
            readings++;
        }
    }
    printf("Average monthly temperature %lf", sum / readings);
    return 0;
}
