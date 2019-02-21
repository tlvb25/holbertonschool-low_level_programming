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
	int i = 0;

	if (dest == src)
		return (dest);
	else if (src == 0)
		return (dest);
	for (i = 0; i < src[i]; i++)
		dest[i] = src[i];
	return (dest);
}
