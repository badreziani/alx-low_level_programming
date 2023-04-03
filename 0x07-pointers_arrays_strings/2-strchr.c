#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to char
 * @c: char
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	char *f = NULL;

	while (1)
	{
		if (*(s + i) == c)
		{
			f = s + i;
			break;
		}
		i++;
	}
	return (f);
}
