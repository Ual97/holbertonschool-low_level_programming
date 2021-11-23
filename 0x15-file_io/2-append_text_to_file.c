#include "main.h"
#include <string.h>

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: name of file
 * @text_content: content for file
 * Return: 1 if succesful -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nwrite;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	nwrite = write(fd, text_content, strlen(text_content));
	if (nwrite == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
