#include "holberton.h"
/**
 * print_alphabet - function that prints the alphabet in lowercase
 * @parameterx: Description of parameter x
(*
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
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
			_putchar('0' + h / 10 );
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
