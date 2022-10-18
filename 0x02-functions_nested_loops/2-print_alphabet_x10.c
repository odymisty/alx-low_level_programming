#include "main.h"

/**
 * main - print alphabet 10 times
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int c = 0;
	char l;

	while (c < 10)
	{
		while (l < 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		c++
	}
}

