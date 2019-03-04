#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the entry point to the program
 * @argc: the number of arguments passed to the program
 * @argv: the array of arguments from argc
 *
 * Description: prints the name of the arguments pass to program
 * Return: no return
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc)
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
