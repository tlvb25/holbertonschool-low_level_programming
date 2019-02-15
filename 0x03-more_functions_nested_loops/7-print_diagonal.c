#include "holberton.h"
/**
 * print_diagonal - function that adds 2 integers
 * @n: draw a diagonal line
 *
 * Description: draws a diagonal line
 * Return: void return
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
