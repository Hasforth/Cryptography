#include <stdio.h>

char *caesar_encrypt(char *message) {
  for (int i = 0; message[i] != '\0';
       i++) { // Goes through the message until it hits the NULL value
    char ch = message[i]; // Defines a char for every character in the message
    if (ch >= 'A' && ch <= 'Z') { // Keeps the area in upper case letters
      message[i] = ((ch - 'A' + 3) % 26) + 'A';
      /*Defines every character shifted 3 moves the the "right"
      % 26 is used to loop around whenever the new value for a character exceeds
      the number og letters available */
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