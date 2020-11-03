#include <stdio.h>

/* print histogram of char frequency */
main() {
				int c, i, j;
				int chars[126];

				for (i = 0; i < 126; ++i)
								chars[i] = 0;

				while ((c = getchar()) != EOF)
								++chars[c];

				printf(" |1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20\n");
				for (i = 0; i < 126; ++i) {
								printf("%c|", i);
								for (j = 0; j < chars[i]; j++)
												printf("*");
								printf("\n");
				}
}
