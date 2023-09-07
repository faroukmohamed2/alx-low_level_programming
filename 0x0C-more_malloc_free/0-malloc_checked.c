#include "main.h"
/**
 * malloc_checked - allocates memory with malloc
 * @b: the size of the allocation
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
