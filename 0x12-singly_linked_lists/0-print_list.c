#include "lists.h"
/**
 * print_lists - print everything in a list
 * @h: a pointer to the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	if (h->str == NULL)
	{
		printf("[0] (nil)");
	}
	printf("[%d] %s", h->len, h->str);
	return (len);
}
