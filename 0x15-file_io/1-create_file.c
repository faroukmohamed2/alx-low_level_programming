#include "main.h"
/**
 * create_file - creates file
 * @filename: the file name
 * @text_content
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, szwr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (; *(text_content + i);)
		i++;
	szwr = write(fd, text_content, i);
	if (szwr == -1)
		return (-1);
	close(fd);
	return (szwr);
}
