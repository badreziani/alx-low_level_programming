#include "main.h"
#include "2-strlen_recursion.c"

/**
 * is_p - returns 1 if a string is a palindrome and 0 if not
 * @str: the string
 * @len: the lenght of the string
 * @idx: index
 * Return: 0 or 1
 */
int is_p(char *str, int len, int idx)
{
	if (*str != *(str + idx))
		return (0);
	if (idx > len)
		return (1);
	return (is_p(str + 1, len, idx - 1));
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: the string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	if (*s == '\0')
		return (1);
	len = _strlen_recursion(s);
	return (is_p(s, len / 2, len - 1));
}
