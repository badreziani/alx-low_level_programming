#include "main.h"
#include "2-strlen.c"

/**
 * _atoi - converts a string to an integer.
 * @s: string to convert
 * Return: intgers
 */
int _atoi(char *s)
{
	int i, j;
	int r; /* The result to return */

	r = 0;
	j = 0;

	if (_strlen(s) > 0)
	{
		if (s[j] == '-')
			j = 1;

		for (i = j; s[i] != '\0'; i++)
		{
			r = r * 10 + (s[i] - 48);
		}

		if (j == 1)
			r *= -1;
	}

	return (r);
}
