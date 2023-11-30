#include <stdio.h>
#include <ctype.h>
#include <string.h>

void vigenereEncrypt(char message[], char key[]) {
    int messageLength = strlen(message);
    int keyLength = strlen(key);

    for (int i = 0; i < messageLength; i++) {
        if (isalpha(message[i])) {
            int keyIndex = i % keyLength;
            char adjustedKey = isupper(message[i]) ? toupper(key[keyIndex]) : tolower(key[keyIndex]);

            if (isupper(message[i])) {
                message[i] = 'A' + (message[i] - 'A' + adjustedKey - 'A') % 26;
            } else {
                message[i] = 'a' + (message[i] - 'a' + adjustedKey - 'a') % 26;
            }
        }
    }
}

void vigenereDecrypt(char message[], char key[]) {
    int messageLength = strlen(message);
    int keyLength = strlen(key);

    for (int i = 0; i < messageLength; i++) {
        if (isalpha(message[i])) {
           
            int keyIndex = i % keyLength;
            char adjustedKey = isupper(message[i]) ? toupper(key[keyIndex]) : tolower(key[keyIndex]);

            
            if (isupper(message[i])) {
                message[i] = 'A' + (message[i] - adjustedKey + 26) % 26;
            } else {
                message[i] = 'a' + (message[i] - adjustedKey + 26) % 26;
            }
        }
    }
}

int main() {
    char message[1000];
    char key[100];
    
    printf("Entrez le message à coder : ");
    fgets(message, sizeof(message), stdin);

    message[strcspn(message, "\n")] = '\0';

    printf("Entrez la clé : ");
    scanf("%s", key);

    vigenereEncrypt(message, key);
    printf("Message codé : %s\n", message);

    vigenereDecrypt(message, key);
    printf("Message décodé : %s\n", message);

    return 0;
}
