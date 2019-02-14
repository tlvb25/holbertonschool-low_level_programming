#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints up to 98
 * @n: is the integer passed
 *
 * Description: prints numbers up to 98 from n
 * Return: The sum of the 2 integers is returned
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%i ", n);
		printf("\n");
	}
	else if (n > 98)
	{
		while (n > 97)
		{
			printf("%i, ", n);
			n--;
			if (n == 98)
			{
				printf("%i", n);
			}
		}
	}
	else
	{
		while (n <= 97)
		{
			printf("%i, ", n);
			n++;
			if (n == 98)
			{
				printf("%i\n", n);
			}
		}
	}

}
