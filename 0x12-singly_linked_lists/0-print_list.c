#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: Pointer to the list.
 * Return: Total number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	int k;

	if (h == NULL)
		return (0);
	for (k = 1; h->next != NULL; k++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (k);
}
