#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: pointer to a char
 * Return: the lenght of s
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	return (l);
}
