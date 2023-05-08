#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * print_error - prints the error message
 * @text: message
 * Return: 0
 */

void print_error(char *text)
{
	dprintf(STDERR_FILENO, "Error, %s\n", text);
	exit(1);
}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int Rq_from, Rq_to;
	ssize_t read_number;
	char buffer[BUFFER_SIZE];
	struct stat statbuf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	Rq_from = open(argv[1], O_RDONLY);
	if (Rq_from == -1)
	{
		perror("ERROR!");
		print_error("Can't source file for reading");
	}

	if (fstat(Rq_from, &statbuf) == -1)
	{
		perror("ERROR!");
		print_error("Can't check the source file");
	}

	if (!S_ISREG(statbuf.st_mode))
	{
		print_error("Not a regular file");
	}
	if (access(argv[1], R_OK) == -1)
	{
		perror("ERROR!");
		print_error("Error");
	}

	Rq_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (Rq_to == -1)
	{
		perror("ERROR!");
		print_error("Couldn't open destination file");
	}

	while ((read_number = read(Rq_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(Rq_to, buffer, read_number) != read_number)
		{
			perror("ERROR!");
			print_error("Error");
		}
	}
	if (read_number == -1)
	{
		perror("Error");
		print_error("Error");
	}

	if (close(Rq_from) == -1)
	{
		perror("Error");
		print_error("Error");
	}

	if (close(Rq_to) == -1)
	{
		perror("Error");
		print_error("Error");
	}
	return (0);
}
