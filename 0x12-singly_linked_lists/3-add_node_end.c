#include "lists.h"
/**
*add_node_end - add new node to the beginning  of a linked list
*
*@head:pointer to head of a linked list
*
*@str: pointer to string
*
*Return:pointer to the new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t length;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (length = 0; new_node->str[length] != '\0'; length++)
		;
	new_node->len = length;
	new_node->next = NULL;
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
