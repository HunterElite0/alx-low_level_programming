#include "lists.h"
/**
 * free_list - frees list
 * @head: head
 */
void free_list(list_t *head)
{
	list_t *nxt;

	if (!head)
		return;
	while (head)
	{
		nxt = head->next;
		free(head->str);
		free(head);
		head = nxt;
	}
}
