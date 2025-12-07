#include <stdio.h>

#define SAFE_EXIT 0

void tempurture() {
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    /* lower limit of temperatuire scale */
    /* upper limit */
    /* step size */
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
} // i don't understand this error yet

int main() {
    tempurture();
    return SAFE_EXIT;
}



