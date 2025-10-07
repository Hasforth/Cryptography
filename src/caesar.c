#include <stdio.h>

char *caesar_encrypt(char *message) {
  for (int i = 0; message[i] != '\0'; i++) {
    char ch = message[i];
    if (ch >= 'A' && ch <= 'Z') {
      message[i] = ((ch - 'A' + 3) % 26) + 'A';
    }
  }
  puts(message);
}

char *caesar_decrypt(char *ciphertext) {
  for (int i = 0; ciphertext[i] != '\0'; i++) {
    char ch = ciphertext[i];
    if (ch >= 'A' && ch <= 'Z') {
      ciphertext[i] = ((ch - 'A' - 3) % 26) + 'A';
    }
  }
  puts(ciphertext);
}