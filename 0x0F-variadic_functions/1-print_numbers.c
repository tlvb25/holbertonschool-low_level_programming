#include "variadic_functions.h"
/**
 * print_numbers - prints an integer
 * @separator: the string printed between numbers
 * @n: the number of integers passed
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int unsigned i, v;

        va_start(ap, n);

	for(i = 0; i < n; i++)
	{
		v = va_arg(ap, int);
		if (separator)
		{
			printf("%d", v);
			if (i < n -1)
				printf("%s", separator);
		}
		else
		{
			return;
		}
	}
	va_end(ap);
	printf("\n");
}
