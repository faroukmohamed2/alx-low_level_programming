#include "main.h"
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		*(s + i) = c;
	}
	return (s);
}
