#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

void reverse(char to[], char from[]);
int strlen(char s[]);
int getnextline(char line[], int maxline);

/* reverse a character array */
main()
{
    int len; /* current line length */
    int i;
    char line[MAXLINE]; /* current input line */
    char reversed[MAXLINE]; /* reversed current line */

    while ((len = getnextline(line, MAXLINE)) > 0) {
        reverse(reversed, line);
        for (i = 0; i <= len; ++i) {
            if (reversed[i] == '\n')
                continue;
            putchar(reversed[i]);
        }

        putchar('\n');
    }
}

/* reverse: reverse 'from' and store the result in 'to' */
void reverse(char to[], char from[])
{
    int i, j;

    j = strlen(from);

    for (i = 0; i <= j; ++i)
        to[i] = from[j-i];
}

/* strlen: returns the length of a string char array */
int strlen(char s[])
{
    int i;

    i = 0;

    while (s[i] != '\0')
        ++i;

    return i;
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
