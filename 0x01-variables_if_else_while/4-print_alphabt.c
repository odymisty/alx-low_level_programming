#include <stdio.h>

/**
 * main - Print the alphabet except q and e
 *
 *Decription: print the alphabet except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c, e, q;

	e = 'e';
	q = 'q';

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != e && c != q)
			putchar(c);
	}
		printf("\n");

	return (0);
}
