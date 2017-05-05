#include <stdio.h>

#define	LOWER	0
#define	UPPER	300
#define STEP	20

float fahr_to_cel(float);

main()
{
	float fahr;

	fahr = LOWER;
	
	printf("fahr    cel\n");

	while(fahr <= UPPER)
	{
		printf("%4.0f %6.1f\n", fahr, fahr_to_cel(fahr));
		fahr = fahr + STEP;
	}
}

float fahr_to_cel(float fahr)
{
	return (5.0/9.0) * (fahr - 32.0);
}
