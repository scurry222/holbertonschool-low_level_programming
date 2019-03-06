#include "holberton.h"
#include <stdlib.h>

/**
* alloc_grid - make a grid of inputted height and width
* @height: height of the grid
* @width: width of the grid
*
* Return: int double pointer to resulting string
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
			if (grid[i] == NULL)
				return (NULL);

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
