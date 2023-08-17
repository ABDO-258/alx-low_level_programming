#include "lists.h"
/**
 * sum_dlistint - return  sum  of linked list data
 * @head: points to head of the list
 *
 * Description: doubly linked list node structure
 *
 *Return: return  sum  of linked list data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;

	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
