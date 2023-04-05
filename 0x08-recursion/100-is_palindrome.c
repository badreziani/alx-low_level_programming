#include "main.h"
#include "2-strlen_recursion.c"

/**
 * is_palindrome_checker - checks if a string is palindrome
 * @s: pointer to char
 * @l: integer (left index)
 * @r: integer (right index)
 * Return: integer
 */
int is_palindrome_checker(char *s, int l, int r)
{
	if (s[l] != '\0' || l < 0 || r < 0)
	{
		return (0);
	}
	if (l >= r)
		return (1);
	if (s[l] == s[r])
	{
		return (is_palindrome_checker(s, l + 1, r - 1));
	}
	return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: pointer to string
 * Return: integer
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	return (is_palindrome_checker(s, 0, len - 1));
}
