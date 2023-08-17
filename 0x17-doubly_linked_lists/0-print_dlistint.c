#include "lists.h"
/**
 * print_dlistint - print the contnet of a doubly linked list
 * @h: points to head of the list
 *
 * Description: doubly linked list node structure
 *
 *Return: length of linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
