#include "main.h"

/**
 * _pow - calculates the power of 2
 * @b: the base, in our case it will be always 2
 * @p: the power or the exponent
 * Return: the result of the power
 */
unsigned int _pow(unsigned int b, unsigned int p)
{
	if (p != 0)
		return (b * _pow(b, p - 1));
	return (1);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the number to convert
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i, x;

	if (!b || b[0] == '\0')
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
	}
	x = --i;
	while (x >= 0)
	{
		if (b[i - x] == '1')
			num += _pow(2, i - x);
		x--;
	}
	return (num);
}
