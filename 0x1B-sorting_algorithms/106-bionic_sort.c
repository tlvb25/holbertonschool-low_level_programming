#include "sort.h"
/**
 * print_subArr - Prints subarray of int's
 * @array: array to be printed
 * @low: beginning index
 * @cnt: ending index
 * Return: nothing
 */

/* Bill Huang Was My Partner for this Project, code is Similar */
void print_subArr(int *array, size_t low, size_t cnt)
{
	size_t i;

	if (cnt < 2)
		return;
	i = low;
	while (array && i < cnt)
	{
		if (i > low)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

/**
 * bitonic_compare - a function that compares two array elements
 * @up: boolean value for sorting up or down
 * @array: a array
 * @i: beginning index of array A
 * @j: endding index of array A
 * Return: nothing
 */

/* Bill Huang Was My Partner for this Project, code is Similar */
void bitonic_compare(int up, int *array, size_t i, size_t j)
{
	int tmp;

	if (up == 1)
	{
		if (array[i] > array[j])
		{
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
	}
	else
	{
		if (array[i] < array[j])
		{
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
	}
}

/**
 * bitonic_merge - sorting use bitonic sort
 * @up: boolean value for sorting up or down
 * @array: array to be sorted
 * @size: array size
 * @low: beginning index
 * @cnt: endding index
 * Return: nothing
 */

/* Bill Huang Was My Partner for this Project, code is Similar */
void bitonic_merge(int up, int *array, size_t size, size_t low, size_t cnt)
{
	size_t i, k;

	k = cnt / 2;
	if (cnt < 2)
		return;
	for (i = low; i < low + k; i++)
		bitonic_compare(up, array, i, i + k);
	bitonic_merge(up, array, size, low, k);
	bitonic_merge(up, array, size, low + k, k);
}
/**
 * bitonic_split - splits the array from left to right
 * @up: boolean value for forting up or down
 * @array: copy array
 * @size: size of array
 * @low: beggin index
 * @cnt: ending index
 * Return: an array
 */

/* Bill Huang Was My Partner for this Project, code is Similar */
void bitonic_split(int up, int *array, size_t size, size_t low, size_t cnt)
{
	size_t k;

	if (cnt < 2) /* one element array */
		return;          /* recursion exit */
	k = cnt / 2;  /* continuetly split until 1 */
	if (up == 1)
	{
		printf("Merging [%lu/%lu] (UP):\n", cnt, size);
		print_subArr(array, low, low + cnt);
	}
	if (up == 0 && low >= size / 2)
	{
		printf("Merging [%lu/%lu] (DOWN):\n", cnt, size);
		print_subArr(array, cnt, low + cnt);
	}
	bitonic_split(1, array, size, low, k); /* left array */
	bitonic_split(0, array, size, low + k, k);   /*right array*/
	if (up == 1 && low < size / 2)
	{
		printf("Merging [%lu/%lu] (UP):\n", cnt, size);
		print_subArr(array, low, low + cnt);
	}

	if (up == 0 && low < size / 2)
	{
		printf("Merging [%lu/%lu] (DOWN):\n", cnt, size);
		print_subArr(array, cnt, low + cnt);
	}

	bitonic_merge(up, array, size, low, cnt);
	if (up == 1)
	{
		printf("Result [%lu/%lu] (UP):\n", cnt, size);
		print_subArr(array, low, low + cnt);
	}
	if (up == 0)
	{
		printf("Result [%lu/%lu] (DOWN):\n", cnt, size);
		print_subArr(array, cnt, low + cnt);
	}
}
/**
 * bitonic_sort - a function
 * @array: a array
 * @size: array size
 * Return: nothing
 */

/* Bill Huang Was My Partner for this Project, code is Similar */
void bitonic_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	bitonic_split(1, array, size, 0, size);
}
