#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always returns 0
 *
 */
int main(void)
{
	unsigned char a = '0';
	int ravi;

	for (ravi = 0; ravi < 10; ravi++)
	{
		putchar(a);
		ravi++;
	}
	a = '1';
	for (ravi = 0; ravi < 6; ravi++)
	{
		putchar('0' + a);
		a++;
	}
	putchar('\n');
	return (0);
}
