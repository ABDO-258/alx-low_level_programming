#include "lists.h"
/**
*print_listint-print a linked list
*
*@h:pointer to head of list
*
*Return:number of node
*/
size_t print_listint(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++, h = h->next)
	{
		printf("%d\n", h->n);
	}
	printf("%d\n", h->n);
	return (i);
}
