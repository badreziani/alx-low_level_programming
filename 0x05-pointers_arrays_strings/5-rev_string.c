#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a given string
 * @s: pointer to the string to reverse
 * Return: nothing
 */
void rev_string(char *s)
{
	int l; /* to store lenght of the string */
	int i;
	char tmp;

	l = _strlen(s);
	for (i = 0; i <= l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = tmp;
	}
}
