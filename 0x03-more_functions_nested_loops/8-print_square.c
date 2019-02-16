#include "holberton.h"
/**
 * print_square - function that adds 2 integers
 * @size: the size to be squared
 *
 * Description: draws squares for input
 * Return: no return value
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
