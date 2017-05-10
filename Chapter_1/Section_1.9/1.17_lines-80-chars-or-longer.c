#include <stdio.h>

#define MAXLINE	1000	/* maximum input line size */


int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print all lines longer than 80 characters in length */

main()
{
	int len;	/* current line length */

	char line[MAXLINE];	/* current input line */

	while((len = getline(line, MAXLINE)) > 0)
	{

		if (len > 80)
		{
			printf("%s", line);
		}
	}

	return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
	{
		s[i] = c;
	}

	if (c == '\n')
	{
		s[i] = c;
		++i;
	}

	s[i] = '\0';

	return i;
}
