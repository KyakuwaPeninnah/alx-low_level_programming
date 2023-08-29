#include "lists.h"
/**
 * free_listp - frees a list
 * @head: head of a list.
 * Return: void.
 */
void free_listp(listp_t **head)
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
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listp_t *hp, *new, *add;

	hp = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hp;
		hp = new;

		add = hp;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hp);
				return (nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}

	free_listp(&hp);
	return (nodes);
}
