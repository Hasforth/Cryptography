#include <stdio.h>

char *vigenere_encrypt(char *plaintext, char *key) {
  for (int i = 0; plaintext[i] != '\0'; i++) {
    char ch = plaintext[i];
    if (ch >= 'A' && ch <= 'Z') {
      plaintext[i] = ((ch - 'A' + key[i]) % 26) + 'A';
    }
  }
  puts(plaintext);
}

char *vigenere_decrypt(char *ciphertext, char *key) {
  for (int i = 0; ciphertext[i] != '\0'; i++) {
    char ch = ciphertext[i];
    if (ch >= 'A' && ch <= 'Z') {
      ciphertext[i] = ((ch - 'A' - (key[i] - 'A') + 'A') % 26) + 'A';
    }
  }
  puts(ciphertext);
}