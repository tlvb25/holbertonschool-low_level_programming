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
	ssize_t file2_read;

	if (!filename || !letters)
		return (0);

/* since size_t letters is unknown I dynamically create space */
	char *unknown_size = malloc(sizeof(char) * letters);

	if (!unknown_size)
		return (0);
/* copying funct-passed-in file into integer variable "file2_read" */
	file2_read = open(filename, O_RDONLY, 0400);
	if (file2_read == -1)
	{
		free(unknown_size);
		return (0);
	}
/* copying file to be read into integer variable "read_file" */
	ssize_t read_file = read(file2_read, unknown_size, letters);

	if (read_file == -1)
	{
		free(unknown_size);
		return (0);
	}
	close(file2_read);

/* writing the file passed to function and stored in integer variable file2_read */
	ssize_t written_file = write(STDOUT_FILENO, unknown_size, read_file);
	
	if (written_file == -1)
	{
		free(unknown_size);
		return (0);
	}

	free(unknown_size);
	return (written_file);
}
