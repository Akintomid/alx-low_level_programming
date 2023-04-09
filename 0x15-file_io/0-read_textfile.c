#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - function reads a text file and prints it
 * @filename: name of file
 * @letters: number of letters it should read and print
 * Return: thr actual numbers of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl = open(filename, O_RDONLY);
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t b_read = read(fl, buffer, letters);
	ssize_t b_written = write(STDOUT_FILENO, buffer, b_read);

	if (filename == NULL)
	{
		return (0);
	}

	if (fl == -1)
	{
		return (0);
	}

	if (buffer == NULL)
	{
		close(fl);
		return (0);
	}

	if (b_read == -1)
	{
		free(buffer);
		close(fl);
		return (0);
	}

	if (b_written == -1 || b_written != b_read)
	{
		free(buffer);
		close(fl);
		return (0);
	}

	free(buffer);
	close(fl);
	return (b_written);
}
