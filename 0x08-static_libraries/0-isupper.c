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
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
