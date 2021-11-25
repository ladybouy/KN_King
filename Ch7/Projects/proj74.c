#include <stdio.h>

int main(void)
{
    char input;
    char num;
    printf("Enter phone number: ");
    
    while ((input = getchar()) != '\n') {
        switch(input) {
            case 'A': case 'B': case 'C': case 'a': case 'b': case 'c':
                num = '2';
                putchar(num);
                break;
            case 'D': case 'E': case 'F': case 'd': case 'e': case 'f':
                num = '3';
                putchar(num);
                break;
            case 'G': case 'H': case 'I': case 'g': case 'h': case 'i':
                num = '4';
                putchar(num);
                break;
            case 'J': case 'K': case 'L': case 'j': case 'k': case 'l':
                num = '5';
                putchar(num);
                break;
            case 'M': case 'N': case 'O': case 'm': case 'n': case 'o':
                num = '6';
                putchar(num);
                break;
            case 'P': case 'R': case 'S': case 'p': case 'r': case 's':
                num = '7';
                putchar(num);
                break;
            case 'T': case 'U': case 'V': case 't': case 'u': case 'v':
                num = '8';
                putchar(num);
                break;
            case 'W': case 'X': case 'Y': case 'w': case 'x': case 'y':
                num = '9';
                putchar(num);
                break;
            default: 
                putchar(input);
                break; 
        }
    }
    printf("\n");

    return 0;
}
