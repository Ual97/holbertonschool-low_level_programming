#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to stdout
 * @filename: string input for text file
 * @letters: number of letters ir should read and print
 * Return: actual number of leeters it could read and print, 0 if file cant
 * be accessed or if file is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwrite;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters + 1);
	if (buff == NULL)
	{
		free(buff);
		close(fd);
		return (0);
	}
	nread = read(fd, buff, letters);
	if (nread == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	buff[letters] = '\0';

	nwrite = write(1, buff, nread);
	if (nwrite == -1)
		return (0);
	close(fd);
	free(buff);
	return (nread);
}
