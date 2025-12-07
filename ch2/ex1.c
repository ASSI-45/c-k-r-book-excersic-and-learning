/* ====================================================== */
/* this code can't work because i havent seen structs yet */
/* ====================================================== */

#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <complex.h>

#define EXIT_SUCCESS 0


// some code chatgpt gave me
#define type_of(x) _Generic((x),       \
        int: "int",                    \
        float: "float",                \
        double: "double",              \
        char*: "char *",               \
        default: "unknown")


int main(void)
{
    // makes array to store values in 
    int len = 4;
    int types[len];

    // all the types used
    char normal_char = CHAR_MAX;
    short normal_short = SHRT_MAX;
    int normal_int = INT_MAX;
    long normal_long = LONG_MAX;
    // complex normal_complex = ;

    types[0] = normal_char;
    types[1] = normal_short;
    types[2] = normal_int;
    types[3] = normal_long;


    // for loop that prints the values
    for (int i = 0; i < len; i++) {
        printf("the max size for the c type %s is %d\n", type_of(types[i]), types[i]);
    }

    return EXIT_SUCCESS;
}
