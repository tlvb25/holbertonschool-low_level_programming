#include "holberton.h"
/**
 * print_triangle - function that adds 2 integers
 * @size: input variable
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