#include <stdio.h>
#include <string.h>

/**
 * main - print all possible combination of single digit number
 *
 * Description: Do the above using putchar and for loop
 *
 * Return: 0 (success)
 */
int main(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{	putchar(d + '0');
		putchar(',');
	}
		if (d <= 9)
			putchar(' ');
		putchar('\n');
	return (0);
}
