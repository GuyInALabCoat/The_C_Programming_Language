# include <stdio.h>

/* test that the expression getchar() != EOF is equal to either 0 or 1 */

main()
{
	printf("%d", (getchar() != EOF));
}
