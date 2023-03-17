#include <stdio.h>
/**
 * main - Entry point
 * Description: will print the alphabet in lowercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	int l = 97;

	while (l <= 122)
	{
		if (l != 101 && l != 113)
			putchar(l);

		l++;
	}
	putchar('\n');
	return (0);
}
