#include "main.h"
/**
 * _islower - check whether a character
 * is lower or upper
 * Description: This function checks if a charzcter
 * is lower or upper
 * @c: the charcter to check
 * Return: 0 if the charcter is lower
 * 1 if is upper
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else
		return (1);
}
