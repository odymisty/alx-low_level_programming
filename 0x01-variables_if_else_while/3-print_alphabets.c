#include <stdio.h>

/**
 * main - print alphabet in lower and upper cases
 *
 * Description: print alphabet in lower and upper cases
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	printf("\n");

	return (0);
}
