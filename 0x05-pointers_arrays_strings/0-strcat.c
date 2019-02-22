 #include "holberton.h"
/**
 * _strcat - function that adds 2 integers
 * @dest: string that the other string will be added too
 * @src: string that is copied to the end of the dest string
 *
 * Description: prints triangles
 * Return: no return
 */
char *_strcat(char *dest, char *src)
{
	char *str_tmp = dest;

	if ((*dest != '\0') && (*src != '\0'))
	{
		while (*dest != '\0')
		{
			dest++;
		}
		while (*src != '\0')
		{
			*dest++ = *src++;
		}
			*dest = '\0';
	}
	return (str_tmp);
}
