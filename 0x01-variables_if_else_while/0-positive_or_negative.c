#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: This program will output whether a given n number
 * positif or zero o negative is
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0))
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positif");
	else if (n == 0)
		printf("is zero");
	else
		printf("is negative");
	return (0);
}
