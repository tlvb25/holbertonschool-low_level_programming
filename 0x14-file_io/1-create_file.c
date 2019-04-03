#include "holberton.h"

/**
 * create_file - function that creates a file.
 * @filename: the file to be copied to
 * @text_content: the text file to copied from
 *
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t copied_file, created_file;
	int i;

	if (filename == NULL)
		return (0);

/* creating & writing *filename into file descriptor */
	created_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (created_file == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			copied_file = write(created_file, text_content, i);
	}
	close(created_file);
	if (copied_file == -1)
		return (-1);
	return (1);
}
