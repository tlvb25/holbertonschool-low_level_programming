#include "function_pointers.h"

/**
 * op_add - function that gets the sum of  2 numbers
 * @a: the 1st number
 * @b: the 2nd number
 *
 * Return: the sum
 */

int (*get_op_func(char *s))(int, int)
{
