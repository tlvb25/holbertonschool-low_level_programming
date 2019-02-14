#include "holberton.h"
/**
 * print_numbers - function that adds 2 integers
 * @void: is one of the integers added together
 *
 * Description: print num 1 - 9
 * Return: The sum of the 2 integers is returned
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0' + a);
	}
	_putchar('\n');
}
