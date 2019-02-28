#include "holberton.h"
/**
 * _print_rev_recursion - function that adds 2 integers
 * @s: string pointer
 *
 * Description: reverses a string
 * Return: no return
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
