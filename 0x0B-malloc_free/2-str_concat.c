#include <stdlib.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: pointer to char
 * Return: unsigned integer
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * str_concat - concatenates two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, size, s_s1, s_s2;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	s_s1 = _strlen(s1);
	s_s2 = _strlen(s2);
	size = s_s1 + s_s2;

	if (*s1 != '\0' || *s2 != '\0')
		size += 1;

	concat = (char *)malloc(size * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < s_s1; i++)
		concat[i] = s1[i];

	s_s2 = 0;
	for (; i < size - 1; i++)
	{
		concat[i] = s2[s_s2];
		s_s2++;
	}
	if (size > 0)
		concat[size - 1] = '\0';
	else
		*concat = '\0';

	return (concat);
}
