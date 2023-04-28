#include "lists.h"
/**
 * add_node_end - adds node
 * @head: head
 * @str: string
 * Return: ptr to head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *node;
	int l = 0;

	while (str[l] != '\0')
		l++;
	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = strdup(str);
	node->len = l;
	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = node;

	return (node);
}
