#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the entry point to the program
 * @argc: the number of arguments passed to the program
 * @argv: the array of arguments from argc
 *
 * Description: the print the name of the program
 * Return: no return
 */

int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
