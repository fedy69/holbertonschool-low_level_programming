#include "main.h"

/**
 * read_textfile - reads text file and prints to the POSIX stdout
 * @filename: file to read
 * @letters: number of letters to read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fd_r, fd_wr;
	char *buf = NULL;

	if (!filename)
		return (0);

	buf = malloc(letters + 1);
	if (!buf)
		return (0);

	/*open file*/
	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	/*read file*/
	fd_r = read(fd, buf, letters);
	if (fd_r == -1)
	{
		free(buf);
		return (0);
	}

	buf[letters] = '\0';

	fd_wr = write(STDOUT_FILENO, buf, fd_r);
	if (fd_wr == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (fd_wr);
}