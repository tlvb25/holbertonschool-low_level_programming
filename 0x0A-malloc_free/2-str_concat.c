#include "holberton.h"
#include <stdlib.h>
/**
 * _strcat - function that adds 2 integers
 * @dest: string that the other string will be added too
 * @src: string that is copied to the end of the dest string
 *
 * Description: prints triangles
 * Return: no return
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, size1 = 0, size2 = 0, pos = 0;
	char *s;

	if (s1)
	{
		for (i = 0; s1[i] != '\0'; i++)
			size1++;
		size1++;
	}
	if (s2)
	{
		for (j = 0; s2[j] != '\0'; j++)
			size2++;
		size2++;
	}
	s = malloc(sizeof(char) * (size1 + size2 - 1));
	if (s)
	{
		i = 0;
		j = 0;
		while (i < size1)
			s[pos++] = s1[i++];
		while (j < size2)
			s[pos++] = s2[j++];
		if (s[pos - 1] != '\0')
			s[pos - 1] = '\0';
		return (s);
	}
	else
		return (NULL);
}
