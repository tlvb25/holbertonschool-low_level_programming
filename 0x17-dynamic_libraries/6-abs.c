#include "holberton.h"
/**
 * int_abs - function that adds 2 integers
 * @r: is one of the integers added together
 *
 * Description: finds the absolute value
 * Return: The sum of the 2 integers is returned
 */
int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else
	{
		r *= -1;
		return (r);
	}
}
