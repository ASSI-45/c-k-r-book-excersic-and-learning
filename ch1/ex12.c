#include <stdio.h>


int main() {
    // variables character and last space
    int c;
    int last = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') { // big oof if ma bradha
            if (last == 0) {
                putchar(c);
                last = 1;
            }
            if (last == 1) {
              putchar(c);
              // this literaly does nothing and still doesn't work :<
              // another oof if brodha
            }
        } 
        else {
          putchar(c);
          last = 0;
        }
    }
    return 0;
}
