#include "main.h"

/**
 * print alphabet - print alphabets in lower cases
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char l;

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
