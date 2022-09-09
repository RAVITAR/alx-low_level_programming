#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ravi = 'z';

	for (ravi = 'z'; ravi >= 'a'; ravi--)
		putchar(ravi);

	putchar('\n');

	return (0);
}
