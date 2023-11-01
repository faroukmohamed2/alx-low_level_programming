#include "main.h"
/**
 * read_textfile - reads a file and prints it
 * @filename: the file name
 * @letters: the number of letters
 * Return: 0 if false number of letters if true
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (!filename)
		return (0);
	char *buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	int fd = open(filename,  O_RDONLY);
	if (fd < 0)
		return (0);
	int rdsz = read(fd, buf, letters);
	int wrsz = write(_STDOUT_FILENO, buf, rdsz);
	close(fd);
	free(buf);
	return (wrsz);
}
