#include "lists.h"
/**
*list_len -return number of list
*
*@h:pointer to head of list
*
*Return:number of list
*/
size_t list_len(const list_t *h)
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
