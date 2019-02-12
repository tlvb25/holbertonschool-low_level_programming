#include "holberton.h"
/**
 * print_alphabet_x10 - function that prints the alphabet in lowercase
(*
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
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
