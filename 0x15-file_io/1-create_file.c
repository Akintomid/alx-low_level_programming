#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <errno.h>

/**
 * create_file - function creates a file
 * @filename: name of file to create
 * @text_content: the NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	char *buf = malloc(sizeof(text_content));

	FILE *Rq = fopen(filename, "w");

	if (Rq == NULL)
		return (-1);
	if (buf == NULL)
		return (-1);

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		size_t length = strlen(text_content);
		ssize_t ret = write(fileno(Rq), text_content, length);

		if (ret == -1)
		{
			fclose(Rq);
			return (-1);
		}
	}
	chmod(filename, S_IRUSR | S_IWUSR);
	fclose(Rq);
	return (1);
}
