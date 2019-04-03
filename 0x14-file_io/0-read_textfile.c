#include "holberton.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename: the string passed into the function
 * @letters: the number of letters
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file2_read, read_file, written_file;
	char *unknown_size;

	if (filename == NULL)
		return (0);

/* since size_t letters is unknown I dynamically create space */
	unknown_size = malloc(sizeof(char) * letters);

	if (!unknown_size)
		return (0);
/* copying funct-passed-in file into integer variable "file2_read" */
	file2_read = open(filename, O_RDONLY);
	if (file2_read == -1)
	{
		free(unknown_size);
		return (0);
	}
/* copying file to be read into integer variable "read_file" */
	read_file = read(file2_read, unknown_size, letters);
	if (read_file == -1)
	{
		free(unknown_size);
		return (0);
	}
	close(file2_read);

/* copying read_file to be written into integer variable "written_file" */
	written_file = write(STDOUT_FILENO, unknown_size, read_file);

	if (written_file == -1)
	{
		free(unknown_size);
		return (0);
	}

	free(unknown_size);
	return (written_file);
}
