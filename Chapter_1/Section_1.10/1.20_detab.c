#include <stdio.h>

#define	COLUMN_WIDTH	8	/* number of characters per tab column */

/* replaces tabs in the input with the proper number of blanks to space to the next tab stop */

main()
{

	int c, i, nc;

	nc = 0;

	while((c = getchar()) != EOF)
	{

		if(c == '\t')
		{			/* amount for (tab - overhang) used by characters */
			for(i = 0; i < (COLUMN_WIDTH - (nc % COLUMN_WIDTH)); ++i)
			{
				putchar(' ');
			}

			nc = 0;	/* reset number of characters since last tab to 0 */
		}	
		else 
		{
			putchar(c);
			++nc;
		}
	}
}
