#ifndef _FILE_H
#define _FILE_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
ssize_t read_textfile(const char *filename, size_t letters);
#endif
