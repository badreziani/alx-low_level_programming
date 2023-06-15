#include "main.h"
/**
 * _strlen - calculates the lenght of a string
 * @s: the string
 * Return: the length of s
 */
unsigned int _strlen(char *s)
{
	int len = 0;

	if (s)
		while (s[len] != '\0')
			s++;
	return (len);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: copied bytes from s2
 * Return: a pointer to a newly allocated space in memory or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, l, x, y;
	char *str;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	if (n >= l2)
		l = l1 + l2 + 1;
	else
		l = l1 + n + 1;
	str = malloc(l);
	if (!str)
		return (NULL);
	for (x = 0, y = l1; s1[x] != '\0'; x++)
	{
		if (x >= l1)
			str[x] = s2[y++];
		else
			str[x] = s1[x];
	}
	return (str);
}
