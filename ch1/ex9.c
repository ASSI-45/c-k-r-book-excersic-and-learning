#include <stdio.h>

int main(void)
{
    int c;
    int inspace = 0; // Tracks if we've just seen a space

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (inspace == 0) {
                inspace = 1;
                putchar(c);
            }
        } else {
            inspace = 0;
            putchar(c);
        }
    }
    return 0;
}
