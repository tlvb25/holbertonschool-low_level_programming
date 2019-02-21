#include "holberton.h"
/**
 * rev_string - function that adds 2 integers
 * @s: string pointer
 *
 * Description: prints triangles
 * Return: no return
 */

void rev_string(char *s)
{
	int count = 8;
	int tmp;
	int i;

	for (i = 0; i <= count; i++)
	{
		tmp = s[i];
		s[i] = s[count - i];
		s[count] = tmp;
	}
}
