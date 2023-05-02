#include "lists.h"
/**
*delete_nodeint_at_index - delete node with index
*
*@head:pointer to linked list
*@index:location of node to delete
*
*Return: 1 if succces 
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1, *temp2;
	size_t i=0;

	if (*head == NULL)
		return (-1);

	temp1 = *head ;
	if (index == 0)
	{
		*head = temp1->next;
		free (temp1);
		return (1);
	}
	while (i< index && head != NULL)
	{
		if (i == (index-1))
			temp2 =temp1;
		temp1=temp1->next;
		i++;
	}
	temp2->next=temp1->next;
	free(temp1);
	return (1);
}