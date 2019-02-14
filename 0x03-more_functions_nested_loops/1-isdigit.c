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
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
