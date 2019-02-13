#include "holberton.h"
/**
 * print_alphabet_x10 - function that adds 2 integers
 * @void: is one of the integers added together
 *
 *
 * Description: Adds two integers
 * Return: The sum of the 2 integers is returned
 */

void print_alphabet_x10(void)
{
	int n;
	int m;

	for (m = 0; m < 10; m++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}


}
