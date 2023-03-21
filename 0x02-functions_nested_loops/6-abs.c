#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * Description: This function will compute
 * the absolute value of an integer.
 * @n: the integer
 * Return: the absulte value of @n
 */
int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
