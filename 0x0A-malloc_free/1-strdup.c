#include <stdlib.h>
#include "holberton.h"

char *_strdup(char *str);
/**
 * _strdup - copies a passed-in string to a new string allocated in *memrory
 * @str: the address of memory to print
 *
 * Return: Nothing.
 */

char *_strdup(char *str)
{
	int size = 0;
	int i;
	char *s;

	if (!str)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		size++;
	size++;
	s = malloc(sizeof(char) * size);
	if (s)
	{
		for (i = 0; i < size; i++)
			s[i] = str[i];
	}
	else
		return (NULL);
	return (s);
}
