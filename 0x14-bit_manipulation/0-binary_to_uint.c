#include "main.h"
/**
 * _pow - calculates the power of 2
 * @p: the power or the exponent
 * Return: the result of the power
 */
unsigned int _pow(int p)
{
	if (p == 1)
		return (2 * 1);
	return (2 * _pow(p - 1));
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the number to convert
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
	}
	i--;
	while (i >= 0)
	{
		if (b[i] == 1)
			num += _pow(i);
	}
	return (num);
}
