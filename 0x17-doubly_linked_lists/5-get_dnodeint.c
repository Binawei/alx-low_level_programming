#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
 * @head: pointer to the first node of the linked list
 * @index: the index of the node, starting from 0
 *
 * Return: A pointer to the nth node and Null if index is not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *trav;
	unsigned int count;

	trav = head;
	count = 0;
	while (trav != NULL)
	{
		if (count == index)
		{
			return (trav);
		}
		count++;
		trav = trav->next;
	}
	return (NULL);
}
