#include <stdio.h>

/* count the number of blanks, tabs and newlines passed to STDIN */

main()
{

	int c, blanks, tabs, newlines;

	blanks = 0;
	tabs = 0;
	newlines = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			++blanks;
		}
		
		else if (c == '\t')
		{
			++tabs;
		}

		else if (c == '\n')
		{
			++newlines;
		}

		else {}
	}

	printf("%d blanks, %d tabs, %d newlines\n", blanks, tabs, newlines);
}	
