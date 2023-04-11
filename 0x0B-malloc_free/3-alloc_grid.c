#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid -  returns a pointer to
 * a 2 dimensional array of integers.
 * @width: integer
 * @height: integer
 * Return: NULL or pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc((height * sizeof(int *)) * (width * sizeof(int)));
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
