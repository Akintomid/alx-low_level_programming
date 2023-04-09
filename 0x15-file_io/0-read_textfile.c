#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * read_textfile - reads and prints a text file
 * @filename: file name
 * @letters: number of letters to read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r_count = fread(buffer, sizeof(char), letters, fl);
	char *buff = (char *)malloc(letters + 1);
	FILE *fl = fopen(filename, "r");

	if (filename == NULL)
		return (0);

	FILE *file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	if (buff == NULL)
	{
		fclose(file);
		return (0);
	}

	if (r_count == -1)
	{
		fclose(file);
		free(buff);
		return (0);
	}

	buff[r_count] = '\0';

	if (fwrite(buff, sizeof(char), r_count, stdout) != r_count)
	{
		fclose(file);
		free(buff);
		return (0);
	}

	fclose(file);
	free(buff);

	return (r_count);
}
