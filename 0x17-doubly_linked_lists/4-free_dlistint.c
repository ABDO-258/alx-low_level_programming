#include "lists.h"
/**
 * free_dlistint - free a doubly linked list
 * @head: points to head of the list
 *
 * Description: doubly linked list node structure
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *temp;

	current = head;
	while (current != NULL)
	{
		temp = current->next;

		free(current);
		current = temp;
	}
}
