#include "sort.h"

/**
 * swap - swaps two integers
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
 * partition - partition for quick sort algorithm
 * @array: array to be sorted
 * @size: size
 * @low: low bound index
 * @high: high bound index
 * Return: returns pivot index
 */

/* Bill Huang Was My Partner for this Project, code is Similar */
size_t partition(int *array, size_t size, size_t low, size_t high)
{
	int pivot;
	size_t j, i;

	if (low >= high)
		return (low);
	pivot = array[high];
	i = low;
	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (j != i)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != j)
	{
		swap(&array[i], &array[high]);
		print_array(array, size);
	}
	return (i);
}

/**
 * quick_sort_3args - function takes 4 args
 * @array: array to be sorted
 * @size: size
 * @low: low bound index
 * @high: high bound index
 * Return: void
 */

/* Bill Huang Was My Partner for this Project, code is Similar */
void quick_sort_3args(int *array, size_t size, size_t low, size_t high)
{
	size_t p;

	if (low >= high)
		return;
	p = partition(array, size, low, high);
	if (p != 0)
		quick_sort_3args(array, size, low, p - 1);
	if (p != high)
		quick_sort_3args(array, size, p + 1, high);
}

/**
 * quick_sort - sorts array of int's using quick sort 
 * @array: array of int's
 * @size: size of array
 * Return: nothing
 */

/* Bill Huang Was My Partner for this Project, code is Similar */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quick_sort_3args(array, size, 0, size - 1);
}
