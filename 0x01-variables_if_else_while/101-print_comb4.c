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
        int a, b, c;

       /** for (d = 1; d < 100; d++)
        {
                if (d % 10 == 0 || d % 11 == 0 || d % 111 == 0 || ((int)(d % 10 * 10) + d / 10) < d)
                        continue;
                e = d / 10;
		f = d / 10;
                putchar(e + '0');
		putchar(f + '0');
                putchar(d % 10 + '0');

                if (d != 89)
                {
                        putchar(',');
                        putchar(' ');
                }
        }*/

	for (a = 0; a <= 7; a++)
	{
		for (b = 1; b <= 8; b++ )
		{
			for (c = 2; c <= 9; c++)
			{
				if (abc % 10 == 0)
					continue;
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
		

				if (a != 7 && b != 8 && c != 9)
                		putchar(',');
				putchar(' ');
			}
		}
	}




        putchar('\n');

        return (0);
}
