#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <string.h>

/**
 * read_textfile - function reads a textfile and prints it to the POSIX
 * standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it coukd read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *Rq;
	char *buf = (char *)malloc(letters + 1);
	size_t read_file;

	if (filename == NULL)
		return (0);
	Rq = fopen(filename, "r");
	if (Rq == NULL)
		return (0);

	if (buf == NULL)
	{
		fclose(Rq);
		return (0);
	}
	while (fgets(buf, letters, Rq) != NULL)
		write(STDOUT_FILENO, buf, strlen(buf));

	read_file = strlen(buf);

	free(buf);
	fclose(Rq);
	return (read_file);
}

