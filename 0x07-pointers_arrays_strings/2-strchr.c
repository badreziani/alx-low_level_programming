#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to char
 * @c: char
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *l = 0; /* Located character */

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			l = s + i;
			break;
		}
		i++;
	}
	return (l);
}
