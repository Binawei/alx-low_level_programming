#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head:A pointer to the head of the linked list
 * @idx: the index of the list where the new node should be added.
 * @n: the data part of the node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;/*to traverse the list*/
	listint_t *new;/*new node to be inserted*/
	unsigned int count = 0;

	ptr = *head;
	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;

	while (ptr->next != NULL)
	{
		if (count == idx)
		{
			new->next = ptr->next;
			ptr->next = new;
		}
	       ptr =  ptr->next;
		count++;
	}
	if (idx == 0 || ptr == NULL)
	{
		return (NULL);
	}
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	return (new);
}

