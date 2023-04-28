#include "lists.h"
/**
 * add_node - adds node
 * @head: head
 * @str: string
 * Return: ptr to head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int l = 0;

	while (str[l] != '\0')
		l++;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->next = *head;
	node->str = strdup(str);
	node->len = l;
	*head = node;

	return (*head);
}
