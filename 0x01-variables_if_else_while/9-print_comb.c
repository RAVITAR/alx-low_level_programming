#include <stdio.h>

/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int ravi;

	for  (ravi = 10; ravi  < 20; ravi++)
	{
		putchar((ravi % 10) + '0');
		if (ravi != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
