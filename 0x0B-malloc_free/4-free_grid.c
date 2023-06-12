#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the grid to be freed
 * @height: the height of the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	height--;
	while (height >= 0)
	{
		free(grid[height]);
		height--;
	}
	free(grid);
}
