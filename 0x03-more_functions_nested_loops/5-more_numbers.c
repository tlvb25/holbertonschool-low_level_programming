#include "holberton.h"
/**
 * more_numbers - function that adds 2 integers
 * @void: is one of the integers added together
 *
 * Description: finds the absolute value
 * Return: The sum of the 2 integers is returned
 */

void more_numbers(void)
{
	char p[] = {"01234567891011121314"};
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 20; i++)
		{
			_putchar(p[i]);
		}
		_putchar('\n');
	}
}
