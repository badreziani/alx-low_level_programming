#include <stdio.h>

/**
 * main -  checks for checks for a digit (0 through 9)
 * Return: 0
 */
int main(void)
{
	long v, i;

	v = 612852475143;

	for (i = 2; v > i; i++)
	{
		while (v % i == 0)
		{
			v = v / i;
		}
	}
	printf("%lu", i);
	putchar('\n');

	return (0);
}
