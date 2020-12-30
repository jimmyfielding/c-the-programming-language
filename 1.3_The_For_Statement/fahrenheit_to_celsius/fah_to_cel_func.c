#include <stdio.h>

#define LOWER 0 /* fahrenheit lower bound */
#define UPPER 300 /* fahrenheit upper bound */
#define STEP 20 /* increment */

/* converts fahrenheit to celsius */
float fahToCel(int i);

main() {
	int i;

	printf("%3s %6s\n", "fahr", "cels");
	for (i = LOWER; i < UPPER; i = i + STEP)
		printf("%3d %6.1f\n", i, fahToCel(i));

	return 0;
}

/* convert the input from fahrenheit to celsius */
float fahToCel(int i) {
	return (5.0/9.0)*(i-32);
}
