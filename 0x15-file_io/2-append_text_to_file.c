#include "main.h"

/**
 * append_text_to_file - appends text at end of a file
 * @filename: file to append to
 * @text_content: NULL terminated string to add
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fd_wr, length = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[length])
			length++;

		fd_wr = write(fd, text_content, length);
		if (fd_wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}