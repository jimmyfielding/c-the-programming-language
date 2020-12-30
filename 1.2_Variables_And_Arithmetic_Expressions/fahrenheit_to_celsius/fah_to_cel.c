#include <stdio.h>

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit of table */
#define STEP 20 /* step size of table */

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */
main() {
	float fahr, celsius;
	int lower, upper, step;

	printf("%3s\t%6s\n", "fahr", "cels");

	fahr = LOWER;
	while (fahr <= UPPER) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + STEP;
	}
}
