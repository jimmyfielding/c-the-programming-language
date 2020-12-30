#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int getnextline(char line[], int maxline);

/* remove trailing blanks and tabs, completely delete blank lines */
main()
{
    int len; /* current line length */
    char line[MAXLINE]; /* current input line */
    char trailing[MAXLINE]; /* buffer to be used in case there are multiple consecutive non-trailing blanks */
    int i, j, k;

    j = 0;

    while ((len = getnextline(line, MAXLINE)) > 0)
        for (i = 0; i < len; ++i) {
            /* blank lines should be deleted */
            if (i == 0 && line[i] == '\n')
                break;
            /* store blank characters in case they are not trailing */
            if (line[i] == '\t' || line[i] == ' ') {
                trailing[j] = line[i];
                ++j;
                continue;
            }
            /* blanks were not trailing and should be printed */
            if (j > 0) {
                for (k = 0; k < j; ++k)
                    putchar(trailing[k]);

                j = 0;
            }

            putchar(line[i]);
            if (line[i] == '\n')
                break;
        }
}

/* getnextline: read a line into s, return length */
int getnextline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}