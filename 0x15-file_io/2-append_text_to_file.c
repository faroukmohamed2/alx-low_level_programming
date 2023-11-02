#include "main.h"
#include <fcntl.h>
/**
 * append_text_to_file - appends text to a file
 * @filename: the filename to be created
 * @text_content: a string to be written in the file
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	for (; text_content[i]; i++)
		;
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd < 0)
		return (-1);
	write(fd, text_content, i);
	close(fd);
	return (1);
}#
