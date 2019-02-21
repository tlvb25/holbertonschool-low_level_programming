#include "holberton.h"
/**
 *  puts_half- function that adds 2 integers
 * @str: string pointer
 *
 * Description: prints triangles
 * Return: no return
 */

void puts_half(char *str)
{
	int i;
	int k;
	int j;

	for (i = 0; str[i] != '\0'; i++)
		;

	if (i % 2 == 0)
		j = i / 2;
	else
		j = i - i / 2;
	for (k = j; str[k] != '\0'; k++)
		_putchar(str[k]);
	_putchar('\n');
}
