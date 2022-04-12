#include <stdlib.h>
#include <stdio.h>

#define TEST(condition, ...) ((condition) ? \
        printf("Passed test: %s\n"), #condition: \
        printf(__VA_ARGS__))

int main(void)
{
    int voltage;
    int max_voltage;
    TEST(voltage <= max_voltage,
         "Voltage %d exceeds %d\n", voltage, max_voltage);
}
