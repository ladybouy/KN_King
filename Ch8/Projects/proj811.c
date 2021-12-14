#include <stdio.h>

int main(void)
{
    char phone_number[15];

    printf("Enter phone number: ");

    for (int i = 0; i < 15; i++) {
        scanf("%c", &phone_number[i]);
    }

    printf("In numeric form: ");
    for (int i = 0; i < 15; i++) {
        switch(phone_number[i]) {
            case 'A': case 'B': case 'C': case 'a': case 'b': case 'c':
                phone_number[i] = '2';
                printf("%c", phone_number[i]);
                break;
            case 'D': case 'E': case 'F': case 'd': case 'e': case 'f':
                phone_number[i] = '3';
                printf("%c", phone_number[i]);
                break;
            case 'G': case 'H': case 'I': case 'g': case 'h': case 'i':
                phone_number[i] = '4';
                printf("%c", phone_number[i]);
                break;
            case 'J': case 'K': case 'L': case 'j': case 'k': case 'l':
                phone_number[i] = '5';
                printf("%c", phone_number[i]);
                break;
            case 'M': case 'N': case 'O': case 'm': case 'n': case 'o':
                phone_number[i] = '6';
                printf("%c", phone_number[i]);
                break;
            case 'P': case 'R': case 'S': case 'p': case 'r': case 's':
                phone_number[i] = '7';
                printf("%c", phone_number[i]);
                break;
            case 'T': case 'U': case 'V': case 't': case 'u': case 'v':
                phone_number[i] = '8';
                printf("%c", phone_number[i]);
                break;
            case 'W': case 'X': case 'Y': case 'w': case 'x': case 'y':
                phone_number[i] = '9';
                printf("%c", phone_number[i]);
                break;
            default: 
                printf("%c", phone_number[i]);
                break; 
        }
    }
    return 0;
}
