#include <stdio.h>
#include <signal.h>

void handler(int sig) {
    printf("\nCtrl+C pressed, but I won't quit.\n");
}

int main() {
    signal(SIGINT, handler);  // override default Ctrl+C action

    while (1) {
        // your program runs forever until killed another way
    }
}
