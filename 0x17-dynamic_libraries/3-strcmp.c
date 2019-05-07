#include "holberton.h"
/**
 * _strcmp - function that adds 2 integers
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Description: prints triangles
 * Return: the char value of the strings differences
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;

	return (s1[i] - s2[i]);
}
