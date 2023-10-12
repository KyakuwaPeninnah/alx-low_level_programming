#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the list
 * @n: data to be insert in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp = *head;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;
	new->prev = tmp;

	return (new);
}
