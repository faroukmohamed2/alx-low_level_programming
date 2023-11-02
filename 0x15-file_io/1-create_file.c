#include "main.h"
#include <fcntl.h>
/**
 * create_file - creates  a file
 * @filename: the filename to be created
 * @text_content: a string to be written in the file
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	for (; text_content[i]; i++)
		;
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd < 0)
		return (-1);
	write(fd, text_content, i);
	close(fd);
	return (1);
}
