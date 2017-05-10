#include <stdio.h>

#define MAXLINE	1000	/* maximum input size */

int getline(char line[], int maxline);
void reverse(char s[]);

main()
{
	int len;	/* current line length */
	char line[MAXLINE];	/* current input line */

	while ((len = getline(line, MAXLINE)) > 0)
	{
		reverse(line);
		printf("%s", line);
	}

	return 0;
}

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

void reverse(char string[])
{

	int i, j, temp;

	i = j = 0;

	while(string[i] != '\0' && string[i] != '\n')
	{
		++i;
	}

	--i;

	while (j < i)
	{
		temp = string[i];
		string[i] = string[j];
		string[j] = temp;

		--i;
		++j;
	}
}
