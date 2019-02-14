#include "holberton.h"
/**
 * print_line - function that adds 2 integers
 * @n: is one of the integers added together
 *
 * Description: prints n amount = to the number entered
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		i = 0;
		_putchar ('\n');
	}
	i = 1;
}
