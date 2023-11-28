#include "main.h"
/**
 * print_error - Print an error message and exit status
 * @message: The error message to be printed.
*/
void print_error(const char *message)
{
fprintf(stderr, "%s\n", message);
exit(98);
}
/**
 * print_elf_header_info - this function print the information
 * contained in the ELF header.
 * @header: Pointer to the ELF header structure.
*/
void print_elf_header_info(Elf64_Ehdr *header)
{
char *type_str[] = {"NONE (Unknown type)", "REL (Relocatable file)",
"EXEC (Executable file)", "DYN (Shared object file)", "CORE (Core file)"};
int type_index = header->e_type;
int i;

printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", header->e_ident[i]);
printf("\n");
printf("Class:			%s\n",
(header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
printf("Data:			%s\n",
(header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
printf("Version:		%d (current)\n",
(header->e_ident[EI_VERSION]));
printf("OS/ABI:			%d\n",
(header->e_ident[EI_OSABI]));
printf("ABI Version:		%d\n",
(header->e_ident[EI_ABIVERSION]));
printf("Type:			%s\n",
(type_index >= 0 && type_index < 5) ? type_str[type_index] : "Unknown");
printf("Entry point address:	0x%lx\n",
(unsigned long)header->e_entry);
}

/**
 * check_elf_magic - Will recursively print ELF magic bytes.
 * @magic: A pointer to the ELF magic byte array.
 * @index: The current index in the magic byte array.
 * Returns: (1) when all magic bytes are printed.
*/
int check_elf_magic(const unsigned char *magic, int index)
{
if (index >= EI_NIDENT)
return (1);
printf("%02x ", magic[index]);
return (check_elf_magic(magic, index + 1));
}

/**
 * main - Entry point of the ELF Header Viewer program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Returns: (0) on successful execution, (98) on error.
*/
int main(int argc, char *argv[])
{
ssize_t bytes_read;
int fd = open(argv[1], O_RDONLY);
Elf64_Ehdr header;

if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
exit(97);
}

if (fd == -1)
print_error("Error: Unable to open file");

bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));

if (bytes_read != sizeof(Elf64_Ehdr))
print_error("Error: Unable to read ELF header");

if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3)
print_error("Error: Not an ELF file");

print_elf_header_info(&header);

close(fd);
return (0);
}
