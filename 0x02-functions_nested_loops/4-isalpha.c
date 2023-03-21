#include "main.h"
/**
 * _isalpha - check if charcater is alpha
 * Description: this function checks
 * if a charcter is alpha
 * @c: the character to check
 * Return: 1 if letter or 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
