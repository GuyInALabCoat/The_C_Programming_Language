#include <stdio.h>

/* Symbolic Constants: replace given text with replacement text. Note No semicolon */

	#define LOWER	0	/* lower limit of table */
	#define UPPER	300	/* upper limit */
	#define STEP	20	/* step size */

	/* print Reverse Fahrenheit-Celsius table */
main()
{
  printf("%4s %6s\n", "Fahr", "Cels");	/* print heading for table */
  
	int fahr;

	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
		printf("%4d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));

}
