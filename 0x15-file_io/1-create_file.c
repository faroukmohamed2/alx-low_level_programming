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
	size_t rdsz;
	int i = 0;

	for (; text_content[i]; i++)
		;
	fd = open(filename, O_CREAT | O_RDONLY | O_WRONLY);
	if (fd < 0)
		return (-1);
	rdsz = read(fd, text_content, i);
	write(O_WRONLY, text_content, rdsz);
	close(fd);
	return (1);
}
