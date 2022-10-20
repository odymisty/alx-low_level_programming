#include "main.h"
/**
 * isupper - checks for uppercases
 * @c: character to check
 * Return: 1 if uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
