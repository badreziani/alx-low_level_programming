#include "main.h"

/**
 * is_prime_checker - checks if a number is prime or not
 * @n: integer
 * @i: integer
 * Return: 0 or 1
 */
int is_prime_checker(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (is_prime_checker(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: integer
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return is_prime_checker(n, 2);
}
