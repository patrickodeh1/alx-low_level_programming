#include "main.h"

/**
 * error_exit - Handles errors and exits with a given code.
 * @code: The exit code.
 * @message: The error message to print.
 */
void error_exit(int code, const char *message)
{
	if (message)
		dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * main - Copies the content of a file to another file.
 * @ac: The number of arguments.
 * @av: The arguments.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (ac != 3)
		error_exit(97, "Usage: cp file_from file_to");

	fd_from = open(av[1], O_RDONLY);
	if (fd_from < 0)
		error_exit(98, "Error: Can't read from file");

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd_to < 0)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to file_to");
	}

	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to file_to");
		}
	}

	if (bytes_read < 0)
		error_exit(98, "Error: Can't read from file");

	if (close(fd_from) < 0)
		error_exit(100, "Error: Can't close fd_from");

	if (close(fd_to) < 0)
		error_exit(100, "Error: Can't close fd_to");

	return (0);
}
