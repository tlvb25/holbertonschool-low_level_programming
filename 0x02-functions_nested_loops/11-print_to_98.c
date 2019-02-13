#include "holberton.h"
#include <stdio.h>
/**
 * add - function that adds 2 integers
 * @n: is the integer passed
 *
 *
 * Description: Adds two integers
 * Return: The sum of the 2 integers is returned
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%i, ", n);
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%i, ", n);
			n--;
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
