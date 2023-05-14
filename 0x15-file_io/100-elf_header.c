#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"


void print_error(char *error_message)
{
	fprintf(stderr, "Error: %s\n", error_message);
	exit(98);
}

int main(int argc, char **argv)
{
	Elf64_Ehdr header;
	int a;
	int Rq = open(argv[1], O_RDONLY);

	if (argc != 2)
	{
		print_error("Invalid number of arguments passed");
	}
	if (Rq == -1)
	{
		perror("Error");
		print_error("Error!");
	}
	if (read(Rq, &header, sizeof(header)) != sizeof(header))
	{
		perror("Error");
		print_error("Failed to read ELF header");
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
		header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
		header.e_ident[EI_MAG3] != ELFMAG3)
	{
		perror("Error");
		print_error("Not an ELF file");
	}
	printf("Magic:   ");
	for (a = 0; a < EI_NIDENT; a++)
	{
		printf("%02x ", header.e_ident[a]);
	}
	printf("\nClass:                                 %s\n",
			header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" :
			header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
			header.e_ident[EI_CLASS] == ELFCLASSNONE ? "none" : "unknown");
	printf("Data:                                    %s\n",
			header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
			header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" :
			header.e_ident[EI_DATA] == ELFDATANONE ? "none" : "unknown");
	printf("Version:                        %d\n",
			header.e_ident[NT_VERSION]);
	printf("OS/ABI:                         %s\n",
			header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX system V ABI" :
			header.e_ident[EI_OSABI] == ELFOSABI_HPUX ? "HP_UX ABI" :
			header.e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "NetBSD ABI" :
			header.e_ident[EI_OSABI] == ELFOSABI_LINUX ? "Linux ABI" :
			header.e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "Solaris ABI" :
			header.e_ident[EI_OSABI] == ELFOSABI_AIX ? "AIX ABI" :
			header.e_ident[EI_OSABI] == ELFOSABI_FREEBSD ? "FreeBSD ABI" :
			header.e_ident[EI_OSABI] == ELFOSABI_OPENBSD ? "OpenBSD ABI" :
			header.e_ident[EI_OSABI] == ELFOSABI_STANDALONE ? "Standalone ABI" : "unknown");
	printf("ABI Version:                     %d\n",
			header.e_ident[EI_ABIVERSION]);
	printf("Type:                            %s\n",
			header.e_type == ET_NONE ? "NONE (None)" :
			header.e_type == ET_REL ? "REL (Relocatable Object File)" :
			header.e_type == ET_EXEC ? "EXEC (Executable file)" :
			header.e_type == ET_DYN ? "DYN (Shared objext file)" :
			header.e_type == ET_CORE ? "CORE (Core file)" : "Unknown");
	printf("Entry point address: %lx\n",
		(unsigned long) header.e_entry);
	if (Rq == -1)
	{
		perror("Error");
		print_error("Error");
	}
	return (0);
}
