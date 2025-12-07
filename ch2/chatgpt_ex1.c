#include <stdio.h>
#include <limits.h>

int main(void) {
    printf("Maximum values of C integer types:\n");
    printf("---------------------------------\n");

    printf("signed char      : %d\n", SCHAR_MAX);
    printf("unsigned char    : %u\n", UCHAR_MAX);

    printf("short            : %d\n", SHRT_MAX);
    printf("unsigned short   : %u\n", USHRT_MAX);

    printf("int              : %d\n", INT_MAX);
    printf("unsigned int     : %u\n", UINT_MAX);

    printf("long             : %ld\n", LONG_MAX);
    printf("unsigned long    : %lu\n", ULONG_MAX);

    printf("long long        : %lld\n", LLONG_MAX);
    printf("unsigned long long : %llu\n", ULLONG_MAX);

    return 0;
}

// I have this saved to remember something i don't understand.
