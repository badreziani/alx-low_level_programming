#include <stdio.h>
/**
 * main - Entry point
 * Description: Will print all possible combinations of
 * single-digit numbers.
 * Return: 0
 */
int main(void)
{
	int d = 48;

	while (d <= 57)
	{
		putchar(d);
		if (d < 57)
		{
			putchar(44);
			putchar(32);
		}
		d++;
	}
	putchar('\n');
	return (0);
}
