#include <stdio.h>

/**
 * int main()
{
    char digit[4];

    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            for (int k = j + 1; k < 10; k++)
            {
                digit[0] = i + '0';
                digit[1] = j + '0';
                digit[2] = k + '0';
                digit[3] = '\0';
		printf("%s\n", digit);		
            }
        }
    }
*/

/**
 * main - print different combination of two digits
 *
 * Description: Using for loop to print combination of numbers
 *
 * Return: Always 0
 */
int main(void)
{
        int d, e, f;

        for (d = 1; d < 100; d++)
        {
                if (d % 10 == 0 || d % 11 == 0 || ((int)(d % 10 * 10) + d / 10) < d)
                        continue;
                e = d / 10;
                putchar(e + '0');
                putchar(d % 10 + '0');

                if (d != 89)
                {
                        putchar(',');
                        putchar(' ');
                }
        }
        putchar('\n');

        return (0);
}

