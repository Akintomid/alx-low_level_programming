#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>

/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 n success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *Rq = fopen(filename, "a");
	size_t length = strlen(text_content);
        size_t written_file = fwrite(text_content, 1, length, Rq);

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (-1);

	if (Rq == NULL)
		return (-1);

	if (written_file == length)
	{
		return (1);
	}
	else
		return (-1);

	return (0);
}
