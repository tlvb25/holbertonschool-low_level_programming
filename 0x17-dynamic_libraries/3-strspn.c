/**
 * _strspn - function encodes a string using rot13
 * @s: the string to encode
 * @accept: string of words to ommit
 *
 * Return: updated string
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
