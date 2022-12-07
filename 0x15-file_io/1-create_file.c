#include "main.h"
#include <stdlib.h>

/**
 * create_file - function that creates a file
 *
 * @filename: name of the file to be created
 * @text_content: NULL terminated string to write the file
 *
 * Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	char *buff;

	/* write */
	fd = open("filename", O_CREAT | O_WRONLY, 0600);

	if (fd == -1 || fd == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		write(fd);
		exit(1);
	}

	write(fd, text_content, 15);
	close(fd);

	/* read */
	fd = open("filename", O_RDONLY);

	if (fd == -1 || fd == NULL)
	{
		return (-1);
	}
	read(fd, buff, 15);
	buff[15] = '\0';

	return (1);
}
