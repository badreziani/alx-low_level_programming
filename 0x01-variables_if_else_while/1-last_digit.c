#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: this will print the last digit of a given number n
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("Last digit of %d is %d and is greater than 5\n");
	else if (n % 10 == 0)
		printf("Last digit of %d is %d and is 0\n");
	else
		printf("Last digit of %d is %d and is less than 6 and not 0");
	return (0);
}
