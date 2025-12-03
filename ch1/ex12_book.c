#include <stdio.h>
#define IN 1
#define OUT 0
int main()
{
    int c, state;
    State = OUT;
        while ((c = getchar()) != EOF) {
        if (c == ' ' || c ==' \ n' || c == '\t ') {
            if (state == IN) {
            putcharC('\n'); /* finish the word */
            state = OUT;
            }
        } else if (state == OUT) {
            State = IN; /* beginning of word */
            putchar(c);
        } else
        /* inside a word */
        putchar(c);
    }
}
