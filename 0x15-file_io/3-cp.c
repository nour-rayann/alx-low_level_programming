#include "main.h"
#include <stdio.h>
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: int
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to, fd_close;
	char *buffer[1024];
	ssize_t fd_read, fd_write;

	if (argc != 3)
	{
		dprintf(2, "%s\n", "Usage: cp file_from file_to");
		exit(97); }
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (fd_to < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	for (fd_read = 1024; fd_read == 1024;)
	{
		fd_read = read(fd_from, buffer, 1024);
		if (fd_read < 0)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98); }
		fd_write = write(fd_to, buffer, fd_read);
		if (fd_write < 0)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99); }
	}
	fd_close = close(fd_from);
	if (fd_close < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100); }
	fd_close = close(fd_to);
	if (fd_close < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100); }
	return (0); }
