#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at
 *index index of a listint_t linked list.
 * @head: pointer to the head
 * @index: index of the node
 * Return: 1 if successful -1 ifit fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *temp;
	listint_t *node;

	temp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (k = 0; k < index - 1 && temp != NULL && index != 0; k++)
		temp = temp->next;
	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		node = temp->next;
		free(temp);
		*head = node;
	}
	else
	{
		if (temp->next == NULL)
			node = temp->next;
		else
			node = temp->next->next;
		free(temp->next);
		temp->next = node;
	}
		return (1);
}
