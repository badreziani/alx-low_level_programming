#include <stdio.h>
/**
 * main - Entry point
 * Description: This program will print alphabet in both lower and upper case
 * Return: 0
 */
int main(void)
{
	int l = 97;

	while (l <= 122)
	{
		putchar(l);
		l++;
	}
	l = 65;
	while (l <= 90)
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
