#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: pointer to a char
 * Return: a pointer to s
 */
char *leet(char *s)
{
	int i, j;
	char *l = "aeotlAEOTL";
	char *n = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j])
				s[i] = n[j];
		}
	}

	return (s);
}
