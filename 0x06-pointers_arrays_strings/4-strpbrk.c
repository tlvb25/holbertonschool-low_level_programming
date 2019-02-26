#include "holberton.h"

/**
 * _strpbrk - function encodes a string using rot13
 * @s: the string to encode
 * @accept: input
 * Return: updated string
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
