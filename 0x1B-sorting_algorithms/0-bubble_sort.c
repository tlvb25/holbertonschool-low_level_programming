#include "sort.h"

/**
 * swap - swaps two integer numbers
 * @a: integer to be swapped
 * @b: integer to be swapped
 * Return: void
 */

/* Bill Huang Was My Partner for this Project, code is Similar */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - function sorts a integer of array using bubble sort algorithm
 * @array: array of integers
 * @size: size of array
 * Return: nothing
 */

/* Bill Huang Was My Partner for this Project, code is Similar */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag = 0;

	if (size < 2)
		return;
	for (i = 0; i < size - 1 && flag == 0; i++)
	{
		flag = 1;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				flag = 0;
			}
		}
	}
}
