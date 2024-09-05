#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <sys/types.h>

/* Function prototypes for file I/O */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* Function prototype for ELF header */
void print_elf_header(const unsigned char *e_ident);

#endif /* MAIN_H */
