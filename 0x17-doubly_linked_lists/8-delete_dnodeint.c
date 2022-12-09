#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node
 * at index index of a dlistint_t linked list.
 * @head: pointer to pointer of the first node
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count;

	if (!head || !(*head))
	{
		return (-1);
	}

	temp = (*head);
	if (index == 0)
	{
		if (temp->next)
		{
			*head = temp->next;
			(*head)->prev = NULL;
		}
		else
			*head = NULL;
		free(temp);
		return (1);
	}
	count = 0;
	while (count < index)
	{
		temp = temp->next;
		count++;
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
