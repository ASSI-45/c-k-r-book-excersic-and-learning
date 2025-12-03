#include <stdio.h>

// replace backspace, tab and \\ with the representive chars
// but due to i am running this on debian and not on unix
// it think the backspace one won't work

int main(void)
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
          printf("\\t");
        }
        if (c == '\b') {
          printf("\\b");
        }
        if (c == '\\') {
          printf("\\");
        }
        if (c != '\b') {
            if (c != '\t') {
                if (c != '\\') {
                  putchar(c); 
                }
            }
        }
    }
    return 0;
}
