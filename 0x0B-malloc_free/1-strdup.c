#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - duplicate a string
 * @str: the strinng
 * Return: the str
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;
	
	ptr = (char *)malloc(sizeof(str));
	for (i = 0; *(str + i) != '\0'; i++)
	{
		*(ptr + i) = *(str + i);
	}
	return (ptr);
}
