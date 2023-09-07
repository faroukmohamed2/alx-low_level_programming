#include "main.h"
/**
 * _calloc - allocate memory
 * @nmemb: number of elements
 * @size: the size of elements
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, x;
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = size * nmemb;
	ptr = malloc(x);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < x; i++)
		*(p + i) = 0;
	return (ptr);
}
