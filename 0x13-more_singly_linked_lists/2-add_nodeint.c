#include "lists.h"
/**
 * add_nodeint - adds anode in the beginning
 * @head: a pointer to pointer
 * @n: an int
 * Return: the address of the element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
