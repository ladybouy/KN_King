#include <stdio.h>

#define SIZE 80

void encrypt(char *message, int shift);

int main(void)
{
    char ch;
    char message[SIZE];
    int shift;

    printf("Enter message to be encrypted: ");
    scanf("%s", message);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    encrypt(message, shift);

    return 0;
}

void encrypt(char *message, int shift)
{
    char encrypted_message[SIZE] = {0};

    printf("Encrypted message: ");
    for (int i = 0; message[i] != 0; i++) {
        if (message[i] >= 'A' && message[i] <= 'Z' ) {
            encrypted_message[i] = ((message[i] - 'A') + shift) % 26 + 'A';
        } else if (message[i] >= 'a' && message[i] <= 'z') {
            encrypted_message[i] = ((message[i] - 'a') + shift) % 26 + 'a';
        } else {
            encrypted_message[i] = message[i];
        }
    }
    for (int i = 0; encrypted_message[i] != 0; i++) {
        printf("%c", encrypted_message[i]);
    }
    printf("\n");
}
