#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: Head pointer
 * @index: index of the node
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
