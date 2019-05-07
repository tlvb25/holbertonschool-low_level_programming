 #include "holberton.h"
/**
 * _strncpy - function that adds 2 integers
 * @dest: string that the other string will be added too
 * @src: string that is copied to the end of the dest string
 * @n: the size
 *
 * Description: prints triangles
 * Return: no return
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && dest[i] != '\0' && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	return (dest);
}
