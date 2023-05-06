#include <cstring>
#include <iostream>

using namespace std;

void trimSpaces(char *input) {

  if (input[0] == '\0')
    return;

  if (input[0] == ' ') {

    for (int i = 0; i <= strlen(input); i++) {
      input[i] = input[i + 1];
    }
    trimSpaces(input);
  } else {
    trimSpaces(input + 1);
  }
}
