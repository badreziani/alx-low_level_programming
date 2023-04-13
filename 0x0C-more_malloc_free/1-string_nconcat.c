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
	unsigned int x, y, len;

	len = 0;
	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';
	while (s1[len] != '\0')
		len++;
	new_s = malloc((len + n) * sizeof(*new_s) + 1);
	if (new_s == 0)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
		new_s[x] = s1[x];
	for (y = 0; (x <= len + n) && s2[y] != '\0'; x++, y++)
		new_s[x] = s2[y];
	new_s[x] = '\0';
	return (new_s);
}
