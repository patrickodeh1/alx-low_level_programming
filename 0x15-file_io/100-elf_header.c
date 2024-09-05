#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <elf.h>

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
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%.2x ", ehdr.e_ident[i]);
	printf("\n");

	printf("  Class:                             ");
	switch (ehdr.e_ident[EI_CLASS])
	{
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("Invalid class\n");
	}

	printf("  Data:                              ");
	switch (ehdr.e_ident[EI_DATA])
	{
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("Invalid data encoding\n");
	}

	printf("  Version:                           %d (current)\n", ehdr.e_ident[EI_VERSION]);

	printf("  OS/ABI:                            ");
	switch (ehdr.e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	default:
		printf("Unknown OS/ABI\n");
	}

	printf("  ABI Version:                       %d\n", ehdr.e_ident[EI_ABIVERSION]);

	printf("  Type:                              ");
	switch (ehdr.e_type)
	{
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	default:
		printf("Unknown type\n");
	}

	printf("  Entry point address:               0x%lx\n", ehdr.e_entry);
}

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
