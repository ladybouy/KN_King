#include <stdio.h>

#define FUNCTION_CALLED() printf("%s called\n", __func__);
#define FUNCTION_RETURNS() printf("%s returns\n", __func__);

void f(void)
{
    FUNCTION_CALLED();       /* displays "f called" */
    FUNCTION_RETURNS();      /* displays "f returns" */
}
