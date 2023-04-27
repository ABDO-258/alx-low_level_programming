#include "lists.h"
/**
*print_list - print a linked list
*
*@h:pointer to head of list
*
*Return:number of list
*/
size_t print_list(const list_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++, h = h->next)
	{
		if (h->str == NULL)
			printf("[%d] (nill)\n",0);
		else
			printf("[%d] %s\n", h->len, h->str);
	}
	printf("[%d] %s\n", h->len, h->str);
	return (i);
}
