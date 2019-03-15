#include "variadic_functions.h"
/**
 * sum_them_all - prints an integer
 * @n: the numbers entered
 *
 * Return: the sum of numbers passed.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int unsigned i, sum;

	va_start(ap, n);

	sum = 0;
	if (n == 0)
		return(0);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
