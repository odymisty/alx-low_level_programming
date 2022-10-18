#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @a: number to be computed
 *
 * Return: Value of last integer
 */
int print_last_digit(int a)
{
	int v = a % 10;

	if (v < 0)
	{
		v = -(v);
		_putchar(v + '0');
		return (v);
	}
	else
	{
		_putchar(v + '0');
		return (v);
	}
	return (0);
}
