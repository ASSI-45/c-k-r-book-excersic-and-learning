#include <stdio.h>

int main(void) {
  int non_octal = 5;
  
  printf("%x\n", &non_octal); // was meant to show case octal but did hex instead

  return 0;
}
