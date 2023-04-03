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
	
	while (1)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
