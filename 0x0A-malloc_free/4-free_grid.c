#include "holberton.h"
#include <stdlib.h>

/**
* free_grid - free the allocated grid from prev func
* @grid: grid from prev func
* @height: number of columns in grid
*
* Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
