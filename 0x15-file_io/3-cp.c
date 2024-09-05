#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

/**
 * error_exit - Handles errors by printing a message and exiting.
 * @message: The error message to print.
 * @file: The file name related to the error.
 * @exit_code: The exit code to use.
 */

void error_exit(const char *message, const char *file, int exit_code)
{
    if (file != NULL && file[0] != '\0')
        dprintf(STDERR_FILENO, "%s %s\n", message, file);
    else
        dprintf(STDERR_FILENO, "%s\n", message);
    
    exit(exit_code);
}


/**
 * main - Copies the contents of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: The command-line arguments.
 *
 * Return: 0 on success, or exit with an error code.
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[1024];
	struct stat st;
	mode_t file_perm;

	if (argc != 3)
		error_exit("Usage: ./3-cp file_from file_to", "", 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
		error_exit("Can't read from file", argv[1], 98);

	if (fstat(fd_from, &st) < 0)
		error_exit("Can't get file permissions", argv[1], 98);

	file_perm = st.st_mode;

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	if (fd_to < 0)
		error_exit("Can't write to file", argv[2], 99);

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			error_exit("Can't write to file", argv[2], 99);
	}
	if (bytes_read < 0)
		error_exit("Can't read from file", argv[1], 98);

	if (close(fd_from) < 0)
		error_exit("Can't close fd", argv[1], 100);

	if (close(fd_to) < 0)
		error_exit("Can't close fd", argv[2], 100);

	return (0);
}
