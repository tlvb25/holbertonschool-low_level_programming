#include "variadic_functions.h"
/**
 * prt_string - function that prints a string
 * @ap: argument paraments
 *
 * Return: string
 */

void prt_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);

	if (!s)
	{
		s = "(nil)";
	}
	printf("%s", s);
}

/**
 * prt_char - function that prints a char
 * @ap: the argument to print
 *
 * Return: Nothing.
 */

void prt_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * prt_int - function that prints an integer
 * @ap: the argument to print
 *
 * Return: nothing
 */
void prt_int(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

/**
 * prt_float - prints a float
 * @ap: the argument to print
 *
 * Return: nothing
 */

void prt_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}


/**
 * print_all - prints any type of character type
 * @format: the list of data types
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;

	var_struct array[] = {
		{"c", prt_char},
		{"i", prt_int},
		{"f", prt_float},
		{"s", prt_string},
		{NULL, NULL}};

	int i = 0;
	int j = 0;
	char *sep = "";
	char *new_line = "";

	va_start(ap, format);

	while (format && format[i])
	{
		while (array[j].s)
		{
			if (format[i] == *array[j].s)
			{
				printf("%s", sep);
				array[j].f(ap);
				sep = ", ";
			}
			j++;
		}
		i++;
		j = 0;
		new_line = "\n";

	}
	printf("%s", new_line);
	va_end(ap);
}
