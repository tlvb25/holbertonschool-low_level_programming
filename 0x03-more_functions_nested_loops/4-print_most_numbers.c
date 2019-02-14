#include "holberton.h"
/**
 * print_most_numbers - function that adds 2 integers
 * @void:
 *
 * Description: finds the absolute value
 * Return: The sum of the 2 integers is returned
 */

void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
