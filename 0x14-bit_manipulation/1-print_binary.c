#include "main.h"

/**
 * print_binary -  prints the binary representation of a number
 * @n: the number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, size, len = 0;
	unsigned long int bit;

	size = sizeof(n) * 8 - 1;
	for (i = size ; i >= 0; i--)
	{
		bit = n >> i;

		if (bit & 1)
		{
			printf("1");
			len++;
		}
		else if (len != 0)
			printf("0");
	}
	if (len == 0)
		printf("0");
}
