#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: Integer
 * Return: Nothing
 */
void print_to_98(int n)
{
	int i = 0;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d,", i);
			if (i != 98)
				printf(", "):
	}
	else
	{
		printf("98");
	}
	printf("\n")
}
