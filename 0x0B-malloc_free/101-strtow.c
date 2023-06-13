#include "main.h"
/**
 * count_words - counts the number of words in a string
 * @str: string to count the number of words
 * Return: number of words
 */
int count_words(char *str)
{
	int w_count = 0, i = 0, test = 0;

	while (str[i] != '\0')
	{
		while (str[i] != ' ' && str[i] != '\0')
		{
			i++;
			test = 1;
		}
		if (test == 1)
		{
			test = 0;
			i--;
			w_count++;
		}
		i++;
	}
	return (w_count);
}

/**
 * empty_str - cheks if str is null or empty
 * @str: the sytring to check
 * Return: 1 if str is null or empty, 0 if not
 */
int empty_str(char *str)
{
	if (str == NULL || str[0] == '\0')
		return (1);
	if (count_words(str) == 0)
		return (1);
	return (0);
}
/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int c = 0, test = 0, i = 0, j, k, w_len;

	if (empty_str(str) == 1)
		return (NULL);
	words = malloc(sizeof(char *) * (1 + count_words(str)));
	if (!words)
		return (NULL);
	while (str[i] != '\0')
	{
		w_len = 0, j = i;
		while (str[j] != ' ' && str[j] != '\0')
		{
			j++;
			w_len++;
			test = 1;
		}
		if (test == 1)
		{
			words[c] = malloc(sizeof(char) * (1 + w_len));
			if (!words[c])
			{
				c--;
				while (c >= 0)
					free(words[c--]);
				free(words);
				return (NULL);
			}
			j = i;
			k = 0;
			while (str[j] != ' ' && str[j] != '\0')
				words[c][k++] = str[j++];
			words[c++][k] = '\0';
			i = j - 1;
			test = 0;
		}
		i++;
	}
	words[c] = NULL;
	return (words);
}
