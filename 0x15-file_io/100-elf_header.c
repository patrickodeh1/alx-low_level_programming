#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <elf.h>

/**
 * print_elf_header - Prints the ELF header of a file.
 * @fd: The file descriptor of the ELF file.
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
	if (bytes_read < (ssize_t)sizeof(ehdr))
	{
		fprintf(stderr, "Error: Incomplete ELF header\n");
		exit(98);
	}

	printf("ELF Header:\n");
	printf("  Magic:   %.2x %.2x %.2x %.2x %.2x %.2x %.2x %.2x\n",
		   ehdr.e_ident[EI_MAG0], ehdr.e_ident[EI_MAG1],
		   ehdr.e_ident[EI_MAG2], ehdr.e_ident[EI_MAG3],
		   ehdr.e_ident[EI_CLASS], ehdr.e_ident[EI_DATA],
		   ehdr.e_ident[EI_VERSION], ehdr.e_ident[EI_OSABI]);

}

/**
 * main - Entry point of the program.
 * @argc: Number of arguments.
 * @argv: Argument vector.
 *
 * Return: 0 on success, or exit with an error code.
 */
int main(int argc, char **argv)
{
	int fd;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <elf_file>\n", argv[0]);
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
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

	return 0;
}
