#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: points to head of the list
 * @n: data of the new node
 *
 * Description: doubly linked list node structure
 *
 *Return: new node added to the linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;/*Creat a new node*/

	new_node = malloc(sizeof(dlistint_t));/*allocate memory for the new node*/
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /*put data in the node*/


	new_node->prev = NULL;
	new_node->next = (*head);/*make next of new node head*/

	if (*head != NULL)
		(*head)->prev = new_node;
	(*head) = new_node;


	return (new_node);

}
