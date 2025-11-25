#include <stdio.h>

// verfing if getchar() != EOF is equal to 1 or 0
int main(void)
{
    int answer = getchar() != EOF;
    printf("%d\n", answer); // the answer should be 1
    return 0;
}
