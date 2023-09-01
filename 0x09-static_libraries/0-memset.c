#include "main.h"
#include <stdio.h>
char *_memset(char *s, char b, unsigned int n)
{
	_putchar(*s);
	_putchar(b);
	printf("%d", n);
	return (b);
}
