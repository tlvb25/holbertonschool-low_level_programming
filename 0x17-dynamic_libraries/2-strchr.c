/**
 * _strchr - function encodes a string using rot13
 * @s: the string to encode
 * @c: input
 *
 * Return: updated string
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);

	return (0);
}
