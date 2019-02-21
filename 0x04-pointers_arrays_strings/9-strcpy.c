#include "holberton.h"
/**
 * _strcpy - function that adds 2 integers
 * @dest: destinatin string
 * @src: source string
 * Description: prints triangles
 * Return: no return
 */

char *_strcpy(char *dest, char *src)
{

	char *start = dest;

	for (; *src != '\0'; dest++, src++)
	{
		*dest = *src;
	}
	*dest = '\0';
	return (start);
}
