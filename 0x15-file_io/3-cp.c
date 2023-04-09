#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - ENTRY POINT
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd_from = open(argv[1], O_RDONLY);
	int fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	char buffer[BUFFER_SIZE];
	ssize_t cread;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((cread = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		ssize_t cwritten = write(fd_to, buffer, cread);

		if (cwritten != cread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (cread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
