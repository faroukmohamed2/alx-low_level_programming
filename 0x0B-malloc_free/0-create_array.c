#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - create array
 * @size: the size of the array
 * @c: the specific character
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
		return (NULL);
	
	ptr = (char *)malloc(size);
	if (ptr == NULL )
		return (NULL);
	return (ptr);
}
