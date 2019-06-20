#include "sort.h"

/**
 * swap - swaps two integer numbers
 * @a: integer a
 * @b: integer b
 * Return: void
 */

/* Bill Huang Was My Partner for this Project, code is Similar */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - sorts array of ints using selection sort 
 * @array: arrays of ints
 * @size: size of the array
 * Return: nothing
 */

/* Bill Huang Was My Partner for this Project, code is Similar */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idex;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		min_idex = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min_idex] > array[j])
				min_idex = j;
		}
		if (i != min_idex)
		{
			swap(&array[i], &array[min_idex]);
			print_array(array, size);
		}
	}
}
