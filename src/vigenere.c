#include <stdio.h>
#include <string.h>

char *vigenere_encrypt(char *message, char *key) {
  int j = 0;
  for (int i = 0; message[i] != '\0'; i++) {
    char ch = message[i];
    int cipher = strlen(key);
    if (ch >= 'A' && ch <= 'Z') {
      message[i] = ((ch - 'A' + ((key[j % cipher]) - 'A')) % 26) + 'A';
      j++;
    }
  }
  puts(message);
}

char *vigenere_decrypt(char *ciphertext, char *key) {
  int j = 0;
  for (int i = 0; ciphertext[i] != '\0'; i++) {
    char ch = ciphertext[i];
    int decipher = strlen(key);
    if (ch >= 'A' && ch <= 'Z') {
      ciphertext[i] =
          ((ch - 'A' - ((key[j % decipher]) - 'A') + 26) % 26) + 'A';
      j++;
    }
  }
  puts(ciphertext);
}