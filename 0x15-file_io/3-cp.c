#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, fd_close;
	char buffer[1024];
	ssize_t fd_read, fd_write;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		exit(98);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		exit(99);

	while ((fd_read = read(fd_from, buffer, 1024)) > 0)
	{
		fd_write = write(fd_to, buffer, fd_read);
		if (fd_write == -1)
			exit(99);
	}

	if (fd_read == -1)
		exit(98);

	fd_close = close(fd_from);
	if (fd_close == -1)
		exit(100);

	fd_close = close(fd_to);
	if (fd_close == -1)
		exit(100);

	return (0);
}
