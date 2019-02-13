#include "holberton.h"
/**
 * print_sign - function that adds 2 integers
 * @n: is one of the integers added together
 *
 *
 * Description: Adds two integers
 * Return: The sum of the 2 integers is returned
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		_putchar('-');
	return (-1);
}
