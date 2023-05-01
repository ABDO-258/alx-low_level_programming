#include "lists.h"
/**
*sum_listint-sum of data   of a linked list
*
*@head: pointer to linked list
*@index: the place of the node
*
*Return:the data of the node
*/
int sum_listint(listint_t *head)
{
	size_t sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
