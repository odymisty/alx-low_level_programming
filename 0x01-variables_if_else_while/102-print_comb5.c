#include <stdio.h>

/**
 * main - print all possible combination of two, two digits
 *
 * Description: Using for loop to print combination of numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int d, e, f, g, h, i;

	for (d = 0; d <= 9; d++)
	{
		for (e = 0; e <= 9; e++)
		{
			for (f = 0; f <= 9; f++)
			{
				for (g = 0; g <= 9; g++)
				{
					h = (d * 10) + e;
					i = (f * 10) + g;

					if (h < i)
					{
						putchar(d + '0');
						putchar(e + '0');
						putchar(' ');
						putchar(f + '0');
						putchar(g + '0');;

						if (d == 9 && e == 8 && f == 9 && g == 9)
							break;
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
