#include "lists.h"
/**
 * list_len - the number of aelments in list_t list
 * @h: the pointer o the list
 * Return: the number of lists
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
