#include "lists.h"
/**
 * add_dnodeint_end - add a node att the end of a linked list
 * @head: points to head of the list
 * @n:data of new node
 *
 * Description: doubly linked list node structure
 *
 *Return: new node of the linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;/*Creat a new node*/

	new_node = malloc(sizeof(dlistint_t));/*allocate memory for the new node*/
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /*put data in the node*/
	new_node->next = NULL; /*the last node alwas have a null next pointer*/

	if ((*head) == NULL)/*if the linked list is empty*/
	{
		new_node->prev = NULL; /*make the pointer to prev null*/
		(*head) = new_node; /*make the head pointe to the new_node*/
		return (new_node);
	}

	last = (*head);
	while (last->next != NULL)
		last = last->next; /*go to the last node*/
	last->next = new_node; /*make the last next point to new node */

	new_node->prev = last; /*make the new node  prev point to last */

	return (new_node);

}
