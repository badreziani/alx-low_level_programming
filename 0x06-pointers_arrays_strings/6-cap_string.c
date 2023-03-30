#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to char variable
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 65 && s[i] <= 90)
			s[i] += 32;
		i++;
	}
	if (s[0] >= 97 && s[0] <= 122)
		s[0] -= 32;
	i = 1;
	while (s[i] != '\0')
	{
		if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'
				|| s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.'
				|| s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"'
				|| s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{'
				|| s[i - 1] == '}')
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] -= 32;
			}
		}
		i++;
	}
	return (s);
}
