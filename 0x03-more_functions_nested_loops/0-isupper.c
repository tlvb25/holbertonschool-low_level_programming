#include "holberton.h"
/**
 * _isupper - check for uppercase characters
 * @c: integer passed into the function
 *
 * Description: checks for uppercase characters
 * Return: The sum of the 2 integers is returned
 */
int _isupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
