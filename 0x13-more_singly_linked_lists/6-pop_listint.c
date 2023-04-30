#include "lists.h"
/**
*free_listint2-free a linked list
*
*@head: pointer to linked list
*
*/
int pop_listint(listint_t **head)

{
	listint_t *node;
	size_t m;

	if (*head != NULL)
	{
		node = *head;
		m = node->n;
		*head = (*head)->next;
		free(node);
	}
	else 
		return (0);
	return (m);
}

