#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to
 *                 the POSIX standard output
 *
 * @filename: name of the file
 * @letters: number of letters to be read and printed
 *
 * Return: 0 if filename is NULL, 0 if write fails
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	t = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fd);
	return (w);
}
