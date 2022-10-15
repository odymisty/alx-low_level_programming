#include <stdio.h>

/**
 * main - print different combination of two digits
 *
 * Description: Using for loop to print combination of numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int d, e;

	for (d = 1; d < 100; d++)
	{
		if (d % 10 == 0)
			continue;
		e = d / 10;
		putchar(e + '0');
		putchar(d % 10 + '0');

		if (d != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
