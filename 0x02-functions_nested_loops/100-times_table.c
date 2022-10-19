#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints a times table of given number
 *
 * @n: the number to be printed
 *
 * Return: 0 (success)
 */
void print_times_table(int n)
{
	int a, b, d;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				d = a * b;

				if (b != 0)
				{
					printf(", ");
					if (d < 100)
						printf(" ");
					if (d < 10)
						printf(" ");
				}
				printf("%d", d);
			}
			printf("\n");
		}
	}
}
