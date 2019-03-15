#include "variadic_functions.h"
/**
 * sum_them_all - prints an integer
 * @n: the numbers entered
 *
 * Return: the sum of numbers passed.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	int unsigned i, sum;

	va_start(add, n);

	sum = 0;
	if (n == 0)
		return(0);
	for (i = 0; i < n; i++)
		    sum += va_arg(add, int);
	va_end(add);
	return (sum);
}
