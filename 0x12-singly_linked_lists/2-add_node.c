#include "lists.h"
int len(const char *str);
/**
 * add_node - add a node
 * @head: ponter
 * @str: string
 * Return: pointer to the newly assigned int
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)

		new_node->next = NULL;
	else
			new_node->next = *head;
		new_node->str = strdup(str);
		new_node->len = len(str);
		*head = new_node;
	return (*head);
}
/**
 * len - get the length of string
 * @str: the string
 * Return: length of a string
 */
int len(const char *str)
{
	int t;

	if (str == NULL)
		return (0);

	t = 0;
	while (str[t] != '\0')
	{
		t++;
	}
	return (t);
}
