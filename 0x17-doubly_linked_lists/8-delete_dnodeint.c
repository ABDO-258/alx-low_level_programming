#include "lists.h"
/**
 * delete_dnodeint_at_index - remove a node from a linked list at an index
 * @head: points to head of the list
 * @index:index where to remove the node
 *
 * Description: doubly linked list node structure
 *
 *Return: return 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current;

	if (head == NULL || (*head) == NULL)
		return (-1);

	current = (*head);
	if (index == 0)
	{
		(*head) = (*head)->next;
		(*head)->prev = NULL;
		free(current);
		return (1);
	}

    while (current != NULL && count < index )
	{
		current = current->next;
		count++;
	}

    if (current == NULL)
        return (-1);
/* update the previous node next to skip the current node*/
    if (current->prev)
        current->prev->next = current->next;
/* update the nex node previuos to skip the current node*/
    if (current->next)
        current->next->prev = current->prev;

    free(current);
    return (1);
}
