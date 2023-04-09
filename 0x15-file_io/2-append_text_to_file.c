#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: name of file
 * @text_content: the NULL terminated string to add at the,
 * end of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl = open(filename, O_WRONLY | O_APPEND);

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
		ssize_t e = write(fl, text_content, length);

		if (e != (ssize_t)length)
		{
			close(fl);
			return (-1);
		}
	}

	close(fl);
	return (1);
}
