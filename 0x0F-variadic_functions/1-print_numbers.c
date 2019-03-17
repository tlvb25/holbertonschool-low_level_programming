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
	unsigned int i;

	va_start(ap, n);

	if (!n)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
