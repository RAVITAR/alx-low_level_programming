#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ravi = 'a';
	char ravitar = 'A';

	for (ravi = 'a'; ravi <= 'z'; ravi++)
		putchar(ravi);
	for (ravitar = 'A'; ravitar <= 'Z'; ravitar++)
		putchar(ravitar);

	putchar('\n');

	return (0);
