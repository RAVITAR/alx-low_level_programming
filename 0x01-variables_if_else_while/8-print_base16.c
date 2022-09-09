#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = '0';
	char ravi = 'a';

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (ravi = 'a'; ravi <= 'f'; ravi++)
		putchar(ravi);

	putchar('\n');
	return (0);
}
