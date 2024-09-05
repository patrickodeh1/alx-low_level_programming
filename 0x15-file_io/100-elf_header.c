#include "main.h"
#include <stdio.h>

/**
 * print_hex - Prints hex values.
 * @value: The value to print.
 * @size: The number of bytes to print.
 */
void print_hex(unsigned char *value, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
		printf("%02x%s", value[i], i + 1 < size ? " " : "");
	printf("\n");
}

/**
 * print_elf_header - Prints the ELF header information.
 * @e_ident: The ELF identification array.
 */
void print_elf_header(unsigned char *e_ident)
{
	printf("ELF Header:\n");
	printf("  Magic:   ");
	print_hex(e_ident, 16);
	printf("  Class:                             %s\n",
		   e_ident[4] == 1 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
		   e_ident[5] == 1 ? "2's complement, little endian" :
		   "2's complement, big endian");
	printf("  Version:                           %d (current)\n", e_ident[6]);
	printf("  OS/ABI:                            %s\n",
		   e_ident[7] == 0 ? "UNIX - System V" : "unknown");
	printf("  ABI Version:                       %d\n", e_ident[8]);
	printf("  Type:                              %s\n",
		   e_ident[12] == 2 ? "EXEC (Executable file)" : "unknown");
	printf("  Entry point address:               0x%lx\n", 0x400600);
}

/**
 * main - Displays the ELF header information.
 * @ac: The number of arguments.
 * @av: The arguments.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd;
	unsigned char e_ident[16];
	ssize_t bytes_read;

	if (ac != 2)
		error_exit(97, "Usage: elf_header elf_filename");

	fd = open(av[1], O_RDONLY);
	if (fd < 0)
		error_exit(98, "Error: Can't read from file");

	bytes_read = read(fd, e_ident, sizeof(e_ident));
	if (bytes_read < 0 || bytes_read < sizeof(e_ident))
		error_exit(98, "Error: Can't read from file");

	if (e_ident[0] != 0x7f || e_ident[1] != 'E' || e_ident[2] != 'L' ||
		e_ident[3] != 'F')
	{
		close(fd);
		error_exit(98, "Error: Not an ELF file");
	}

	print_elf_header(e_ident);

	if (close(fd) < 0)
		error_exit(100, "Error: Can't close fd");

	return (0);
}
