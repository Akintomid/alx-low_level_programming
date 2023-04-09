#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - function creates a file
 * @filename: name of file
 * @text_content: a NULL terminated string to write into the file
 * Return: 1 upon success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fl = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (filename == NULL)
	{
		return (-1);
	}

	if (fl == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		size_t length = strlen(text_content);
		ssize_t c = write(fl, text_content, length);

		if (c != (ssize_t)length)
		{
			close(fl);
			return (-1);
		}
	}

	close(fl);
	return (1);
}
