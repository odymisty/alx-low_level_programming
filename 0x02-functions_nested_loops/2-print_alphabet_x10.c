#include "main.h"

/**
 * main - print alphabet 10 times
 *
 * print_alphabet_x10 -  print alphabet 10 times
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int c = 1;
	char l;

	while (c <= 10)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
		c++;
	}
}

