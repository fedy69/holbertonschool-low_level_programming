#include "main.h"

/**
 * main - copie content of file to another file
 * @argc: number of arguments
 * @argv: files to add
 * Return: 0
 */

int main(int argc, char **argv)
{
	int file1, file2, n;
	char buf[1024];

	if (!(argc == 3))
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((n = read(file1, buf, 1024)) > 0)
	{
		if (write(file2, buf, n) != n || file2 == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(file1) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1), exit(100);
	if (close(file2) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2), exit(100);
	return (0);
}