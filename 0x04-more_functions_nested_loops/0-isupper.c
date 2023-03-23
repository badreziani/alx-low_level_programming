#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: character
 * Return: 1 if c is upper, 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (0);
}
