#include "holberton.h"
/**
 * _isdigit - function that adds 2 integers
 * @c: is one of the integers added together
 *
 * Description: finds the absolute value
 * Return: The sum of the 2 integers is returned
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
