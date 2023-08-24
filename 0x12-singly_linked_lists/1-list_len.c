#include "lists.h"
/**
 *list_len - returns the number of elements in a linked list_t list.
 * @h: pointer
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int j;

	if (h == NULL)
	return (0);

	for (j = 1; h->next != NULL; j++)
		h = h->next;
	return (j);
}
