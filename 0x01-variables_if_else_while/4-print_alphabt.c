#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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
			ravi++;
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
