#include <stdio.h>
#include <ctype.h>

#define N 100

int main(void)
{
    char ch;
    int i = 0;
    char message[N] = {0};
    printf("Enter message: ");
    while ((ch = getchar()) != '\n') {
        message[i] = ch;
        i++;
    }

    printf("In BIFF-speak: ");
    for (i = 0; i < N; i++) {
        switch (ch = toupper(message[i])) {
            case 'A':
                putchar('4');
                break;
            case 'B':
                putchar('8');
                break;
            case 'E':
                putchar('3');
                break;
            case 'I':
                putchar('1');
                break;
            case 'O':
                putchar('0');
                break;
            case '5':
                putchar('S');
                break;
            default:
                printf("%c", ch);
        }
    }
    printf("!!!!!!!!!!\n");

    return 0;
}
