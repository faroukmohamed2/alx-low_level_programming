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
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for (; str[i]; i++)
		;
		new->str = strdup(str);
		new->len = i;
		new->next = NULL;
		temp = *head;
		if (temp == NULL)
		{
			*head = new;
		}
		else
		{
			while (temp != NULL)
				temp = temp->next;
			temp->next = new;
		}
	return (*head);
}
