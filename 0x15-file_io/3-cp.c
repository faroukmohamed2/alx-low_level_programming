#include "main.h"
#include <fcntl.h>
/*
 * print_erroe - prints error
 * @file_from: the file from
 * @file_to: the file to
 * Return: void
 */

void print_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - copies afile to another file
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_form, file_to;
	char buffer[1024];
	int rdsize, wrsize, closefile;
	int chars = 1024;

	if (argc != 3)
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_WRONLY | O_APPEND | O_TRUNC | O_CREAT, 0664);
	print_error(file_from, file_to, argv);
	while (chars == 1024)
	{
		rdsize = read(file_from, buffer, 1024);
		if (rdsize == -1)
			print_error(-1, 0, argv);
		wrsize = write(file_to, buffer, rdsize);
		if (wrsize == -1)
			print_error(0, -1, argv);
	}
	closefile = close(file_from);
	if (closefile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_from);
		exit(100);
	}
	closefile = close(file_to);
	if (closefile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_to);
		exit(100);
	}
	return (0);
}
