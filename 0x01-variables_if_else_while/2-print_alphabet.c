#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the alphabet
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
	putchar('\n');
}
