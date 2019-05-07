#include "holberton.h"
/**
 * _strlen - function that adds 2 integers
 * @s: string pointer
 *
 * Description: prints triangles
 * Return: no return
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
