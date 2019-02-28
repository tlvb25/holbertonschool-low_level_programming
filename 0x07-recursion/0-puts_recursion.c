#include "holberton.h"
#include <stdio.h>
/**
 * _puts_recursion - function encodes a string using rot13
 * @s: the string to encode
 *
 *
 * Return: updated string
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
