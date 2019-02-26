/**
 * _memcpy - function encodes a string using rot13
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: updated string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
