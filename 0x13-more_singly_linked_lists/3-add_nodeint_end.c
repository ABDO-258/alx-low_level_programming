#include "lists.h"
/**
*add_nodeint_end-add a new node to the end  of a linked list
*
*@head:pointer to head of a linked list
*
*@n: number of new node
*
*Return: new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	temp = *head;

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (*head);
}
