#include <stdio.h>

#define MAXLINE	1000	/* maximum input line size */

int getline(char line[], int maxline);

/* removes trailing blanks and tabs from each line of input, and to delete entirely blank lines */

main()
{
	int len;	/* current line length */
	char line[MAXLINE];	/* current input line */

	while ((len = getline(line, MAXLINE)) > 0)
	{
		if(len > 1) 
		{
			printf("%s", line);
		}
	}
	
	return 0;	
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
	int c, i, prevBlank;

	prevBlank = 0;

	for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
	{
		
		if (c == ' ' || c == '\t' && prevBlank == 0)
		{
			s[i] = ' ';
			++prevBlank;
		}
		
		if (c != ' ' && c != '\t')
		{
			s[i] = c;

			if (prevBlank == 1)
			{
				prevBlank = 0;
			}
		}
	}

	if (c == '\n')
	{
		s[i] = c;
		++i;
	}

	s[i] = '\0';

	return i;
}
