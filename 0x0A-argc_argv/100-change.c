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

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		coins = 0;
	}
	else
	{
		coins = 0;
		while (cents > 0)
		{
			if (cents - 25 >= 0)
				coins = coins - 25;
			else if (coins - 10 >= 0)
				coins = coins - 10;
			else if (coins - 5 >= 0)
				coins = coins - 5;
			else if (coins - 2 >= 0)
				coins = coins - 2;
			else if (coins - 1 >= 0)
				coins = coins - 1;
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
