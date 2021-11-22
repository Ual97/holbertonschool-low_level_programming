#include "main.h"
#include <string.h>

/**
 * create_file - a function that creates a file
 * @filename: name of the file to create
 * @text_content: string to write onto file
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int nwrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
