#include "holberton.h"
/**
 * _strlen - function that adds 2 integers
 * @s: input variable
 *
 * Description: prints triangles
 * Return: no return
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
	}
	return (length);
}
