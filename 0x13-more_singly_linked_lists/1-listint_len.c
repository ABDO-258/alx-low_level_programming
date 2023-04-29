#include "lists.h"
/**
*listint_len-return number of node
*
*@h:pointer to head of list
*
*Return:number of list
*/
size_t listint_len(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);

	for (i = 1; h->next != NULL; h = h->next)
	{
		i++;
	}
	return (i);
}

