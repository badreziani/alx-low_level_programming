#include <stdio.h>
/**
 * main - Entry point
 * Description: Will print all possible different
 * combinations of two digits
 * Return: 0
 */
int main(void)
{
	int n1 = 48;
	int n2 = 0;

	while (n1 <= 57)
	{
		n2 = n1 + 1;
		while (n2 <= 57)
		{
			putchar(n1);
			putchar(n2);
			if (n1 != 56 || n2 != 57)
			{
				putchar(',');
				putchar(' ');
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
