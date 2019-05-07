#include "holberton.h"

/**
 * _strstr - function encodes a string using rot13
 * @haystack: the string to encode
 * @needle:
 *
 * Return: updated string
 */

char *_strstr(char *haystack, char *needle)
{
	int i, count = 0;

	while (needle[count++])
		;
	count -= 1;
	while (*haystack)
	{
		for (i = 0; needle[i] != '\0'; i++)
			if (*(haystack + i) != *(needle + i))
				break;
		if (i == count)
			return (haystack);
		haystack++;
	}
	return (0);
}
