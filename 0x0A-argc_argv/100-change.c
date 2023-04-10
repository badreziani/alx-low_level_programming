#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: integer
 * @argv: array of pointers to char
 * Return: 0 if success 1 if failure
 */
int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		coins = 0;
		printf("%d\n", coins);
	}
	else
	{
		coins = cents / 25 +
			(cents % 25) / 10 +
			(cents % 10) / 5 +
			(cents % 5) / 2 +
			cents % 2;
		printf("%d\n", coins);
	}
	return (0);
}
