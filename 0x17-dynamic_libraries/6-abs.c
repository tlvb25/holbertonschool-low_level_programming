#include "holberton.h"
/**
 * int_abs - func that finds abs of number
 * @r: the integer passed into func
 *
 * Description: finds the absolute value
 * Return: The absolute value
 */
int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else
	{
		r *= -1;
		return (r);
	}
}
