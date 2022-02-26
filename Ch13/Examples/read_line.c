#include <stdio.h>

#define N 10

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n' && ch != EOF)
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';      /* terminates string */
    return i;           /* number of characters stored */
}

int main(void)
{
    char str[N];
    read_line(str, N);

    printf("%s\n", str);
    return 0;
}
