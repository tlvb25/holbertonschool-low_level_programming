#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints the name entered into the function
 * @name: The name to be printed
 * @f: the function pointer that prints the name according to its design.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */


void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
