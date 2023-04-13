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
	char *n_str;
	unsigned int len, x, y;

	len = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len] != '\0')
		len++;
	n_str = malloc((len + n) * sizeof(*n_str) + 1);
	if (n_str == NULL)
		return (NULL);
	x = y = 0;
	while (x < (len + n) && s1[x] != '\0')
	{
		n_str[x] = s1[x];
		x++;
	}
	while (x < (len + n) && s2[y] != '\0')
	{
		n_str[x] = s2[y];
		x++;
		x++;
	}
	n_str[x] = '\0';
	return (n_str);
}
