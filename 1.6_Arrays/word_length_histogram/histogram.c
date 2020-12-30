#include <stdio.h>

#define IN 0 /* in a word */
#define OUT 1 /* out of a word */

/* create histogram of the length of each word in the input */
main() {
    int c, i, j, b, l;
    int frequency[10];

    b = OUT;
    l = 0;

    for (i = 0; i < 10; ++i) {
        frequency[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (b == IN) {
                ++frequency[l];
                l = 0;
                b = OUT;
            }
        } else {
            b = IN;
            ++l;
        }
    }

    printf("  |1 2 3 4 5 6 7 8 9\n");
    for (i = 0; i < 10; ++i) {
        printf("%d |", i);
        for (j = 0; j < frequency[i]; ++j) {
            printf("*");
        }
        printf("\n");
    }
}
