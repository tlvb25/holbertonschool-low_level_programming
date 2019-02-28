#include "holberton.h"
/**
 * _sqrt_help - function that adds 2 integers
 * @a: string pointer
 * @b:
 *
 * Description: reverses a string
 * Return: no return
 */

int _sqrt_help(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b == a)
		return (-1);
	return (_sqrt_help(a, b + 1));
}

/**
 * _sqrt_recursion - function calculates and returns
 * the natural square root of a number
 * @n: number to use
 *
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_help(n, 0));
}
