#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unit = 0, two = 1;
	int len, i;

	if (b == NULL)
		return (0);
	len = sizeof(b) / sizeof(char);
	for (i = 0; i < len; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		unit += b[len - i - 1] * two;
		two *= 2;
	}
	return (unit);
}
