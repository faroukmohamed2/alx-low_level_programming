#include "lists.h"
/**
 * listint_len - gives the number of elements
 * @h: a pointer to listsint_t
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
