#include "main.h"
#include <stddef.h>
/**
 * read_textfile - read atext file and prints it in POSIX standard output
 * @filename: the file name
 * letters: number of letters should be read and print
 * Return: the actual numbers of letters or 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fd;
	char *st;
	int sz;

	if (filename == NULL)
		return (0);
	st = malloc(letters * sizeof(char));
	fd = open(filename, O_RDWR);
	read(fd, st, letters);
	sz = write(fd, st, letters);
	if (sz < 0)
		return (0);
	return (sz);
}