#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd_open, fd_write, num_bytes;

	if (!filename)
		return (-1);
	fd_open = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd_open < 0)
		return (-1);
	if (!text_content)
		text_content = "";
	for (num_bytes = 0; text_content[num_bytes] != '\0'; num_bytes++)
	;
	fd_write = write(fd_open, text_content, num_bytes);
	if (fd_write < 0)
	{
		close(fd_open);
		return (-1);
	}
	close(fd_open);
	return (1);
}
