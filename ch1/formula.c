#include <stdio.h>

int main(){
  int fahr, celsius;
  int lower, higher, step;

  lower = 0;
  higher = 200;
  step = 20;

  fahr = lower;
  
  while (fahr <= higher) {
    celsius = 5 * (fahr-32) / 9;
    printf("%d\t %d\n", fahr, celsius);
    fahr = fahr + step;
  };
}
