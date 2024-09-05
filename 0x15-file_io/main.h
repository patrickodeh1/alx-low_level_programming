#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/* ELF header structure */
typedef struct
{
    unsigned char e_ident[16];
    /* Other fields are omitted for brevity */
} Elf64_Ehdr;

void print_elf_header(int fd);


ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_exit(int code, const char *message);

#endif /* MAIN_H */
