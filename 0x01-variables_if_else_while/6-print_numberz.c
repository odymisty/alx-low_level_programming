#include <stdio.h>

/**
 *
 * main - print single digit
 *
 * Description: Print digit with putchar function
 *
 *
 * Return: Always 0 (success)
 *
 *
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar(x);
	printf("\n");

	return (0);

}

