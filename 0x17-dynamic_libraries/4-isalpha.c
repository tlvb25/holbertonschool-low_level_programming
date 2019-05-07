#include "holberton.h"
/**
 * _isalpha  - function that adds 2 integers
 * @c: is one of the integers added together
 *
 *
 * Description: Adds two integers
 * Return: The sum of the 2 integers is returned
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
