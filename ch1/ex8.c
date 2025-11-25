#include <stdio.h>

int main(void)
{

    int c, nl = 0, tab = 0, blanks = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++blanks;
        else if (c == '\t')
            ++tab;
        else if (c == '\n')
            ++nl;
    }
    printf("%d %d %d\n", nl, tab, blanks);

    return 0;
}
