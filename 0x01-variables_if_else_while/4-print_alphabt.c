#include <stdio.h>
/**
 * main - Entry point
 *
 * Retrun: Always 0 (Success)
 */
int main(void)
{
	char ravi = 'a';

	for (ravi = 'a'; ravi <= 'z';)
	{
		if (ravi == 'q')
		{
			ravi++;
		}
		else if (ravi == 'e')
		{
			alpha++;
		}
		else
		{
			putchar(ravi);
			ravi++;
		}
	}

	putchar('\n');

	return (0);
}
