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
	unsigned int i, j;

	for (j = 0; *(str + j) != '\0';)
	{
		j++;
	}
	ptr = (char *)malloc(j + 1);
	if (ptr == NULL)
		return (ptr);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		*(ptr + i) = *(str + i);
	}
	return (ptr);
}
