#include <stdio.h>

/**
 * main - print alphabet in lower cases
 *
 * Description: print alphabet in lower cases
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	printf("\n");

	return (0);
}
