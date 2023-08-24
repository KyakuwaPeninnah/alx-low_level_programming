#include "lists.h"
int len(const char *str);
list_t *create_node(const char *str);
/**
 * add_node_end - adds nodes to the end
 * @head: pointer
 * @str: the new node
 * Return: pointer to the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *new_node;

	ptr  = *head;
	if (head == NULL)
	{
		return (NULL);
	}
		new_node = create_node(str);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)

	{
		*head = new_node;
		return (*head);
	}
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new_node;
	return (*head);
}
/**
 * create_node - create nodes
 * @str: string
 * Return: pointer
 */
list_t *create_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;
	return (new_node);
}
/**
 * len - length of a string
 * @str: string
 * Return: length
 */
int len(const char *str)
{
	int k;

	if (str == NULL)
		return (0);

	k = 0;
	while (str[k] != '\0')
	{
		k++;
	}
	return (k);
}
