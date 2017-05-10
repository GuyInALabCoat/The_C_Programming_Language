#include <stdio.h>

#define	COLUMN_WIDTH	8	/* number of characters in tab column */

/* replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing */

main()
{

	int c, i, j, nc, num_spaces, num_tabs, white_spaces;

	num_spaces = nc = num_tabs = 0;

	while((c = getchar()) != EOF)
	{

		if(c != ' ')
		{
			putchar(c);
			++nc;
		}

		else 
		{
			++num_spaces;

			while((c = getchar()) == ' ')	 //count up total number of spaces 
			{
				++num_spaces;
			}

			num_spaces = (num_spaces - (COLUMN_WIDTH - (nc % COLUMN_WIDTH)));

			num_tabs = 1 + (num_spaces / COLUMN_WIDTH);	

			for(i = 0; i < num_tabs; ++i)
			{
				putchar('\t');	 /* replace spaces with largest whole number of tabs */ 
			}

			white_spaces = (num_spaces % COLUMN_WIDTH);

			for(j = 0; j < white_spaces; ++j)
			{
				putchar(' ');	/* replace remainder with spaces */
			}

			num_spaces = 0;
			nc = 1;
			putchar(c);	/* put last character that failed the comparison */
		}
	}
}

