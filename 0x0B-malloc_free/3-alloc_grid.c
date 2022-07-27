#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: the width of the array
 * @height: height of the array
 *
 * Return: pointer to a 2D array
 * NULL if both width and height are 0 or on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width < 1 || height < 1)
		return ('\0');
	grid = malloc(height * sizeof(int));
	if (grid == NULL)
		return ('\0');
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
			return ('\0');
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
