#include "main.h"
/**
 * alloc_grid - allocates memory for a 2 dimensional array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	unsigned int idx, idx2;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);
	for (idx = 0; idx < height; idx++)
	{
		grid[idx] = malloc(sizeof(int) * width);
		if (!grid[idx])
		{
			while (idx >= 0)
			{
				free(grid[idx]);
				idx--;
			}
			free(grid);
			return (NULL);
		}
		for (idx2 = 0; idx2 < width; idx2++)
			grid[idx][idx2] = 0;
	}
	return (grid);
}
