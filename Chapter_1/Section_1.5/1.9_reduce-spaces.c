#include <stdio.h>

/* copies the input to the output, replacing each string of one or more blanks with a single blank*/
main()
{
	int c, prevBlank;

	prevBlank = 0;

	while((c = getchar()) != EOF)
	{
		if (c == ' ' && prevBlank == 0)	/* if no previous blank, print blank and mark flag */
		{
			putchar(c);
			++prevBlank;
		}

		if (c != ' ') /* if char is not a blank and flag raised, print character and reset flag */
		{
			putchar(c);

			if (prevBlank == 1)
			{
				prevBlank = 0;
			}
		}
	}
}
