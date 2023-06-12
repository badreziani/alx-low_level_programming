#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: a pointer to the first str
 * @s2: a pointer to the second str
 * Return: a pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len, idx1, idx2;

	if (s1 != NULL)
	{
		for (len = 0; s1[len] != '\0'; len++)
			;
	}
	else
	{
		s1 = "";
		len = 0;
	}
	if (s2 != NULL)
	{
		for (idx1 = 0; s2[idx1]; idx1++)
			len++;
	}
	else
		s2 = "";
	concat = malloc(len + 1);
	if (!concat)
		return (NULL);
	for (idx1 = 0, idx2 = 0; s1[idx1] != '\0' || s2[idx2] != '\0'; idx1++)
	{
		if (s1[idx1] != '\0' && idx2 == 0)
		{
			concat[idx1] = s1[idx1];
		}
		else
		{
			concat[idx1] = s2[idx2];
			idx2++;
		}
	}
	concat[idx1] = '\0';
	return (concat);
}
