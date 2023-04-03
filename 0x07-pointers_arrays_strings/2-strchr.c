#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to char
 * @c: char
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int i;
	char *l = 0; /* Located character */

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			l = s + i;
	}
	return (l);
}
