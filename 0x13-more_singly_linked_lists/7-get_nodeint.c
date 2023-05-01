#include "lists.h"
/**
*get_nodeint_at_index-git a specifique node of a linked list whith index
*
*@head: pointer to linked list
*@index: the place of the node
*
*Return:the data of the node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i = 0;

	while (i <= index && head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (0);
}
