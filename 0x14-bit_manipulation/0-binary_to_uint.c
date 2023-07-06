#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the number to convert
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unit = 0, two = 1;
	int len, i, bit;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	for (i = 0; i < len; i++)
	{
		if (b[len - i - 1] < '0' || b[len - i - 1] > '1')
			return (0);
		if (b[len - i - 1] == '0')
			bit = 0;
		else
			bit = 1;
		unit += bit * two;
		two *= 2;
	}
	return (unit);
}
