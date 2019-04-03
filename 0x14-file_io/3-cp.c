#include "holberton.h"

/**
 * main - a function that copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: pointer to the argument pass to the function
 *
 * Return: 0 if successful
 */

int main(int argc, char **argv)
{
	int fd_from, fd_to, r, close_f, close_to;
	char buffer[1024];

	/* checking for the correct number of arguments passed into program */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((r = read(fd_from, buffer, 1024)) > 0)
	{
		if (fd_to == -1 || (write(fd_to, buffer, r) != r))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_f = close(fd_from);
	if (close_f < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_from), exit(100);
	}
	close_to = close(fd_to);
	if (close_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_to), exit(100);
	}
	return (0);
}
