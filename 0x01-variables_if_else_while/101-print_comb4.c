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
	int a, b, d;

	for (a = 0; a <= 7; a++)
	{
		for (b = 1; b <= 8; b++)
		{
			for (d = 2; d <= 9; d++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(d + '0');
				if (a != 7 || b != 8 || d != 9)
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
