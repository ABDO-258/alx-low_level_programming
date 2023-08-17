#include "lists.h"
/**
 * get_dnodeint_at_index - return  a node  of linked list at an index
 * @head: points to head of the list
 * @index:index of node to return
 *
 * Description: doubly linked list node structure
 *
 *Return:  node of the linked list or null if not found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current;

	current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);



}
