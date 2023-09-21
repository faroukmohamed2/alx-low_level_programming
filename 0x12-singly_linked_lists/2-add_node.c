#include "lists.h"
#include <string.h>
/**
 * add_node: add a node to the list
 * @head: the head
 * @str: a string to be dublicated
 * Return: addres of the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (; str[i];)
		i++;
	new->len = i;
	new->next = *head;
	*head = new;
	return (*head);
}
