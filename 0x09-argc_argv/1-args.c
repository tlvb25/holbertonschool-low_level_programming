#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the entry point to the program
 * @argc: the number of arguments passed to the program
 * @argv: the array of arguments from argc
 *
 * Description: prints the number of arguments pass to program
 * Return: no return
 */

int main(int argc, char *argv[])
{
	int i;
	int count = 0;

	if (argc)
	for (i = 0; i < argc; i++)
	{
		argv++;
		count++;
	}
		printf("%d\n", count - 1);
	return (0);
}
