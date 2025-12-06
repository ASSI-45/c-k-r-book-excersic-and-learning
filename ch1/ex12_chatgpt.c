#include <stdio.h>
#include <ctype.h>

int main(void) {
    int c;
    int in_word = 0;

    while ((c = getchar()) != EOF) {
        if (isspace(c)) {
            if (in_word) {
                putchar('\n');   // end of a word
                in_word = 0;
            }
        } else {
            putchar(c);
            in_word = 1;
        }
    }

    // If the input ended while inside a word, end the last line.
    if (in_word) {
        putchar('\n');
    }

    return 0;
}

