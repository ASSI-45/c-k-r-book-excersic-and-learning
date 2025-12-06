#include <stdio.h>
#include <ctype.h>

#define EXIT_SUCCESS 0
#define IN 0
#define OUT 1

int main(void)
{
    int c, len, word_in_or_out, words; // define vars

    words = 0; // word counet
    len = 0; // set the length of word variable to 0
    word_in_or_out = IN; // sets var word in or out to IN witch is 0

    while((c = getchar()) != EOF) { // scans untill EOF is called by C-d
        if(isspace(c)) { // checks if c is a space
            if (word_in_or_out == IN) { // if word is in then the scope exucutes
                word_in_or_out = OUT;
                words = words + 1;
            } else {
              word_in_or_out = OUT;
            }
        } else {
            len = len + 1;
            word_in_or_out = IN;
        }

    }

    printf("number of letters: %d\nnumber of words: %d", len, words);
    return EXIT_SUCCESS;
}
