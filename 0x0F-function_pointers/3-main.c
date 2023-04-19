#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point of the programm
 * @argc: number of arguments
 * @argv: array of values of arguments
 * Return: nothing
 */
void main(int argc, char *argv[])
{
	int num1, num2, result, (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(argv[2][0] == '+'
			|| argv[2][0] == '-'
			|| argv[2][0] == '*'
			|| argv[2][0] == '/'
			|| argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%')
			&& atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	op = get_op_func(argv[2]);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = op(num1, num2);
	printf("%d\n", result);
}
