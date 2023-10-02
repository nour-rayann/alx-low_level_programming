#include "main.h"
/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: file to be read
 * @letters: number of letters to be read
 * Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_bytes, check_read;
	int check_open;
	char *buf;

	if (filename == NULL)
		return (0);
	check_open = open(filename, O_RDONLY);
	if (check_open < 0)
		return (0);
	buf = malloc(letters * sizeof(char));
	check_read = read(check_open, buf, letters);
	if (check_read < 0)
		return (0);
	num_bytes = write(1, buf, check_read);

	free(buf);
	close(check_open);
	return (num_bytes);
}
