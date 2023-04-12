#include <stdlib.h>
#include "main.h"
#include "4-free_grid.c"

/**
 * count_words - counts how many words contains the string
 * @str: pointer to char (the string)
 * Return: integer (words count)
 */
int count_words(char *str)
{
	int i, count;

	count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			continue;
		while (str[i] != ' ' && str[i++] != '\0')
			str++;
		count++;
	}
	return (count);
}

/**
 * strtow - splits a string into words
 * @str: pointer to char
 * Return: pointer to array of strings
 */
char **strtow(char *str)
{
	int cw, i, len;
	char **words, *word;

	cw = count_words(str);
	words = (char **)malloc(cw * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < cw; i++)
	{
		if (str[i] == ' ')
			continue;
		len = 0;
		while (str[i] != ' ' && str[i++] != '\0')
		{
			str++;
			len++;
		}
		word = (char *)malloc(len * sizeof(char));
		if (word == NULL)
		{
			while (i > 0)
			{
				free(words[i]);
				i--;
			}
			free(words);
			return (NULL);
		}
		words[i] = word;
		free(word);
	}

	return (words);

}
