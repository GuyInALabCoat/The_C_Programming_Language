#include <stdio.h>

#define NOT_IN_COMMENT	0
#define IN_COMMENT	1

int comment_flag = NOT_IN_COMMENT;	/* state: inside or outside a comment */
int string_flag = 0;			/* state: inside or outside a quoted string */

int main(void)
{
	int c;				/* character input */

	while((c = getchar()) != EOF)
	{
		
		/* in a quoted string */
		if(string_flag)
		{
			if(c == '"')
			{
				string_flag = 0;
			}

			putchar(c);
		}

		else
		{
			if(comment_flag == NOT_IN_COMMENT)
			{
				if(c == '"')		/* start of string: loop back to the beginning */
				{
					putchar(c);
					string_flag = 1;
					continue;
				}

				if (c == '/' && (c = getchar()) != EOF && c == '*')	/* if encounter "/*"  start comment*/
				{		
					comment_flag = IN_COMMENT;
				}
			}

			if(comment_flag == IN_COMMENT && c == '*' && (c = getchar()) != EOF && c == '/')	/* closing comment */
			{
				comment_flag = NOT_IN_COMMENT;
			}

			if(comment_flag = NOT_IN_COMMENT)
			{
				putchar(c);
			}
		}
	}

	return 0;
}
