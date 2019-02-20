#include "holberton.h"
/**
 * swap_int - function that adds 2 integers
 * @a: input pointer
 * @b: input pointer
 *
 * Description: prints triangles
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
