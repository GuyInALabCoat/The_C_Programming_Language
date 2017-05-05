#include <stdio.h>

#define	ALPHABET_SIZE	26
/* prints a histogram of character frequencies passed through input */

main()
{
	int c, i, j, k;
	int alphabet[ALPHABET_SIZE];

	for (i = 0; i < ALPHABET_SIZE; i++)
	{
		alphabet[i] = 0;
	}

	while((c = getchar()) != EOF)
	{
		if ( 'a' <= c && c <= 'z' )
		{
			++alphabet[c - 'a'];
		}
		else if ( 'A' <= c && c <= 'Z' )
		{
			++alphabet[c - 'A'];
		}
	}

	printf("Histogram of character frequencies\n");

	for (j = 0; j < ALPHABET_SIZE; j++)
	{
		printf("%3c |", (j + 'a'));
		{
			for (k = 0; k < alphabet[j]; k++)
			{
				printf("-");
			}
		}

		printf("\n");
	}
}

