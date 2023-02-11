#include <stdio.h>
#include <string.h>

void reverseStr(char str[]) {
  int len = strlen(str);
  for (int i = len - 1; i >= 0; i--) {
    char newChar = str[i];
    printf("%c", newChar);
  }
}

int main(int argc, char *argv[]) {

  char var[50];
  printf("Enter a word (ctrl-C to quit): \n");
  scanf("%s", var);
  printf("%s -> ", var);
  reverseStr(var);
  printf("\n");

  return 0;
}
