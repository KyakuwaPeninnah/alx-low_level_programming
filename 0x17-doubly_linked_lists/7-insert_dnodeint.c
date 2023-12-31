#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: double pointer to the list
 * @idx: index of the node to be inserted
 * @n: data to insert
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int k;
	dlistint_t *new;
	dlistint_t *tmp = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new || !h)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (k = 0; tmp && k < idx; k++)
	{
		if (k == idx - 1)
		{
			if (tmp->next == NULL)
				return (add_dnodeint_end(h, n));
			new->next = tmp->next;
			new->prev = tmp;
			tmp->next->prev = new;
			tmp->next = new;
			return (new);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
