#include "holberton.h"
/**
 * print_rev - function that adds 2 integers
 * @s: string pointer
 *
 * Description: prints triangles
 * Return: no return
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] > 0)
	{
		a++;
	}
	for (; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
