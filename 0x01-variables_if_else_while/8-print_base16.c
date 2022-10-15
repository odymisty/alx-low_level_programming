#include <stdio.h>

/**
 * main - Print hexadecimal numbers.
 *
 * Decription: print hexadecimal numbers using putchar function
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int d;
	char c;

	for (d = 0; d <= 9; d++)
		putchar(d + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
