#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUFFER_SIZE 128

/**
 * print_elf_header - Print the ELF header information
 * @header: A pointer to the ELF header
 * Return: result
 */
void print_elf_header(Elf64_Ehdr *header)
{
	printf("ELF Header:n");
	printf("  Magic:   ");

	for (int x = 0; x < EI_NIDENT; x++)
	{
		printf("%02x", header->e_ident[x]);
		printf("n");

		printf("Class: %sn", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
		printf("Data: %sn", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
		printf("Version: %d (%s)n", header->e_ident[EI_VERSION], header->e_ident[EI_VERSION] == EV_CURRENT ? "current" : "invalid");
		printf("OS/ABI: %dn", header->e_ident[EI_OSABI]);
		printf("ABI Version: %dn", header->e_ident[EI_ABIVERSION]);
		printf("Type: %dn", header->e_type);
		printf("Entry point address: 0x%lxn", header->e_entry);
		printf("n");
	}
}

/**
 * main - Entry point
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char **argv)
{
int fp;
Elf64_Ehdr header;
ssize_t fread;

if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: %s elf_filenamen", argv[0]);
exit(98);
}
fp = open(argv[1], O_RDONLY);

if (fp == -1)
{
dprintf(STDERR_FILENO, "Error: Can't open file %sn", argv[1]);
exit(98);
}
fread = read(fp, &header, sizeof(header));

if (fread != sizeof(header))
{
dprintf(STDERR_FILENO, "Error: Can't read ELF header from file %sn", argv[1]);
exit(98);
}
if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
{
dprintf(STDERR_FILENO, "Error: %s is not an ELF filen", argv[1]);
exit(98);
}
print_elf_header(&header);

if (close(fp) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file %sn", argv[1]);
exit(100);
}
return (0);
}
