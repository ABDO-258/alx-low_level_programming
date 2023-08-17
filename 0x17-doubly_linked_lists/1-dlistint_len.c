#include "lists.h"
/**
 * dlistint_len - return the length of a doubly linked list
 * @h: points to head of the list
 *
 * Description: doubly linked list node structure
 *
 *Return: length of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);

}
