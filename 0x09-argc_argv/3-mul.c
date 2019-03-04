#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the entry point to the program
 * @argc: the number of arguments passed to the program
 * @argv: the array of arguments from argc
 *
 * Description: multiplies the numbers entered
 * Return: no return
 */

int main(int argc, char *argv[])
{
	int i;
	int product = 1;

	if (argc)
	{
		for (i = 1; i < argc; i++)
		{
			printf("%s\n", argv[i]);
			product = product * atoi(argv[i]);
		}
		printf("Product is: %d\n", product);
	}
	return (0);
}
