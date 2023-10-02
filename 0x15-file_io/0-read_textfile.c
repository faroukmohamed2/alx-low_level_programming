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
	int fd;
	char *st;
	ssize_t szwr, szrd;

	if (filename == NULL)
		return (0);
	st = malloc(letters * sizeof(char));
	if (st == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	szrd = read(fd, st, letters);
	szwr = write(STDOUT_FILENO, st, szrd);
	free(st);
	return (szwr);
}
