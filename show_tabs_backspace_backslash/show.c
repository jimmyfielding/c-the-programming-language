#include <stdio.h>

main() {
				int c;

				while ((c = getchar())) {
								if (c == '\t') {
												putchar('\\');
												putchar('t');
												continue;
								}

								if (c == '\b') {
												putchar('\\');
												putchar('b');
												continue;
								}

								if (c == '\\') {
												putchar('\\');
												putchar('\\');
												continue;
								}

								putchar(c);
				}
}
