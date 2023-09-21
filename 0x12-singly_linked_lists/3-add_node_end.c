#include "lists.h"
/**
 * add_node_end - add node at the end
 * @head: apointer to pointer
 * @str: a string to br duplicated
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{       
	int i = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);
	new->str = strdup(str);
	for (; str[i]; i++)
		;
	if (next == NULL)
	{
		new->len = i;
		new->next = *head;
		*head = new;
	}
	return (*head);
}
