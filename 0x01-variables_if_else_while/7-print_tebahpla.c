#include <stdio.h>
/**
 * main - Entry point
 * Description: Will print the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	int l = 122;

	while (l >= 97)
	{
		putchar(l);
		l--;
	}
	putchar('\n');
	return (0);
}
