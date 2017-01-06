#include <stdio.h>

/* print Celsius-Fahrenheit table for celsius = -20, 0, ..., 200 */

main()
{

	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */
	
	celsius = lower;

	printf("%7s %6s\n", "Celsius", "Fahr");	/* print heading for table */
	
	while (celsius <= upper){
		fahr = (9.0/5.0 * celsius) + 32.0;
		printf("%7.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}	
}
