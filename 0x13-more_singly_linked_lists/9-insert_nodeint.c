#include "lists.h"
/**
*insert_nodeint_at_index-add a  node to a linked list whith index
*
*@head: pointer to linked list
*@idx: the place of the node
*@n:value of n
*
*Return: new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i = 0;
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
				return (NULL);
	new_node->n = n;
	temp = *head;

	while (i <= idx && head != NULL)
	{
		if (i == (idx - 1))
		{
			new_node->next = temp->next;
			temp->next = new_node;
		}
		temp = temp->next;
		i++;
	}
	return (new_node);
}
