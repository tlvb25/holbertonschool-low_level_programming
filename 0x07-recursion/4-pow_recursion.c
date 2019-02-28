#include "holberton.h"
/**
 * _pow_recursion - function that adds 2 integers
 * @x: input
 * @y: input
 *
 * Description: reverses a string
 * Return: no return
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
