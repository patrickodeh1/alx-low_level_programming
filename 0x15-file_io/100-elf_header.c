#include "main.h"

/**
 * print_elf_header - Prints the ELF header information.
 * @fd: The file descriptor of the ELF file.
 *
 * Description: Reads the ELF header from the file descriptor and prints
 *               relevant information. Exits with code 98 if there's an
 *               error reading the header.
 */
void print_elf_header(int fd)
{
	Elf64_Ehdr ehdr;
	ssize_t bytes_read;

	bytes_read = read(fd, &ehdr, sizeof(ehdr));
	if (bytes_read < 0)
	{
		perror("Error reading ELF header");
		exit(98);
	}
	if (bytes_read < sizeof(ehdr))
	{
		fprintf(stderr, "Error: Incomplete ELF header read\n");
		exit(98);
	}

	printf("ELF Header:\n");
	/* Adjust according to actual member */
	printf("  Entry point address:               0x%lx\n",
		   (unsigned long)ehdr.e_ident[0]);

	/* Other fields should be printed here */
}

/**
 * main - Entry point of the program.
 * @ac: The number of command-line arguments.
 * @av: The command-line arguments.
 *
 * Return: Always 0 on success, or exit with an error code.
 *
 * Description: Opens the ELF file specified by the command-line argument,
 *               prints the ELF header, and closes the file. Exits with code
 *               97 if the wrong number of arguments is provided, 98 if there
 *               is an error opening the file, and 100 if there's an error
 *               closing the file.
 */
int main(int ac, char **av)
{
	int fd;

	if (ac != 2)
	{
		fprintf(stderr, "Usage: %s <elf_file>\n", av[0]);
		exit(97);
	}

	fd = open(av[1], O_RDONLY);
	if (fd < 0)
	{
		perror("Error opening file");
		exit(98);
	}

	print_elf_header(fd);

	if (close(fd) < 0)
	{
		perror("Error closing file");
		exit(100);
	}

	return (0);
}
