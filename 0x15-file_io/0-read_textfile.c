#include "main.h"
#include <fcntl.h>
/**
 * read_textfile - reads a file and prints it
 * @filename: the file name
 * @letters: the number of letters
 * Return: 0 if false number of letters if true
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t rdsz, wrsz;

	if (!filename)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	fd = open(filename,  O_RDONLY);
	if (fd < 0)
		return (0);
	rdsz = read(fd, buf, letters);
	wrsz = write(STDOUT_FILENO, buf, rdsz);
	close(fd);
	free(buf);
	return (wrsz);
}
