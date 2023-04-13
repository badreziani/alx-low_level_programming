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
	unsigned int x, y, i, j;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == 0)
		*s2 = '\0';

	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;
	if (n > y)
		new_s = malloc((x + y + 1) * sizeof(*new_s));
	else
		new_s = malloc((x + n + 1) * sizeof(*new_s));

	if (new_s == NULL)
		return (NULL);

	for (i = 0; i < x; i++)
		new_s[i] = s1[i];
	for (j = 0; j < n && j < y; i++, j++)
		new_s[i] = s2[j];
	new_s[i] = '\0';

	return (new_s);
}
