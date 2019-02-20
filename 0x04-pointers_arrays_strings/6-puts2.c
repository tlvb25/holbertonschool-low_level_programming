#include "holberton.h"
/**
 * puts2 - function that adds 2 integers
 * @str: string pointer
 *
 * Description: prints triangles
 * Return: no return
 */

void puts2(char *str)
{

	int i, j;

	for (i = 0; str[i]; i++)
		;
	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
