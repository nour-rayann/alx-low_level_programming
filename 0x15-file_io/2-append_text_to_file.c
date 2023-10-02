#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd_open, fd_write, letters;

	if (!filename)
		return (-1);
	fd_open = open(filename, O_WRONLY | O_APPEND);
	if (fd_open < 0)
		return (-1);
	if (!text_content)
	{
		close(fd_open);
		return (1);
	}
	for (letters = 0; text_content[letters]; letters++)
	;
	fd_write = write(fd_open, text_content, letters);
	if (fd_write < 0)
	{
		close(fd_open);
		return (-1);
	}
	return (1);
}
