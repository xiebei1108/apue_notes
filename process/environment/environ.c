#include <stdio.h>
#include <stdlib.h>

int main() {
  extern char** environ;
  for (int i = 0; environ[i] != NULL; ++i) {
    printf("%s\n", environ[i]);
  }
}
