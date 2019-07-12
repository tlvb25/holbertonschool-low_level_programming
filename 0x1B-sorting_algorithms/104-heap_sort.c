#include "sort.h"

/**
 * heapify - function recursively sorting to get largest root node 
 * @array: array
 * @index: index of node
 * @heap_size: size of heap
 * @size: size of the heap size
 */

/* Bill Huang Was My Partner for this Project, code is Similar */
void heapify(int *array, size_t index, size_t heap_size, size_t size)
{
	int tmp;
	size_t largest, left_index, right_index;

	largest = index;
	left_index = 2 * index + 1;
	right_index = 2 * index + 2;
	if (left_index < heap_size && array[left_index] > array[largest])
		largest = left_index;
	if (right_index < heap_size && array[right_index] > array[largest])
		largest = right_index;
	if (largest != index)
	{
		tmp = array[largest];
		array[largest] = array[index];
		array[index] = tmp;
		print_array(array, size);
		heapify(array, largest, heap_size, size);
	}
}

/**
 * heap_sort - sorting use heap sort 
 * @array: array to be sorted
 * @size: array size
 * Return: nothing
 */

/* Bill Huang Was My Partner for this Project, code is Similar */
void heap_sort(int *array, size_t size)
{
	int tmp;
	size_t i;

	for (i = size / 2 - 1; ; i--)
	{
		heapify(array, i, size, size);
		if (i == 0)
			break;
	}
	for (i = size - 1; i > 0; i--)
	{
		tmp = array[0];
		array[0] = array[i];
		array[i] = tmp;
		print_array(array, size);
		heapify(array, 0, i, size);
	}
}
