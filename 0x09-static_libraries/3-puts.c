#include "main.h"
void _puts(char *s)
{
	int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		_putchar (*(s + i));
	}
}
