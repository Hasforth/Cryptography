#include <caesar.h>
#include <unistd.h>
#include <vigenere.h>
// Calls the libraries with functions i have made

int main(int argc, char *argv[]) {
  while (*argv[1] == 'e' && *argv[2] == 'c') {
    caesar_encrypt(argv[3]);
    return 0;
  }
  while (*argv[1] == 'd' && *argv[2] == 'c') {
    caesar_decrypt(argv[3]);
    return 0;
  }
  while (*argv[1] == 'e' && *argv[2] == 'v') {
    vigenere_encrypt(argv[3], argv[4]);
    return 0;
  }
  while (*argv[1] == 'd' && *argv[2] == 'v') {
    vigenere_decrypt(argv[3], argv[4]);
    return 0;
  }
}
