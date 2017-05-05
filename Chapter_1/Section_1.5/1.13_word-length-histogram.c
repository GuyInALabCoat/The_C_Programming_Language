#include <stdio.h>

#define MAX_WORD_LENGTH	15
#define IN	1	/* inside a word */
#define OUT	0	/* outside a word */

/* count the number of characters in a word and print out a histogram of word lengths passed from input */

main() 
{

	int c, nc, i, j, k, state;
	int wordlengths[MAX_WORD_LENGTH];

	nc = 0;
	state = OUT;

	for (i = 0; i < MAX_WORD_LENGTH; i++)
	{
		wordlengths[i] = 0;
	}

	while((c = getchar()) != EOF) 
	{

		if (c == ' ' || c == '\n' || c == '\t')
		{
			if (state == IN)
			{
				++wordlengths[nc];
				state = OUT;
			}

			nc = 0;
		}
		else
		{
			state = IN;
			++nc;
		}
	}

	printf("Word Length Histogram:\n");

	for(j = 0; j < MAX_WORD_LENGTH; j++)
	{
		printf("%3d |", j);

		for (k = 0; k < wordlengths[j]; k++)
		{
			printf("-");
		}

		printf("\n");
	}
}
