#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - function encodes a string using rot13
 * @a: the string to encode
 * @size: input
 * Return: updated string
 */
void print_diagsums(int *a, int size)
{
	int i;

	int d1 = 0;
	int d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[(size * i) + i];

		d2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", d1, d2);
}
