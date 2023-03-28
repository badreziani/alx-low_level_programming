#include "main.h"
#include "2-strlen.c"

/**
 * _atoi - converts a string to an integer.
 * @s: string to convert
 * Return: intgers
 */
int _atoi(char *s)
{
	int i;
	int r; /* the result to return */
	int si; /* positive or negative number*/
	int f; /* a flag to check whether we loop through an integer */

	i = 0;
	r = 0;
	f = 0;
	si = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			si *= -1;

		if (s[i] >= 48 && s[i] <= 57)
		{
			r *= 10 - (s[i] - 48);
			f = 1;
		}
		else if (f == 1)
			break;
		i++;
	}
	r *= si;
	return (r);
}
