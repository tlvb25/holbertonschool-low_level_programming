#include "holberton.h"
/**
 * _strlen_recursion - function that adds 2 integers
 * @s: string pointer
 *
 * Description: reverses a string
 * Return: no return
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
		return (0);

}
