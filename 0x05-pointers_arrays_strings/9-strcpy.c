#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * to the buffer pointed to by dest
 * @dest: destionation string
 * @src: source string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
