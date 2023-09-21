#include "lists.h"
/**
 * print_lists - print everything in a list
 * @h: a pointer to the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
			printf("[%d] %s", h->len, h->str);
		i++;
	}
	return (i);
}
