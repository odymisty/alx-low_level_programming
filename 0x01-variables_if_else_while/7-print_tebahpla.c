#include <stdio.h>

/**
 * main - print lower alphabet in reverse
 *
 * Description: Decrementally print lower alphabet using putchar function
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar (c);
	}
	 putchar ('\n');

	return (0);
}
