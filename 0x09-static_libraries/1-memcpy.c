#include "main.h"
#include <stdio.h>
char *_memcpy(char *dest, char *src, unsigned int n)
{
	_putchar(*dest);
	_putchar(*src);
	printf("%d", n);
	return (dest);
}
