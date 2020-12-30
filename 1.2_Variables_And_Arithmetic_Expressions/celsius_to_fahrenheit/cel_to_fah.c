#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* print Celsius-Fahrenheit table
 * for cels = 0, 20, ..., 300; */
main() {
	float cels, fahr;
	int lower, upper, step;

	// print column headers
	printf("%3s\t%6s\n", "cels", "fahr");

	cels = LOWER;
	while(cels <= UPPER) {
		fahr = (cels * (9.0/5.0)) + 32;
		printf("%3.0f\t%6.0f\n", cels, fahr);
		cels = cels + STEP;
	}
}
