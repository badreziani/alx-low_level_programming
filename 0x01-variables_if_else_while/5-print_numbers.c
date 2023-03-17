#include <stdio.h>
/**
 * main - Entry point
 * Description: This program will print all single digit numbers of base 10
 * starting from 0, followed by a new line.
 */
int main(void)
{
	int d = 0;

	while (d < 10)
	{
		printf("%d", d);
		d++;
	}
	putchar('\n');
	return (0);
}
