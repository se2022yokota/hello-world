#include <stdio.h>

int main(void) {
  char str[] = "hello";
  int i = 0;
  printf("mozi : ");
  for (i = 0; str[i] != '\0'; i++) {
    printf("%c", str[i]);
  }
  printf("\nnagasa : %d\n", i);
  return 0;
}