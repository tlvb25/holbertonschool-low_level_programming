#include "holberton.h"
/**
 * _puts - prints out a string
 * @str: string pointer
 *
 * Description: prints string
 * Return: no return
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
