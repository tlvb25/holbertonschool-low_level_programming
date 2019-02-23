#include "holberton.h"
/**
 * *cap_string - function that adds 2 integers
 * @s: string pointer
 *
 * Description: prints triangles
 * Return: no return
 */

char *cap_string(char *s)
{
	int i = 0;
	char pun[14] = {' ', '.', '\n', '\t', ',', ';', '!'
		       , '?', '"', '(', ')', '{', '}'};

	if (s[i] == pun[i])
		s[i + 1] -= 32;
	s[i + 1] = s[i + 1] - 32;
	return (s);
}
