#include <stdio.h>

main() {
				int c, b;

				while ((c = getchar()) != EOF) {
								if (c == ' ') {
												if (b == 1)
																continue;

												putchar(c);
												b = 1;
												continue;
								}

								if (b == 1)
												b = 0;

								putchar(c);
				}
}
