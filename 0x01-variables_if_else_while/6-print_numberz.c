#include <stdio.h>
/**
 * main - Entry point
 * Description: This program will print all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int d = 48;

	while (d <= 57)
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
