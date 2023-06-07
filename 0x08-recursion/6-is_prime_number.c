#include "main.h"

/**
 * is_prime - detrmine whether x is prime or not
 * @x: integer
 * @y: integer
 * Return: 1 or 0
 */
int is_prime(int x, int y)
{
	if (x <= 1)
		return (0);
	if (x == y)
		return (1);
	if (x % y == 0)
		return (0);
	return (is_prime(x, y + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: the number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	return (is_prime(n, 1));
}
