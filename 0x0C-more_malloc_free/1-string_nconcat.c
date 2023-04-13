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
	unsigned int len, x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = 0;
	for (x = 0; s1[x] != '\0'; x++)
		len++;
	for (x = 0; s2[x] != '\0' || x < n; x++)
		len++;
	new_s = malloc(sizeof(*new_s) * (len + 1));
	if (new_s == NULL)
		return (NULL);
	for (x = 0, y = 0; s1[x] != '\0' || (s2[y] != '\0' || y < n);)
	{
		if (s1[x] == '\0')
		{
			new_s[x + y] = s2[y];
			y++;
		}
		else
		{
			new_s[x + y] = s1[x];
			x++;
		}
	}
	new_s[x + y] = '\0';

	return (new_s);
}
