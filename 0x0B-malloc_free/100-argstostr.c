#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: integer => count of args
 * @av: array of pointers to values of args
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *args;
	int size, i, j;

	if (ac == 0 || av == NULL)
		return (NULL);

	size = 0;
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
		size++;
	}
	args = (char *)malloc(size * sizeof(char));
	if (args == NULL)
		return (NULL);
	size = 0;
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			args[size] = av[i][j];
			size++;
		}
		size++;
		args[size] = '\n';
	}

	return (args);

}
