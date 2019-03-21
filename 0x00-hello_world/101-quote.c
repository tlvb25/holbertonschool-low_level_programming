#include <unistd.h>

/**
 * main - Entry point to the program
 *@void:
 *
 *Description: prints to standard error
 *Return: 1
 */

void main(void)
{
	char *i;

	i = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, i, 58);

	return (1);
}