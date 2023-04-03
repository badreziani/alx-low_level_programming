#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to char
 * @accept: pointer to char
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0, i, j;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
	}
	return (len);
}
