#include "lists.h"
/**
*pop_listint-delete the head node of a linked list and return its data n
*
*@head: pointer to linked list
*
*Return:the data of the head node
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

