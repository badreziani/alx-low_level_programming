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
	unsigned int a, b, c, d;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	if (n > b)
		new_s = malloc((a + b + 1) * sizeof(*new_s));
	else
		new_s = malloc((a + n + 1) * sizeof(*new_s));
	if (new_s == 0)
		return (NULL);

	for (c = 0; c < a; c++)
		new_s[c] = s1[c];
	for (d = 0; d < n && d < b; d++, c++)
		new_s[c] = s2[d];
	new_s[c] = '\0';
	return (new_s);
}
