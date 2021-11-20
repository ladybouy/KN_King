/*
Exercise 7.15
Use typedef to create types named Int8, Int16, Int32. Define the types so that they represent 8-bit, 16 bit, and 32-bit integers on your machine.
*/

#include <stdio.h>

int main(void)
{
    typedef char Int8;
    typedef short Int16;
    typedef int Int32;

    return 0;
}
