#include "holberton.h"
/**
 * string_toupper - function that adds 2 integers
 * @s: string pointer
 *
 * Description: prints triangles
 * Return: no return
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}
