#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of file
 *
 * Return: 1 if success -1 on failure
 *         if filename is NULL return -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file, w, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	w = write(file, text_content, len);

	if (file == -1 || w == -1)
		return (-1);

	close(file);
	return (1);
}
