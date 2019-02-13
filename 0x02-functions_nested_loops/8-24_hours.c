#include "holberton.h"
/**
 * jack_bauer - provide every min of the day
 * @void: parameter
 *
 *
 * Description: Adds two integers
 * Return: The sum of the 2 integers is returned
 */
void jack_bauer(void)
{
	int h = 0;
	int m;

	while (h <= 23)
	{
		m = 0;
		while (m <= 59)
		{
			_putchar('0' + h / 10);
			_putchar('0' + h % 10);
			_putchar(':');
			_putchar('0' + m / 10);
			_putchar('0' + m % 10);
			_putchar('\n');
			m++;
		}
		h++;
	}
}
