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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
