#include <stdio.h>
#include <stdlib.h>

void win() {
  printf("you win!\n");
  exit(0);
}

void echo() {
  char buff[8];
  gets(buff);
  printf("you wrote %s\n",buff);
}

int main() {
  echo();
  return 0;
}
