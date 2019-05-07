 #include "holberton.h"
/**
 * _strncat - function that adds 2 integers
 * @dest: string that the other string will be added too
 * @src: string that is copied to the end of the dest string
 * @n: amount in bytes
 *
 * Description: prints triangles
 * Return: no return
 */
char *_strncat(char *dest, char *src, int n)
{
	char *tmp = dest;
	int i = 0;

	if ((*dest != '\0') && (*src != '\0'))
	{
		while (*dest != '\0')
		{
			dest++;
		}
		while (*src != '\0' && i < n)
		{
			*dest++ = *src++;
			i++;
		}
			*dest = '\0';
	}
	return (tmp);
}
