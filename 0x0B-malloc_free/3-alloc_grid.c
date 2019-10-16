#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 * Return: P to allocated in array.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(grid + i) = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i = width; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			grid = NULL;
			return (grid);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
