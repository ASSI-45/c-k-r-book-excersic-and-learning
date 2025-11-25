#include <stdio.h>

int main(void)
{

    int c, nl = 0, tab = 0, blanks = 0; // actualy not readable

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++blanks;
        else if (c == '\t')
            ++tab;
        else if (c == '\n')
            ++nl;
    }
    printf("%d %d %d\n", nl, tab, blanks); // call Ctrl+d to call EOF

    return 0;
}
