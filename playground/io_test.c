#include <stdio.h>

#define EXIT_SUCCESS 0

int main(void)
{
    int fille;

    while ((fille = getchar()) != EOF) {
	putchar(fille);
    }

    return EXIT_SUCCESS;
}
