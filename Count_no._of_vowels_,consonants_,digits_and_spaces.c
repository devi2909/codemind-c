#include <stdio.h>
int main() {
  char line[150];
  int vowels, consonant, digit, space;

  vowels = consonant = digit = space = 0;

  fgets(line, sizeof(line), stdin);

  for (int i = 0; line[i] != NULL; ++i) {
    if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' || line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U') {
      ++vowels;
    }
    else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
      ++consonant;
    }
    else if (line[i] >= '0' && line[i] <= '9') {
      ++digit;
    }
    else if (line[i] == ' ') {
      ++space;
    }
  }

  printf("Vowels: %d", vowels);
  printf("
Consonants: %d", consonant);
  printf("
Digits: %d", digit);
  printf("
White spaces: %d", space);
  return 0;
}