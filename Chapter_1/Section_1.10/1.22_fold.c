#include <stdio.h>

#define	PAGE_WIDTH	60	/* number of characters in single line */

main()
{

	int c, nc, last_blank;		/* variables for characters, num of chars, and index of last blank */

	last_blank = nc = 0;

	while((c = getchar()) != EOF)
	{

		if(c != ' ' && c != '\t')
		{
			putchar(c);
			++nc;

		}

		if(c == ' ' || c == '\t')
		{
			putchar(c);
			
			if(c == '\t')
			{
				nc = (nc + (8 - (nc % 8)));	/* num of char + size of column - num of chars in column */
				last_blank = nc;
			}
			else
			{
				last_blank = ++nc;
			}
		}
		
		/* determines where to fold */

		if((PAGE_WIDTH - last_blank) < 8)	/* allows small words to be included at the end of a line */
		{
			putchar(c);
			putchar('\n');
			nc = 1;
			last_blank = 0;
		}

		/* for larger words or lines without whitespace */

		else if((PAGE_WIDTH - nc) == 1)	/* output line contains 39 characters */
		{

			if ((c = getchar()) != EOF && c == ' ' || c == '\t')	/* if next char blank, start new line */
			{
				putchar('\n');
				nc = 0;
			}

			else 
			{
				putchar('-');	/* else hyphenate the word and begin new line */
				putchar('\n');
				putchar(c);
				nc = 1;
			}

			last_blank = 0;
		}
	}
}

