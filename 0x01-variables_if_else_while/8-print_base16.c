#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the alphabet
 * Return: 0
 */
int main(void)
{
	int l = 48;

	while (l <= 57)
	{
		putchar(l);
		l++;
	}
	l = 97;
	while (l <= 102)
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
