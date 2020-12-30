#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* print Celsius-Fahrenheit table */
main() {
	int cels;

	for (cels = UPPER; cels >= LOWER; cels=cels-STEP) {
		printf("%3d %6.0f\n", cels, ((9.0/5.0)*cels)+32);
	}
}
