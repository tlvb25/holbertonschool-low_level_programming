#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: file to be copied too
 * @text_content: file that has text to be copied
 *
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t copied_file, created_file;
	int i;

	if (filename == NULL)
		return (-1);

/* creating & writing *filename into file descriptor */
	created_file = open(filename, O_WRONLY | O_APPEND);
	if (created_file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		copied_file = write(created_file, text_content, i);
	}
	close(created_file);
	if (copied_file == -1)
		return (-1);
	return (1);
}
