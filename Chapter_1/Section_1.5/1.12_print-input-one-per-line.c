#include <stdio.h>

/* prints input stream to output with a single word per line */

main()
{
	int c;

	while((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			putchar('\n');
		}
		else
		{
			putchar(c);
		}
	}
}
