#ifndef VARIADIC_FUNC
#define VARIADIC_FUNC
#include <stdio.h>
#include <stdarg.h>

/**
 * struct var - struct for function parameters to print anything
 *
 * @f: the function member
 * @s: the string member
 */

typedef struct var
{
	char *s;
	void (*f)(va_list ap);
} var_struct;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
