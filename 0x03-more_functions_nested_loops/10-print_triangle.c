#include "holberton.h"
/**
 * print_triangle - function that adds 2 integers
 * @size: input variable
 *
 * Description: prints triangles
 * Return: no return
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i  = 0; i < size; i++)
	{
		for (j = i; j < (size - 1); j++)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
