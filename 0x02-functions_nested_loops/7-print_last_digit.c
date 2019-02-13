#include "holberton.h"
/**
 * print_last-digit - function that adds 2 integers
 * @r: is one of the integers added together
 *
 *
 * Description: finds last digit
 * Return: The sum of the 2 integers is returned
 */
int print_last_digit(int r)
{
	r %= 10;
	if (r < 0)
	{
		(r *= -1);
	}
	_putchar('0' + r);
	return (r);
}
