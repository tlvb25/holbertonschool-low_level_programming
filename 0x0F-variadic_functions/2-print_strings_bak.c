#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: the string printed between numbers
 * @n: the number of integers passed
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *v;

	va_start(ap, n);

	for (i = 0; i < n ; i++)
	{
		v = va_arg(ap, char*);
		if (separator)
		{
			printf("%s", v);
			if (i < n - 1)
				printf("%s", separator);
		}
		else
		{
			return;
		}
	}
	printf("\n");
	va_end(ap);
}
