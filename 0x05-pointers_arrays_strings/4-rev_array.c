#include "holberton.h"
/**
 * reverse_array - function that adds 2 integers
 * @a: string pointer
 * @n:
 *
 * Description: prints triangles
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
