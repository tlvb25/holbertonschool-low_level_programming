#include <stdio.h>
#include "holberton.h"
/**
 * print_array - function that adds 2 integers
 * @a: string pointer
 * @n: integer input
 *
 * Description: prints triangles
 * Return: no return
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		i++;
		if (i < n)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
