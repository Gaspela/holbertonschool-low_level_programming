#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - 2 dimnal grid. Created by your alloc_grid function.
 * @grid: Free grid.
 * @height: height of the array.
 */
void free_grid(int **grid, int height)
{

	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);

}
