#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - returns a pointer to a 2 dimensional
 * @grid: columns of the grid
 * @height: rows of the the grid
 *
 * Return: the pointer
 */
void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; r++)
	{
		free(grid[r]);
	}
	free(grid);
}
