#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * @height: columns of the grid
 * @width: rows of the the grid
 *
 * Return: the pointer
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int r;
	int c;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* Dynamically created array of pointers of size height */
	array = malloc(sizeof(*array) * height);

	if (array == '\0')
	{
		return (NULL);
	}
	/* Dynamically allocate memory of size width for each row */
	for (r = 0; r < height; r++)
	{
		array[r] =  malloc(sizeof(**array) * width);
		if (array[r] == '\0')
		{
			for (c = 0; c < width; c++)
			{
				free(array[c]);
			}
			free(array);
			return (NULL);
		}
	}
	for (r = 0; r < height; r++)
	{
		for (c = 0; c < width; c++)
		{
			array[r][c] = 0;
		}
	}
	return (array);
}
