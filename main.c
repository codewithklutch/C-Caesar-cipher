#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Defines the caesarCipher function
void caesarCipher(char* messageText, int key);

// This is the main application
int main(void) {
  int key = 13;
  char messageText[101];

  // Asks user to enter in message data which stores to a variable
  printf("Enter a Message: \n");
  fgets(messageText, sizeof(messageText), stdin);

  // Prints the encrypted message
  printf("\nEncrypted Message: \n");
  caesarCipher(messageText, key);
}

// Shifts user message data with the key and converts it
void caesarCipher(char* messageText, int key) {
  int i=0;
  int cipherValue;
  char cipher;

  while (messageText[i] != '\0' && strlen(messageText)-1 > i) {
    cipherValue = ((int)messageText[i] -97 + key) % 26 + 97;
    cipher = (char)(cipherValue);

    printf("%c", cipher);
    i++;
  }
}