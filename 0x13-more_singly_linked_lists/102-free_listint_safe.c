#include "lists.h"
/**
 * free_listp2 - frees a list
 * @head: head of a list.
 * Return: void
 */
void free_listp2(listp_t **head)
{
	listp_t *tmp;
	listp_t *new;

	if (head != NULL)
	{
		new = *head;
		while ((tmp = new) != NULL)
		{
			new = new->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a list.
 * @h: head of a list.
 * Return: size of the list freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listp_t *hp, *new, *add;
	listint_t *current;

	hp = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hp;
		hp = new;

		add = hp;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hp);
				return (nodes);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		nodes++;
	}

	*h = NULL;
	free_listp2(&hp);
	return (nodes);
}
