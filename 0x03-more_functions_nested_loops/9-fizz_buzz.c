#include "holberton.h"
#include <stdio.h>
/**
 * print_line - function that adds 2 integers
 * @n: is one of the integers added together
 *
 * Description: prints n amount = to the number entered
 * Return: nothing
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%i ", i);
		}
	}
	printf("\n");
	return (0);
}
