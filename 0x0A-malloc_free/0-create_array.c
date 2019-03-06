#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - function creates an array of
 * characters and initializes in with a specific char
 * @size: size of the array to create
 * @c: char to copy
 *
 * Return: pointer to array, null if failed
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array)
	{
		for (i = 0; i < size; i++)
			array[i] = c;
	}
	else
		return (NULL);
	return (array);

}
