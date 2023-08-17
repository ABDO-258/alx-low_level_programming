#include "lists.h"
/**
 * insert_dnodeint_at_index - add a node to a linked list at an index
 * @h: points to head of the list
 * @idx:index where to add the node
 * @n:data of the node
 *
 * Description: doubly linked list node structure
 *
 *Return: new node or null if error
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *current, *new_node;

	if (h == NULL)
		return (NULL);

	current = (*h);

	if (idx == 0)
	{
		return (add_dnodeint(&(*h), n));

	}
	while (current != NULL)
	{
		count++;
		if (count == (idx))
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->prev = current;
			new_node->next = current->next;
			current->next = new_node;

			return (new_node);
		}
		current = current->next;
	}
	count--;
	/*printf("count = %d\n",count);*/
	if (count == idx)
	{
		/*printf("count is %d\n",count);*/
		return(add_dnodeint_end(&(*h), n));
	}
	return (NULL);
}
