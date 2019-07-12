#include "sort.h"

/**
 * swap - swaps two integers
 * @a: integer 
 * @b: integer 
 * Return: nothing
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
 * shell_sort - sorts a array of int's using shell sort 
 * @array: array of int's
 * @size: size of array
 * Return: nothing
 */

/* Bill Huang Was My Partner for this Project, code is Similar */
void shell_sort(int *array, size_t size)
{
	size_t i, j, gap = 1;

	if (!array || size < 2)
		return;
	while ((gap * 3) + 1 < size)
		gap = gap * 3 + 1;
	for (; gap > 0; gap = (gap - 1) / 3)
	{
		for (i = gap; i < size; i++)
		{
			for (j = i - gap; array[j] > array[j + gap]; )
			{
				swap(&array[j], &array[j + gap]);
				if (j >= gap)
					j = j - gap;
				else
					break;
			}
		}
		print_array(array, size);
	}
}
