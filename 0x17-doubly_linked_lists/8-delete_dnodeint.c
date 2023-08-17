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
	dlistint_t *current, *temp;

	if (head == NULL || (*head) == NULL)
		return (-1);

	current = (*head);
	if (index == 0)
	{
		(*head) = current->next;

		free(current);
		current->prev = NULL;
		return (1);
	}

	while (current != NULL)
	{
		if (count == index)
		{
			temp = current;
			temp->next = current->next;
			temp->prev = current->prev;

			current = current->prev;
			current->next = temp->next;

			current = current->next;
			free(temp);
			return (1);

		}
		current = current->next;
		count++;
	}
	return (1);
}
