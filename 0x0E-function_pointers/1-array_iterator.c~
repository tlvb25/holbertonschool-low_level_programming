#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - function that prints a name
 * @array: the array that will be processed
 * @size: the number of elements of array
 * @action: the pointer to a function
 *
 * Return: array printed out in hex or dec
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		while (size)
		{
			action(*(array));
			array++;
			size--;
		}
	}
}
