#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat -  concatenates two strings
 * @s1: pointer to char
 * @s2: pointer to char
 * @n: unsigned int
 * Return: pointer to char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_s;
	unsigned int x, y;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == 0)
		*s2 = '\0';

	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		if (y == n)
			break;
	new_s = malloc(sizeof(*new_s) * (x + y + 1));
	if (new_s == NULL)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
		new_s[x] = s1[x];
	for (y = 0; s2[y] != '\0'; y++)
	{
		if (y == n)
			break;
		new_s[x + y] = s2[y];
	}
	new_s[x + y] = '\0';
	return (new_s);
}
