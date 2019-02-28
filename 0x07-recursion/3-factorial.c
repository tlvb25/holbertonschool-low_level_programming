#include "holberton.h"
/**
 * factorial - function that adds 2 integers
 * @n: string pointer
 *
 * Description: reverses a string
 * Return: no return
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));

}
